#include <opencv2/opencv.hpp>
#include <vector>
#include <utility>

class BestFit {
public:
    static double check(const cv::Mat &matrix);
    static std::pair<double, double> analyze(const cv::Mat &matrix, uint8_t mode);
private:
    static std::pair<std::vector<double>, std::vector<int>> fitLineRANSAC(const std::vector<cv::Point> &points);
};

