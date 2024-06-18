#include <opencv2/opencv.hpp>
#include <vector>

class BestFit {
public:
    static double check(const cv::Mat &matrix);
    static std::pair<double, double> analyze(const cv::Mat &A, uint8_t mode);
private:
    static void binarizeMatrix(cv::Mat& matrix, double threshold);
    static std::pair<std::vector<double>, std::vector<int>> fitLineRANSAC(const std::vector<cv::Point> &points);
};