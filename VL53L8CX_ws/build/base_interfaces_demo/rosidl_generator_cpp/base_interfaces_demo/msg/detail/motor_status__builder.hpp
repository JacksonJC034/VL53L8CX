// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/motor_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_MotorStatus_error_code
{
public:
  explicit Init_MotorStatus_error_code(::base_interfaces_demo::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::MotorStatus error_code(::base_interfaces_demo::msg::MotorStatus::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::MotorStatus msg_;
};

class Init_MotorStatus_enable
{
public:
  explicit Init_MotorStatus_enable(::base_interfaces_demo::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_error_code enable(::base_interfaces_demo::msg::MotorStatus::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_MotorStatus_error_code(msg_);
  }

private:
  ::base_interfaces_demo::msg::MotorStatus msg_;
};

class Init_MotorStatus_jerk
{
public:
  explicit Init_MotorStatus_jerk(::base_interfaces_demo::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_enable jerk(::base_interfaces_demo::msg::MotorStatus::_jerk_type arg)
  {
    msg_.jerk = std::move(arg);
    return Init_MotorStatus_enable(msg_);
  }

private:
  ::base_interfaces_demo::msg::MotorStatus msg_;
};

class Init_MotorStatus_encoder_location
{
public:
  explicit Init_MotorStatus_encoder_location(::base_interfaces_demo::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_jerk encoder_location(::base_interfaces_demo::msg::MotorStatus::_encoder_location_type arg)
  {
    msg_.encoder_location = std::move(arg);
    return Init_MotorStatus_jerk(msg_);
  }

private:
  ::base_interfaces_demo::msg::MotorStatus msg_;
};

class Init_MotorStatus_odometer
{
public:
  explicit Init_MotorStatus_odometer(::base_interfaces_demo::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_encoder_location odometer(::base_interfaces_demo::msg::MotorStatus::_odometer_type arg)
  {
    msg_.odometer = std::move(arg);
    return Init_MotorStatus_encoder_location(msg_);
  }

private:
  ::base_interfaces_demo::msg::MotorStatus msg_;
};

class Init_MotorStatus_driver_init_status
{
public:
  explicit Init_MotorStatus_driver_init_status(::base_interfaces_demo::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_odometer driver_init_status(::base_interfaces_demo::msg::MotorStatus::_driver_init_status_type arg)
  {
    msg_.driver_init_status = std::move(arg);
    return Init_MotorStatus_odometer(msg_);
  }

private:
  ::base_interfaces_demo::msg::MotorStatus msg_;
};

class Init_MotorStatus_status
{
public:
  explicit Init_MotorStatus_status(::base_interfaces_demo::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_driver_init_status status(::base_interfaces_demo::msg::MotorStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MotorStatus_driver_init_status(msg_);
  }

private:
  ::base_interfaces_demo::msg::MotorStatus msg_;
};

class Init_MotorStatus_speed
{
public:
  explicit Init_MotorStatus_speed(::base_interfaces_demo::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_status speed(::base_interfaces_demo::msg::MotorStatus::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_MotorStatus_status(msg_);
  }

private:
  ::base_interfaces_demo::msg::MotorStatus msg_;
};

class Init_MotorStatus_current
{
public:
  explicit Init_MotorStatus_current(::base_interfaces_demo::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_speed current(::base_interfaces_demo::msg::MotorStatus::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_MotorStatus_speed(msg_);
  }

private:
  ::base_interfaces_demo::msg::MotorStatus msg_;
};

class Init_MotorStatus_error
{
public:
  explicit Init_MotorStatus_error(::base_interfaces_demo::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_current error(::base_interfaces_demo::msg::MotorStatus::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_MotorStatus_current(msg_);
  }

private:
  ::base_interfaces_demo::msg::MotorStatus msg_;
};

class Init_MotorStatus_mode
{
public:
  Init_MotorStatus_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorStatus_error mode(::base_interfaces_demo::msg::MotorStatus::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MotorStatus_error(msg_);
  }

private:
  ::base_interfaces_demo::msg::MotorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::MotorStatus>()
{
  return base_interfaces_demo::msg::builder::Init_MotorStatus_mode();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
