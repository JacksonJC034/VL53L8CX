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
}09:00#include "BestFit.hpp"
#include <opencv2/opencv.hpp>
#include <vector>
#include <cmath>
#include <random>
#include <algorithm>
#include <numeric>

double BestFit::check(const cv::Mat &matrix) {
    int nonZeroCount = cv::countNonZero(matrix);
    int totalCount = matrix.rows * matrix.cols;
    if (nonZeroCount == totalCount) {
        return 1.0;
    } else if (nonZeroCount == 0) {
        return 0.0;
    } else {
        return 0.5;
    }
}

void binarizeMatrix(cv::Mat& matrix, uint8_t threshold) {
    cv::threshold(matrix, matrix, threshold, 1, cv::THRESH_BINARY);
    matrix.convertTo(matrix, CV_8UC1);
}

std::pair<double, double> BestFit::analyze(const cv::Mat &A, uint8_t mode) {
    if (A.size() != cv::Size(8, 8) || A.type() != CV_8UC1) {
        throw std::invalid_argument("Input must be an 8x8 matrix with type CV_8UC1.");
    }
    
    double hights[3] = {22, 41, 58}; // Distance from sensor to tray [mm]
    double threshold[3] = {40, 60, 70}; // Threshold for binarize [mm]
    double a = sqrt(2) * hights[mode - 1] * tan(32.5 * M_PI / 180); // Side length of scanning area [mm]
    
    cv::Mat A_filtered;
    cv::Mat A_src;
    A.convertTo(A_src, CV_32F);
    cv::bilateralFilter(A_src, A_filtered, 5, 10.0, 5.0, cv::BORDER_REFLECT);
    A_filtered.convertTo(A_filtered, CV_16UC1);
    
    binarizeMatrix(A_filtered, threshold[mode - 1]);

    std::vector<std::vector<cv::Point>> contours;
    cv::findContours(A_filtered, contours, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_NONE);

    if (contours.empty()) {
        throw std::runtime_error("No boundary found in the input matrix.");
    }

    std::vector<cv::Point> boundaryPoints;
    for (const auto &contour : contours) {
        if (contour.size() > 5) {
            boundaryPoints.insert(boundaryPoints.end(), contour.begin(), contour.end());
        }
    }

    std::vector<cv::Point> filteredBoundaryPoints;
    for (const auto &point : boundaryPoints) {
        if (point.x > 0 && point.x < 7 && point.y > 0 && point.y < 7) {
            filteredBoundaryPoints.push_back(point);
        }
    }

    if (filteredBoundaryPoints.empty()) {
        throw std::runtime_error("No significant boundary found in the input matrix.");
    }

    for (auto &point : filteredBoundaryPoints) {
        point = cv::Point(point.y, A.rows - point.x - 1);
    }

    auto [coefficients, inliers] = fitLineRANSAC(filteredBoundaryPoints);

    double slope = coefficients[0];
    double intercept = coefficients[1];

    double theta = atan(slope);
    double angle = theta * 180.0 / M_PI;

    return {angle, intercept};
}

std::pair<std::vector<double>, std::vector<int>> BestFit::fitLineRANSAC(const std::vector<cv::Point> &points) {
    const double maxDistance = 1.0;
    const int numTrials = 100;

    std::vector<int> bestInliers;
    std::vector<double> bestCoefficients = {0, 0};

    for (int i = 0; i < numTrials; ++i) {
        std::vector<int> indices(points.size());
        std::iota(indices.begin(), indices.end(), 0);
        std::shuffle(indices.begin(), indices.end(), std::mt19937{std::random_device{}()});

        cv::Point p1 = points[indices[0]];
        cv::Point p2 = points[indices[1]];

        if (p2.x == p1.x) continue;

        double slope = static_cast<double>(p2.y - p1.y) / (p2.x - p1.x);
        double intercept = p1.y - slope * p1.x;

        std::vector<int> inliers;
        for (size_t j = 0; j < points.size(); ++j) {
            double distance = std::abs(slope * points[j].x - points[j].y + intercept) / std::sqrt(slope * slope + 1);
            if (distance <= maxDistance) {
                inliers.push_back(j);
            }
        }

        if (inliers.size() > bestInliers.size()) {
            bestInliers = inliers;
            bestCoefficients = {slope, intercept};
        }
    }

    return {bestCoefficients, bestInliers};
}