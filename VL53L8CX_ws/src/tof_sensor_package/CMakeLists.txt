cmake_minimum_required(VERSION 3.5)
project(tof_sensor_package)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(OpenCV REQUIRED)
find_package(base_interfaces_demo REQUIRED)

# Include directories
include_directories(
  include
  ${rclcpp_INCLUDE_DIRS}
  ${OpenCV_INCLUDE_DIRS}
  ${base_interfaces_demo_INCLUDE_DIRS}
  ${CMAKE_SOURCE_DIR}/../install/base_interfaces_demo/include  # Add this to ensure the path is included
)

# Add executable
add_executable(pallet_detect_node src/pallet_detect_node.cpp src/vl53l8_oper.cpp src/BestFit.cpp)

# Link libraries
ament_target_dependencies(pallet_detect_node
  rclcpp
  std_msgs
  sensor_msgs
  OpenCV
  base_interfaces_demo
)

# Install targets
install(TARGETS
  pallet_detect_node
  DESTINATION lib/${PROJECT_NAME})

# Testing (optional)
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # The following line skips the linter which checks for copyrights
  # Uncomment the line when a copyright and license is not present in all source files
  # set(ament_cmake_copyright_FOUND TRUE)
  # The following line skips cpplint (only works in a git repo)
  # Uncomment the line when this package is not in a git repo
  # set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
