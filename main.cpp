#include "vl53l8_oper.hpp"
#include "BestFit.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>
#include <thread>
#include <chrono>
#include <cmath>
#include <vector>

// Function to binarize the matrix
void binarizeMatrix(cv::Mat& matrix, uint8_t threshold = 70) {
    cv::threshold(matrix, matrix, threshold, 1, cv::THRESH_BINARY);
}

// Function to arrange TOF data into the matrix
void arrangeTOFData(uint16_t* tof_data, cv::Mat& matrix) {
    for (int i = 0; i < 64; ++i) {
        int row = 7 - (i / 8);
        int col = i % 8;
        matrix.at<uint8_t>(row, col) = static_cast<uint8_t>(tof_data[i]);
    }
}

int main() {
    std::string portName = "/dev/ttyUSB0";  // Replace with your actual port
    CVl53l8Oper vl53l8Sensor(portName);

    uint16_t tof_data[64];

    while (true) {
        if (vl53l8Sensor.getTof(tof_data) == 1) {
            cv::Mat A(8, 8, CV_8UC1); // Initialize matrix A
            arrangeTOFData(tof_data, A); // Arrange TOF data into matrix A
            
            std::cout << "Matrix A: " << A << std::endl;

            cv::Mat C = A.clone(); // Duplicate A to C

            // Binarize the matrices
            binarizeMatrix(A);
            binarizeMatrix(C);

            std::cout << "TOF Data: ";
            for (int i = 0; i < 64; ++i) {
                std::cout << tof_data[i] << " ";
            }
            std::cout << std::endl;

            double h = 19.5; // Distance from sensor to tray [mm]
            double a = sqrt(2) * h * tan(32.5 * M_PI / 180); // Side length of scanning area [mm]

            // std::cout << "Binary Matrix A: " << A << std::endl;
            // std::cout << "Binary Matrix C: " << C << std::endl;

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

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
