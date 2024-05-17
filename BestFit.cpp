#include "BestFit.hpp"
#include <vector>
#include <stdexcept>
#include <cmath>

double findBestFitLineAngle(const cv::Mat& matrix) {
    // Enlarge the matrix for better visualization
    cv::Mat enlargedMatrix;
    cv::resize(matrix, enlargedMatrix, cv::Size(), 50, 50, cv::INTER_NEAREST);

    // Convert the binary matrix to a binary image
    cv::Mat binaryImage;
    enlargedMatrix.convertTo(binaryImage, CV_8U);
    binaryImage = binaryImage * 255;

    // Find the contours of the regions
    std::vector<std::vector<cv::Point>> contours;
    cv::findContours(binaryImage, contours, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);

    // Fit a line to the points on the boundary
    if (!contours.empty()) {
        std::vector<cv::Point> points = contours[0]; // Assuming only one contour
        cv::Vec4f line;
        cv::fitLine(points, line, cv::DIST_L2, 0, 0.01, 0.01);

        // Calculate the angle of the line
        double angle = std::atan2(line[1], line[0]) * 180.0 / CV_PI;

        return angle;
    } else {
        throw std::runtime_error("No contours found");
    }
}