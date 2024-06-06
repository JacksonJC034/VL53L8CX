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
        int row = i % 8;
        int col = i / 8;
        uint16_t value = (raw_data[2 * i] << 8) | raw_data[2 * i + 1];
        matrix.at<uint16_t>(row, col) = value;
    }
}

int main() {
    std::string portName = "/dev/ttyUSB0";
    CVl53l8Oper vl53l8Sensor(portName);

    uint8_t raw_data[128];
    double h = 19.5; // Distance from sensor to tray [mm]
    double a = sqrt(2) * h * tan(32.5 * M_PI / 180); // Side length of scanning area [mm]
    cv::Mat A(8, 8, CV_16UC1);
    cv::Mat A_normalized;
    cv::Mat A_filtered;

    while (true) {
        if (vl53l8Sensor.getTof(reinterpret_cast<uint16_t*>(raw_data)) == 1) {
            arrangeTOFData(raw_data, A);
            cv::normalize(A, A_normalized, 0, 255, cv::NORM_MINMAX, CV_8UC1);
            cv::bilateralFilter(A_normalized, A_filtered, 3, 50, 50, cv::BORDER_REFLECT);
            std::cout << A << std::endl;
            cv::resize(A_filtered, A_filtered, cv::Size(640, 640), 0, 0, cv::INTER_NEAREST);
            cv::imshow("Filtered Matrix", A_filtered);
            cv::waitKey(500);
        } else {
            std::cout << "Failed to get TOF data." << std::endl;
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    return 0;
}
