#include "BestFit.hpp"
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

std::pair<double, double> BestFit::analyze(const cv::Mat &A) {
    if (A.size() != cv::Size(8, 8) || A.type() != CV_8UC1) {
        throw std::invalid_argument("Input must be an 8x8 matrix with type CV_8UC1.");
    }

    cv::Mat A_smoothed;
    cv::medianBlur(A, A_smoothed, 3);

    std::vector<std::vector<cv::Point>> contours;
    cv::findContours(A_smoothed, contours, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);

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