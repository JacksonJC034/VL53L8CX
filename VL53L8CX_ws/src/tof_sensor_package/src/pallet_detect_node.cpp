#include "vl53l8_oper.hpp"
#include "BestFit.hpp"
#include <opencv2/opencv.hpp>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>
#include <iostream>
#include <thread>
#include <chrono>
#include <cmath>
#include <vector>
#include <cstdint>
#include <algorithm>
#include <base_interfaces_demo/msg/location.hpp>
#include <base_interfaces_demo/msg/pallet_info.hpp>
using base_interfaces_demo::msg::Location;
using base_interfaces_demo::msg::PalletInfo;

const int DISTANCE1 = 40; //22
const int DISTANCE2 = 60; //41
const int DISTANCE3 = 80; //58

class PalletDetectNode : public rclcpp::Node {
public:
    PalletDetectNode()
    : Node("pallet_detect_node"), vl53l8Sensor("/dev/ttyS7")
    {
        publisher_ = this->create_publisher<PalletInfo>("/rbot/pallet_detect_topic", 10);
        subscriber_ = this->create_subscription<Location>(
            "/rbot/location_topic", 10, std::bind(&PalletDetectNode::location_callback, this, std::placeholders::_1));
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(100), std::bind(&PalletDetectNode::timer_callback, this));

        // Initialize pallet_info_ parameters to 0
        pallet_info_.distance = 0;
        pallet_info_.pallet = 0;
        pallet_info_.drift = 0.0;
        pallet_info_.angle = 0.0;
        pallet_info_.error = 0;
        pallet_info_.sensor1.fill(0);
        pallet_info_.sensor2.fill(0);
    }

private:
    void location_callback(const Location::SharedPtr msg) {
        location_ = *msg;
    }

    void timer_callback() {
        uint8_t raw_data1[128];
        uint8_t raw_data2[128];

        bool data_ready1 = vl53l8Sensor.getTof(reinterpret_cast<uint16_t*>(raw_data1), 1) == 1;
        bool data_ready2 = vl53l8Sensor.getTof(reinterpret_cast<uint16_t*>(raw_data2), 2) == 1;

        if (data_ready1 && data_ready2) {
            cv::Mat A(8, 8, CV_16UC1);
            cv::Mat C(8, 8, CV_16UC1);
            cv::Mat A_32(8, 8, CV_32FC1);
            cv::Mat C_32(8, 8, CV_32FC1);
            arrangeTOFData(raw_data1, A);
            arrangeTOFData(raw_data2, C);
            cv::flip(C, C, 0);

            A.convertTo(A, CV_32F);
            C.convertTo(C, CV_32F);
            cv::bilateralFilter(A, A_32, 5, 10.0, 5.0, cv::BORDER_REFLECT);
            cv::bilateralFilter(C, C_32, 5, 10.0, 5.0, cv::BORDER_REFLECT);
            A_32.convertTo(A, CV_16U);
            C_32.convertTo(C, CV_16U);

            std::cout << "A" << A << std::endl;
            std::cout << "C" << C << std::endl;

            populatePalletInfoMatrix(pallet_info_.sensor1, A);
            populatePalletInfoMatrix(pallet_info_.sensor2, C);

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

            std::cout << "threshold: " << distance_threshold << std::endl;

            if (distance_threshold != 0) {
                BestFit::binarizeMatrix(A, distance_threshold);
                BestFit::binarizeMatrix(C, distance_threshold);

                if (checkPalletCondition(A) && checkPalletCondition(C)) {
                    pallet_info_.pallet = 1;
                } else {
                    pallet_info_.pallet = 0;
                }

                if (BestFit::check(A) == 0.5 && BestFit::check(C) == 0.5) {
                    auto [angle, drift] = BestFit::analyze(A, distance_threshold);
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

    void populatePalletInfoMatrix(std::array<uint32_t, 64>& sensor_array, const cv::Mat& matrix) {
        for (int i = 0; i < 64; ++i) {
            int row = i % 8;
            int col = i / 8;
            sensor_array[i] = matrix.at<uint16_t>(row, col);
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
    rclcpp::Publisher<PalletInfo>::SharedPtr publisher_;
    rclcpp::Subscription<Location>::SharedPtr subscriber_;
    Location location_;
    PalletInfo pallet_info_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PalletDetectNode>());
    rclcpp::shutdown();
    return 0;
}
