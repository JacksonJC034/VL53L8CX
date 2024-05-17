#include "vl53l8_oper.hpp"
#include "BestFit.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>
#include <thread>
#include <chrono>
#include <cmath>

int main() {
    // Create an instance of the CVl53l8Oper class with the appropriate serial port.
    // Adjust the port name to the actual port connected to your sensor.
    std::string portName = "/dev/ttyUSB0";  // Replace with your actual port
    CVl53l8Oper vl53l8Sensor(portName);

    // Buffer to hold the TOF data
    uint16_t tof_data[64];

    // Loop to read and process the TOF data
    while (true) {
        // Get the TOF data
        if (vl53l8Sensor.getTof(tof_data) == 1) {
            std::cout << "TOF Data: ";
            for (int i = 0; i < 64; ++i) {
                std::cout << tof_data[i] << " ";
            }
            std::cout << std::endl;

            // Convert TOF data to an 8x8 matrix
            cv::Mat A(8, 8, CV_8UC1, tof_data);

            // Normalize the data to binary (assuming a threshold for demonstration)
            cv::Mat binaryMatrix;
            cv::threshold(A, binaryMatrix, 128, 1, cv::THRESH_BINARY);

            // Find the angle of the best fit line
            try {
                double angle = findBestFitLineAngle(binaryMatrix);
                std::cout << "Angle of the best fit line: " << angle << " degrees" << std::endl;
            } catch (const std::runtime_error& e) {
                std::cerr << e.what() << std::endl;
            }
        } else {
            std::cout << "Failed to get TOF data." << std::endl;
        }

        // Sleep for a short duration before reading again
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}