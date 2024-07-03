#include <opencv2/opencv.hpp>
#include <vector>

class BestFit {
public:
    static double check(const cv::Mat &matrix);
    static void binarizeMatrix(cv::Mat& matrix, int threshold);
    static std::pair<double, double> analyze(const cv::Mat &A, int threshold);
private:
    static std::pair<std::vector<double>, std::vector<int>> fitLineRANSAC(const std::vector<cv::Point> &points);
};
