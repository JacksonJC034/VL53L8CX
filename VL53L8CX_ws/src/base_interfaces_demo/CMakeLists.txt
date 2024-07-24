cmake_minimum_required(VERSION 3.8)
project(base_interfaces_demo)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
rosidl_generate_interfaces(${PROJECT_NAME}
  "action/Nav.action"
  "msg/Ohom.msg"
  "msg/HallInfo.msg"
  "msg/Location.msg"
  "msg/MotorCmd.msg"
  "msg/MotorStatus.msg"
  "msg/Manual.msg"
  "msg/Test.msg"
  "srv/Hall.srv"
  "msg/BmsInfo.msg"
  "msg/ChargerInfo.msg"
  "msg/ManualSeekLabel.msg"
  "msg/SeekCmd.msg"
  "msg/SeekRet.msg"
  "msg/SystemStatus.msg"
  "action/Reverse.action"
  "msg/LiftInfo.msg"
  "msg/ColorInfo.msg"
  "msg/FileUpdata.msg"
  "msg/ObsLaser.msg"
  "msg/PalletInfo.msg"
  "msg/MovecontrolInfo.msg"
  "msg/MotionControl.msg"
  "msg/RcsInfo.msg"
  "msg/LiftControl.msg"
  "msg/BtStatus.msg"
  "msg/CarStatus.msg"
  "msg/HealthNode.msg"
  "action/Pallet.action"
  "srv/CheckEmergency.srv"
  "srv/SetEmergency.srv"
)
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
