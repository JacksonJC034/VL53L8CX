#include <opencv2/opencv.hpp>
#include <vector>

class BestFit {
public:
    static uint32_t status;
    static void binarizeMatrix(cv::Mat& matrix, int threshold);
    static std::pair<double, double> analyze(const cv::Mat &A, int threshold);
    // static std::pair<double, double> BestFit::analyzeTwoMatrices(const cv::Mat &A, const cv::Mat &B, int threshold);
private:
    static std::pair<std::vector<double>, std::vector<cv::Point>> fitLineRANSAC(const std::vector<cv::Point> &points);
};
