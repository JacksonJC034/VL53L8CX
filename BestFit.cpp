#include <opencv2/opencv.hpp>
#include <iostream>
#include <cmath>

int main() {
    // Define the matrix A
    cv::Mat A = (cv::Mat_<uint8_t>(8, 8) << 
        1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 0, 0,
        1, 1, 1, 1, 0, 0, 0, 0,
        1, 1, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0
    );

    // Convert the matrix to an image (enlarge it for better visualization)
    cv::resize(A, A, cv::Size(), 50, 50, cv::INTER_NEAREST);
    
    // Convert the binary matrix to a binary image
    cv::Mat binaryImage;
    A.convertTo(binaryImage, CV_8U);
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

        // Print the angle
        std::cout << "Angle of the best fit line: " << angle << " degrees" << std::endl;
    } else {
        std::cout << "No contours found" << std::endl;
    }

    return 0;
}
