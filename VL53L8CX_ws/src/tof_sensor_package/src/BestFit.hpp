#include <opencv2/opencv.hpp>
#include <vector>

class BestFit {
public:
    // Checks the matrix to determine if it's fully populated (1.0), empty (0.0), or mixed (0.5)
    static double check(const cv::Mat &matrix);

    // Analyzes the given matrix to find the angle and drift
    static std::pair<double, double> analyze(const cv::Mat &A, uint8_t mode);

private:
    // Helper method to binarize the matrix with a given threshold
    static void binarizeMatrix(cv::Mat& matrix, double threshold);

    // Fits a line to the given points using RANSAC and returns the line coefficients and inliers
    static std::pair<std::vector<double>, std::vector<int>> fitLineRANSAC(const std::vector<cv::Point> &points);
};