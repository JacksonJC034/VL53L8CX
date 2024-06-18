#include "vl53l8_oper.hpp"
#include "BestFit.hpp"
#include <opencv2/opencv.hpp>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>
#include <iostream>
#include <thread>
#include <chrono>
#include <cmath>
#include <vector>
#include <cstdint>
#include <algorithm>

class PalletDetectNode : public rclcpp::Node {
public:
    PalletDetectNode()
    : Node("pallet_detect_node"), vl53l8Sensor("/dev/ttyUSB0")
    {
        publisher_ = this->create_publisher<std_msgs::msg::Float64MultiArray>("pallet_detect", 10);
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(500), std::bind(&PalletDetectNode::timer_callback, this));
    }

private:
    void timer_callback() {
        uint8_t raw_data1[128];
        uint8_t raw_data2[128];

        bool data_ready1 = vl53l8Sensor.getTof(reinterpret_cast<uint16_t*>(raw_data1), 3) == 1;
        bool data_ready2 = vl53l8Sensor.getTof(reinterpret_cast<uint16_t*>(raw_data2), 4) == 1;

        if (data_ready1 && data_ready2) {
            cv::Mat A(8, 8, CV_16UC1);
            cv::Mat C(8, 8, CV_16UC1);
            arrangeTOFData(raw_data1, A);
            arrangeTOFData(raw_data2, C);
            cv::flip(C, C, 0);

            std::vector<double> result;
            if (BestFit::check(A) == 1 && BestFit::check(C) == 1) {
                result = {0.0, 0.0};
            } else if (BestFit::check(A) == 1 && BestFit::check(C) == 0.5) {
                result = {1.0, 0.0};
            } else if (BestFit::check(A) == 1 && BestFit::check(C) == 0) {
                result = {1.0, 0.0};
            } else if (BestFit::check(A) == 0.5 && BestFit::check(C) == 1) {
                result = {-1.0, 0.0};
            } else if (BestFit::check(A) == 0.5 && BestFit::check(C) == 0.5) {
                auto resultA = BestFit::analyze(A, 1);
                auto resultC = BestFit::analyze(C, 1);
                double angle = (resultA.first + resultC.first) / 2;
                double drift = (resultA.second + resultC.second) / 2;
                result = {angle, drift};
            } else {
                result = {0.0, 0.0};
            }

            std_msgs::msg::Float64MultiArray msg;
            msg.data = result;
            publisher_->publish(msg);
        } else {
            RCLCPP_WARN(this->get_logger(), "Failed to get TOF data from one or both sensors.");
        }
    }

    void arrangeTOFData(uint8_t* raw_data, cv::Mat& matrix) {
        for (int i = 0; i < 64; ++i) {
            int row = i % 8;
            int col = i / 8;
            uint16_t value = (raw_data[2 * i] << 8) | raw_data[2 * i + 1];
            matrix.at<uint16_t>(row, col) = value;
        }
    }

    CVl53l8Oper vl53l8Sensor;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr publisher_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PalletDetectNode>());
    rclcpp::shutdown();
    return 0;
}
