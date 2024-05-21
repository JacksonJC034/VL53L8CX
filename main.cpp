#include "vl53l8_oper.hpp"
#include "BestFit.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>
#include <thread>
#include <chrono>
#include <cmath>
#include <vector>

void binarizeMatrix(cv::Mat& matrix, uint8_t threshold = 70) {
    cv::threshold(matrix, matrix, threshold, 1, cv::THRESH_BINARY);
}

void arrangeTOFData(uint8_t* raw_data, cv::Mat& matrix) {
    for (int i = 0; i < 64; ++i) {
        int row = 7 - (i / 8);
        int col = i % 8;
        uint16_t value = (raw_data[2 * i] << 8) | raw_data[2 * i + 1];
        matrix.at<uint16_t>(row, col) = value;
    }
}

void printMatrix(const cv::Mat& matrix) {
    for (int i = 0; i < matrix.rows; ++i) {
        for (int j = 0; j < matrix.cols; ++j) {
            std::cout << static_cast<int>(matrix.at<uint16_t>(i, j)) << " ";
        }
        std::cout << std::endl;
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

            // std::cout << "TOF Data: ";
            // for (int i = 0; i < 64; ++i) {
            //     uint16_t value = (raw_data[2 * i] << 8) | raw_data[2 * i + 1];
            //     std::cout << value << " ";
            // }
            // std::cout << std::endl;

            std::cout << "Matrix A before binarization:" << A << std::endl;

            cv::Mat C = A.clone(); // Duplicate A to C

            // Binarize the matrices
            binarizeMatrix(A);
            binarizeMatrix(C);

            std::cout << "Binarized Matrix A:" << A << std::endl;

            double h = 19.5; // Distance from sensor to tray [mm]
            double a = sqrt(2) * h * tan(32.5 * M_PI / 180); // Side length of scanning area [mm]

            if (BestFit::check(A) == 1 && BestFit::check(C) == 1) {
                std::cout << "Pose NOT Accessible!" << std::endl;
            } else if (BestFit::check(A) == 1 && BestFit::check(C) == 0.5) {
                std::cout << "Move Backward!" << std::endl;
            } else if (BestFit::check(A) == 1 && BestFit::check(C) == 0) {
                std::cout << "Move Backward!" << std::endl;
            } else if (BestFit::check(A) == 0.5 && BestFit::check(C) == 1) {
                std::cout << "Move Forward!" << std::endl;
            } else if (BestFit::check(A) == 0.5 && BestFit::check(C) == 0.5) {
                auto result_A = BestFit::analyze(A);
                auto result_C = BestFit::analyze(C);
                double angle_A = result_A.first;
                double angle_C = result_C.first;
                double intercept_A = result_A.second;
                double intercept_C = result_C.second;

                double slope = tan((angle_A + angle_C) / 2);

                double angle = (angle_A + angle_C) / 2;
                double intercept = intercept_A + a / 2 * slope - (a - intercept_C - a / 2 * slope);

                std::cout << "Angle = " << angle << " degrees, Drift = " << intercept << " mm" << std::endl;
            } else if (BestFit::check(A) == 0.5 && BestFit::check(C) == 0) {
                std::cout << "Move Backward!" << std::endl;
            } else if (BestFit::check(A) == 0 && BestFit::check(C) == 1) {
                std::cout << "Move Forward!" << std::endl;
            } else if (BestFit::check(A) == 0 && BestFit::check(C) == 0.5) {
                std::cout << "Move Forward" << std::endl;
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
