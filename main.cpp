#include "vl53l8_oper.hpp"
#include "BestFit.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>
#include <thread>
#include <chrono>
#include <cmath>
#include <vector>
#include <cstdint>
#include <algorithm>

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
    // std::string portName = "/dev/ttyUSB0";
    // CVl53l8Oper vl53l8Sensor(portName);

    // uint8_t raw_data1[128];
    // uint8_t raw_data2[128];
    uint8_t raw_data1[128] = {0x00, 0x51, 0x00, 0x56, 0x00, 0x57, 0x00, 0x4B, 0x00, 0x39, 0x00, 0x35, 0x00, 0x37, 0x00, 0x34,
        0x00, 0x56, 0x00, 0x58, 0x00, 0x57, 0x00, 0x49, 0x00, 0x3A, 0x00, 0x39, 0x00, 0x35, 0x00, 0x34,
        0x00, 0x5D, 0x00, 0x5C, 0x00, 0x58, 0x00, 0x4D, 0x00, 0x3C, 0x00, 0x35, 0x00, 0x38, 0x00, 0x34,
        0x00, 0x5C, 0x00, 0x65, 0x00, 0x56, 0x00, 0x51, 0x00, 0x39, 0x00, 0x37, 0x00, 0x36, 0x00, 0x39,
        0x00, 0x5D, 0x00, 0x61, 0x00, 0x58, 0x00, 0x4D, 0x00, 0x3B, 0x00, 0x36, 0x00, 0x35, 0x00, 0x37,
        0x00, 0x63, 0x00, 0x61, 0x00, 0x5B, 0x00, 0x50, 0x00, 0x3A, 0x00, 0x38, 0x00, 0x37, 0x00, 0x34,
        0x00, 0x5D, 0x00, 0x5F, 0x00, 0x5E, 0x00, 0x54, 0x00, 0x3B, 0x00, 0x39, 0x00, 0x35, 0x00, 0x35,
        0x00, 0x54, 0x00, 0x58, 0x00, 0x59, 0x00, 0x4C, 0x00, 0x3A, 0x00, 0x3A, 0x00, 0x36, 0x00, 0x35};
    uint8_t raw_data2[128];
    std::copy(raw_data1, raw_data1 + 128, raw_data2);

    auto last_time = std::chrono::high_resolution_clock::now();

    while (true) {
        // bool data_ready1 = vl53l8Sensor.getTof(reinterpret_cast<uint16_t*>(raw_data1), 2) == 1;
        // bool data_ready2 = vl53l8Sensor.getTof(reinterpret_cast<uint16_t*>(raw_data2), 3) == 1;
        bool data_ready1 = true;
        bool data_ready2 = true;

        if (data_ready1 && data_ready2) {

            cv::Mat A(8, 8, CV_16UC1); // Initialize matrix A for sensor 1
            cv::Mat C(8, 8, CV_16UC1); // Initialize matrix B for sensor 2
            arrangeTOFData(raw_data1, A); // Arrange TOF data into matrix A
            arrangeTOFData(raw_data2, C); // Arrange TOF data into matrix B
            
            if (BestFit::check(A) == 1 && BestFit::check(C) == 1) {
                std::cout << "Pose NOT Accessible!" << std::endl;
            } else if (BestFit::check(A) == 1 && BestFit::check(C) == 0.5) {
                std::cout << "Please Move Backward!" << std::endl;
            } else if (BestFit::check(A) == 1 && BestFit::check(C) == 0) {
                std::cout << "Please Move Backward!" << std::endl;
            } else if (BestFit::check(A) == 0.5 && BestFit::check(C) == 1) {
                std::cout << "Please Move Forward!" << std::endl;
            } else if (BestFit::check(A) == 0.5 && BestFit::check(C) == 0.5) {
                // auto resultA = BestFit::analyze(A, 1);
                // auto resultC = BestFit::analyze(C, 1);
                // double angle = (resultA.first + resultC.first) / 2;
                // double drift = (resultA.second + resultC.second) / 2;
                // std::cout << "Angle = " << angle << " degrees, Drift = " << drift << " mm" << std::endl;
                std::cout << "Calculating!" << std::endl;
            } else if (BestFit::check(A) == 0.5 && BestFit::check(C) == 0) {
                std::cout << "Please Move Backward!" << std::endl;
            } else if (BestFit::check(A) == 0 && BestFit::check(C) == 1) {
                std::cout << "Please Move Forward!" << std::endl;
            } else if (BestFit::check(A) == 0 && BestFit::check(C) == 0.5) {
                std::cout << "Please Move Forward" << std::endl;
            } else {
                std::cout << "Pose NOT Accessible!" << std::endl;
            }

            auto current_time = std::chrono::high_resolution_clock::now();
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(current_time - last_time).count();
            std::cout << "Loop Duration: " << duration << " ms" << std::endl;
            last_time = current_time;

        } else {
            std::cout << "Failed to get TOF data from one or both sensors." << std::endl;
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    return 0;
}
