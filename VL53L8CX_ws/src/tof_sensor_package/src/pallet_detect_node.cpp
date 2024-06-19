#include "vl53l8_oper.hpp"
#include "BestFit.hpp"
#include <opencv2/opencv.hpp>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>
#include <msg/location.hpp>
#include <msg/pallet_info.hpp>
#include <iostream>
#include <thread>
#include <chrono>
#include <cmath>
#include <vector>
#include <cstdint>
#include <algorithm>

const int DISTANCE1 = 22; //40
const int DISTANCE2 = 41; //60
const int DISTANCE3 = 58; //70

class PalletDetectNode : public rclcpp::Node {
public:
    PalletDetectNode()
    : Node("pallet_detect_node"), vl53l8Sensor("/dev/ttyUSB0")
    {
        publisher_ = this->create_publisher<msg::PalletInfo>("pallet_detect", 10);
        subscriber_ = this->create_subscription<msg::Location>(
            "/rbot/location_topic", 10, std::bind(&PalletDetectNode::location_callback, this, std::placeholders::_1));
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(500), std::bind(&PalletDetectNode::timer_callback, this));

        // Initialize pallet_info_ parameters to 0
        pallet_info_.d = 0;
        pallet_info_.pallet = 0;
        pallet_info_.drift = 0.0;
        pallet_info_.angle = 0.0;
        pallet_info_.error = 0;
    }

private:
    void location_callback(const msg::Location::SharedPtr msg) {
        location_ = *msg;
    }

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

            int distance_threshold = 0;
            if (location_.state_motor_or_son == 2) {
                distance_threshold = DISTANCE1;
            } else if (location_.state_motor_or_son == 1) {
                if (location_.state_lift_down_or_up == 2) {
                    distance_threshold = DISTANCE2;
                } else if (location_.state_lift_down_or_up == 1) {
                    distance_threshold = DISTANCE3;
                } else if (location_.state_lift_down_or_up == 0) {
                    pallet_info_.error = -2;
                }
            } else if (location_.state_motor_or_son == 0) {
                pallet_info_.error = -1;
            }

            if (distance_threshold != 0) {
                BestFit::binarizeMatrix(A, distance_threshold);
                BestFit::binarizeMatrix(C, distance_threshold);

                if (checkPalletCondition(A) && checkPalletCondition(C)) {
                    pallet_info_.pallet = 1;
                } else {
                    pallet_info_.pallet = 0;
                }

                if (BestFit::check(A) == 0.5 && BestFit::check(C) == 0.5) {
                    auto [angle, drift] = BestFit::analyze(A);
                    pallet_info_.angle = angle;
                    pallet_info_.drift = drift;
                    pallet_info_.error = 0;
                } else {
                    pallet_info_.error = 1;
                }
            }

            publisher_->publish(pallet_info_);
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

    bool checkPalletCondition(const cv::Mat& matrix) {
        int count = 0;
        for (int i = 0; i < matrix.rows; ++i) {
            for (int j = 0; j < matrix.cols; ++j) {
                if (matrix.at<uint16_t>(i, j) < 100) {
                    count++;
                }
            }
        }
        return count >= 62;
    }

    CVl53l8Oper vl53l8Sensor;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<msg::PalletInfo>::SharedPtr publisher_;
    rclcpp::Subscription<msg::Location>::SharedPtr subscriber_;
    msg::Location location_;
    msg::PalletInfo pallet_info_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PalletDetectNode>());
    rclcpp::shutdown();
    return 0;
}
