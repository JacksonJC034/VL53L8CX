#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "vl53l8_oper.hpp"
#include "BestFit.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>
#include <chrono>
#include <vector>
#include <memory>

using namespace std::chrono_literals;

class ToFSensorNode : public rclcpp::Node {
public:
    ToFSensorNode() : Node("tof_sensor_node"), vl53l8Sensor("/dev/ttyUSB0"), i(1) {
        publisher_ = this->create_publisher<std_msgs::msg::String>("tof_data", 10);
        timer_ = this->create_wall_timer(
            100ms, std::bind(&ToFSensorNode::timer_callback, this));
    }

private:
    void arrangeTOFData(uint8_t* raw_data, cv::Mat& matrix) {
        for (int i = 0; i < 64; ++i) {
            int row = 7 - (i / 8);
            int col = i % 8;
            uint16_t value = (raw_data[2 * i] << 8) | raw_data[2 * i + 1];
            matrix.at<uint16_t>(row, col) = value;
        }
    }

    void timer_callback() {
        uint8_t raw_data1[128];
        uint8_t raw_data2[128];

        bool data_ready1 = vl53l8Sensor.getTof(reinterpret_cast<uint16_t*>(raw_data1), 2) == 1;
        bool data_ready2 = vl53l8Sensor.getTof(reinterpret_cast<uint16_t*>(raw_data2), 3) == 1;

        if (data_ready1 && data_ready2) {
            cv::Mat A(8, 8, CV_16UC1);
            cv::Mat C(8, 8, CV_16UC1);
            arrangeTOFData(raw_data1, A);
            arrangeTOFData(raw_data2, C);

            RCLCPP_INFO(this->get_logger(), "Iteration: %d", i);
            RCLCPP_INFO(this->get_logger(), "Matrix A:\n%s", cv::format(A).c_str());
            RCLCPP_INFO(this->get_logger(), "Matrix C:\n%s", cv::format(C).c_str());

            std_msgs::msg::String message;
            if (BestFit::check(A) == 1 && BestFit::check(C) == 1) {
                message.data = "Pose NOT Accessible!";
            } else if (BestFit::check(A) == 1 && BestFit::check(C) == 0.5) {
                message.data = "Please Move Backward!";
            } else if (BestFit::check(A) == 1 && BestFit::check(C) == 0) {
                message.data = "Please Move Backward!";
            } else if (BestFit::check(A) == 0.5 && BestFit::check(C) == 1) {
                message.data = "Please Move Forward!";
            } else if (BestFit::check(A) == 0.5 && BestFit::check(C) == 0.5) {
                auto resultA = BestFit::analyze(A, 1);
                auto resultC = BestFit::analyze(C, 1);
                double angle = (resultA.first + resultC.first) / 2;
                double drift = (resultA.second + resultC.second) / 2;
                message.data = "Angle = " + std::to_string(angle) + " degrees, Drift = " + std::to_string(drift) + " mm";
            } else if (BestFit::check(A) == 0.5 && BestFit::check(C) == 0) {
                message.data = "Please Move Backward!";
            } else if (BestFit::check(A) == 0 && BestFit::check(C) == 1) {
                message.data = "Please Move Forward!";
            } else if (BestFit::check(A) == 0 && BestFit::check(C) == 0.5) {
                message.data = "Please Move Forward";
            } else {
                message.data = "Pose NOT Accessible!";
            }

            publisher_->publish(message);

            auto current_time = std::chrono::high_resolution_clock::now();
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(current_time - last_time).count();
            RCLCPP_INFO(this->get_logger(), "Loop Duration: %d ms", duration);
            last_time = current_time;

        } else {
            RCLCPP_WARN(this->get_logger(), "Failed to get TOF data from one or both sensors.");
        }
        i++;
    }

    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    CVl53l8Oper vl53l8Sensor;
    int i;
    std::chrono::time_point<std::chrono::high_resolution_clock> last_time;
};

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ToFSensorNode>());
    rclcpp::shutdown();
    return 0;
}
