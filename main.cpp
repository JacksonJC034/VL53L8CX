#include "vl53l8_oper.hpp"
#include <iostream>
#include <thread>
#include <chrono>

int main() {
    // Create an instance of the CVl53l8Oper class with the appropriate serial port.
    // Adjust the port name to the actual port connected to your sensor.
    std::string portName = "/dev/ttyUSB0";  // Replace with your actual port
    CVl53l8Oper vl53l8Sensor(portName);

    // Buffer to hold the TOF data
    uint16_t tof_data[64];

    // Loop to read and print the TOF data
    while (true) {
        // Get the TOF data
        if (vl53l8Sensor.getTof(tof_data) == 1) {
            std::cout << "TOF Data: ";
            for (int i = 0; i < 64; ++i) {
                std::cout << tof_data[i] << " ";
            }
            std::cout << std::endl;
        } else {
            std::cout << "Failed to get TOF data." << std::endl;
        }

        // Sleep for a short duration before reading again
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}