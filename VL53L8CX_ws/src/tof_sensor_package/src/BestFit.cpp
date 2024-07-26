#include "BestFit.hpp"
#include <opencv2/opencv.hpp>
#include <vector>
#include <cmath>
#include <random>
#include <algorithm>
#include <numeric>

void BestFit::binarizeMatrix(cv::Mat& matrix, int threshold) {
    // matrix.convertTo(matrix, CV_8UC1, 1.0/255);
    // threshold = int(threshold/255);
    for (int i = 0; i < matrix.rows; ++i) {
            for (int j = 0; j < matrix.cols; ++j) {
                if (matrix.at<uint16_t>(i, j) > threshold) {
                    matrix.at<uint16_t>(i, j) = 1;
                }
                else {
                    matrix.at<uint16_t>(i, j) = 0;
                }
            }
        }
    matrix.convertTo(matrix, CV_8UC1);
    // std::cout << "binarized: " << matrix << std::endl;
    // cv::threshold(matrix, matrix, threshold, 1, cv::THRESH_BINARY);
}

std::pair<double, double> BestFit::analyze(const cv::Mat &A, int threshold) {
    // cv::Mat A_filtered;
    // cv::Mat A_src;
    cv::Mat Canny;
    // A.convertTo(A_src, CV_32FC1);
    // cv::bilateralFilter(A_src, A_filtered, 5, 10.0, 5.0, cv::BORDER_REFLECT);
    // for (int i = 0; i < A_filtered.rows; ++i) {
    //     for (int j = 0; j < A_filtered.cols; ++j) {
    //         if (A_filtered.at<uint16_t>(i, j) > 255) {
    //             A_filtered.at<uint16_t>(i, j) = 255;
    //         }
    //     }
    // }
    // A_filtered.convertTo(A_filtered, CV_8UC1);
    
    // binarizeMatrix(A_filtered, threshold);

    // std::vector<std::vector<cv::Point>> contours;

    // cv::findContours(A_filtered, contours, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_NONE);
    cv::Canny(A, Canny, 150, 200);
    std::cout << "Edge: " << Canny << std::endl;
    cv::imwrite("Edge.png", Canny);
    std::vector<cv::Point> edgePoints;
    cv::findNonZero(Canny, edgePoints);
    double centerX = 3.5;
    double centerY = 3.5;
    std::vector<cv::Point> robotEdgePoints;
    for (const auto& point : edgePoints) {
        double robotX = point.x - centerX;
        double robotY = centerY - point.y; // flip y-coordinate
        std::cout << "(" << robotX << ", " << robotY << ")" << std::endl;
        robotEdgePoints.emplace_back(robotX, robotY);
    }
    // if (contours.empty()) {
        // throw std::runtime_error("No boundary found in the input matrix.");
    //     std::cout << "No boundary found in the input matrix" << std::endl;
    // }

    // std::vector<cv::Point> boundaryPoints;
    // for (const auto &contour : contours) {
    //     if (contour.size() > 5) {
    //         boundaryPoints.insert(boundaryPoints.end(), contour.begin(), contour.end());
    //     }
    // }

    // std::vector<cv::Point> filteredBoundaryPoints;
    // for (const auto &point : boundaryPoints) {
    //     if (point.x > 0 && point.x < 7 && point.y > 0 && point.y < 7) {
    //         filteredBoundaryPoints.push_back(point);
    //     }
    // }
    double angle = 0.0;
    double intercept = 0.0;

    if (robotEdgePoints.size() < 4) {
        // throw std::runtime_error("No significant boundary found in the input matrix.");
        std::cout << "No significant boundary found in the input matrix." << std::endl;
    }
    else {
        auto [coefficients, inliers] = fitLineRANSAC(robotEdgePoints);
        double slope = coefficients[0];
        intercept = coefficients[1];
        double theta = atan(slope);
        angle = theta * 180.0 / M_PI;
    }

    // for (auto &point : robotEdgePoints) {
    //     point = cv::Point(point.y, A.rows - point.x - 1);
    // }

    return {angle, intercept};
}

std::pair<std::vector<double>, std::vector<cv::Point>> BestFit::fitLineRANSAC(const std::vector<cv::Point> &points) {
    const double maxDistance = 0.8;
    const int numTrials = 100;

    std::vector<int> bestInliersIndices;
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

        std::vector<int> inliersIndices;
        
        for (size_t j = 0; j < points.size(); ++j) {
            double distance = std::abs(slope * points[j].x - points[j].y + intercept) / std::sqrt(slope * slope + 1);
            if (distance <= maxDistance) {
                inliersIndices.push_back(j);
            }
        }

        if (inliersIndices.size() > bestInliersIndices.size()) {
            bestInliersIndices = inliersIndices;
            bestCoefficients = {slope, intercept};
        }
    }
    
    std::vector<cv::Point> bestInliers;
    for (int idx : bestInliersIndices) {
        bestInliers.push_back(points[idx]);
    }

    if (!bestInliers.empty()) {
        int n = bestInliers.size();
        cv::Mat X(n, 2, CV_64F);
        cv::Mat y(n, 1, CV_64F);

        for (int i = 0; i < n; ++i) {
            X.at<double>(i, 0) = bestInliers[i].x;
            X.at<double>(i, 1) = 1.0;
            y.at<double>(i, 0) = bestInliers[i].y;
        }

        // Solve for the coefficients using the normal equation
        cv::Mat XtX = X.t() * X;
        cv::Mat XtY = X.t() * y;
        cv::Mat coeffs;
        cv::solve(XtX, XtY, coeffs, cv::DECOMP_SVD);

        bestCoefficients[0] = coeffs.at<double>(0, 0); // slope
        bestCoefficients[1] = coeffs.at<double>(1, 0); // intercept
    }

    return {bestCoefficients, bestInliers};
}

