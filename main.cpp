#include "vl53l8_oper.hpp"
#include "BestFit.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>
#include <thread>
#include <chrono>
#include <cmath>
#include <vector>

/*  TODOS:
    1. Finish up angle/drift calculating algorithm (Robust enough for both edge and face detection!)
    2. Test it with 2 TOF sensors
    3. Modify code to verify if the communication frequency reaches 10Hz
    4. ...
*/

/*  INPUTS: 
    uint8_t mode = 1, 2, or 3; corresponding to 22mm, 41mm, 58mm offsets;

*/

/*  OUTPUTS:
    1. std::pair<double, double> = <angle, drift> in <[degrees], [mm]>;
    2. "Pose NOT Accessible!"
    3. "Please Move Forward!"
    4. "Please Move Backward!"
*/

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
            
            std::cout << A << std::endl;

            cv::Mat C = A.clone(); // Duplicate A to C        

            // std::cout << A << std::endl;

            if (BestFit::check(A) == 1 && BestFit::check(C) == 1) {
                std::cout << "Pose NOT Accessible!" << std::endl;
            } else if (BestFit::check(A) == 1 && BestFit::check(C) == 0.5) {
                std::cout << "Please Move Backward!" << std::endl;
            } else if (BestFit::check(A) == 1 && BestFit::check(C) == 0) {
                std::cout << "Please Move Backward!" << std::endl;
            } else if (BestFit::check(A) == 0.5 && BestFit::check(C) == 1) {
                std::cout << "Please Move Forward!" << std::endl;
            } else if (BestFit::check(A) == 0.5 && BestFit::check(C) == 0.5) {
                // auto result_A = BestFit::analyze(A, 2);
                // auto result_C = BestFit::analyze(C, 2);
                // double angle_A = result_A.first;
                // double angle_C = result_C.first;
                // double intercept_A = result_A.second;
                // double intercept_C = result_C.second;

                // double slope = tan((angle_A + angle_C) / 2);

                // double angle = (angle_A + angle_C) / 2;
                // double intercept = intercept_A + a / 2 * slope - (a - intercept_C - a / 2 * slope);

                // std::cout << "Angle = " << angle << " degrees, Drift = " << intercept << " mm" << std::endl;
                std::cout << "Calculating..." << std::endl;
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
}
