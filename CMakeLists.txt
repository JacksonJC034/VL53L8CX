cmake_minimum_required(VERSION 3.10)

# Project name
project(VL53L8CX)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(vl53l8 main.cpp vl53l8_oper.cpp)

# Include directories
include_directories(${PROJECT_SOURCE_DIR})

# Link libraries
target_link_libraries(vl53l8 pthread)