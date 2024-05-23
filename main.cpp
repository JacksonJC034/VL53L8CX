#include "vl53l8_oper.hpp"
#include "BestFit.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>
#include <thread>
#include <chrono>
#include <cmath>
#include <vector>

void arrangeTOFData(uint8_t* raw_data, cv::Mat& matrix) {
    for (int i = 0; i < 64; ++i) {
        int row = 7 - (i / 8);
        int col = i % 8;
        uint16_t value = (raw_data[2 * i] << 8) | raw_data[2 * i + 1];
        matrix.at<uint16_t>(row, col) = value;
    }
}

int main() {
    std::string portName = "/dev/ttyUSB0";
    CVl53l8Oper vl53l8Sensor(portName);

    uint8_t raw_data[128];

    while (true) {
        if (vl53l8Sensor.getTof(reinterpret_cast<uint16_t*>(raw_data)) == 1) {
            cv::Mat A(8, 8, CV_16UC1); // Initialize matrix A
            arrangeTOFData(raw_data, A); // Arrange TOF data into matrix A
            
            cv::Mat C = A.clone(); // Duplicate A to C        

            if (BestFit::check(A) == 1 && BestFit::check(C) == 1) {
                std::cout << "Pose NOT Accessible!" << std::endl;
            } else if (BestFit::check(A) == 1 && BestFit::check(C) == 0.5) {
                std::cout << "Please Move Backward!" << std::endl;
            } else if (BestFit::check(A) == 1 && BestFit::check(C) == 0) {
                std::cout << "Please Move Backward!" << std::endl;
            } else if (BestFit::check(A) == 0.5 && BestFit::check(C) == 1) {
                std::cout << "Please Move Forward!" << std::endl;
            } else if (BestFit::check(A) == 0.5 && BestFit::check(C) == 0.5) {
                auto result = BestFit::analyze(A, 2);
                double angle = result.first;
                double drift = result.second;
                std::cout << "Angle = " << angle << " degrees, Drift = " << drift << " mm" << std::endl;
            } else if (BestFit::check(A) == 0.5 && BestFit::check(C) == 0) {
                std::cout << "Please Move Backward!" << std::endl;
            } else if (BestFit::check(A) == 0 && BestFit::check(C) == 1) {
                std::cout << "Please Move Forward!" << std::endl;
            } else if (BestFit::check(A) == 0 && BestFit::check(C) == 0.5) {
                std::cout << "Please Move Forward" << std::endl;
            } else {
                std::cout << "Pose NOT Accessible!" << std::endl;
            }
        } else {
            std::cout << "Failed to get TOF data." << std::endl;
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    return 0;
}