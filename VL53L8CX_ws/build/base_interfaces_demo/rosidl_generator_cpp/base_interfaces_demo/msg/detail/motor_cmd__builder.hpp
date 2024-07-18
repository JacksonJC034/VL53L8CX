// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/MotorCmd.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__MOTOR_CMD__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__MOTOR_CMD__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/motor_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_MotorCmd_location
{
public:
  explicit Init_MotorCmd_location(::base_interfaces_demo::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::MotorCmd location(::base_interfaces_demo::msg::MotorCmd::_location_type arg)
  {
    msg_.location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::MotorCmd msg_;
};

class Init_MotorCmd_control
{
public:
  explicit Init_MotorCmd_control(::base_interfaces_demo::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_location control(::base_interfaces_demo::msg::MotorCmd::_control_type arg)
  {
    msg_.control = std::move(arg);
    return Init_MotorCmd_location(msg_);
  }

private:
  ::base_interfaces_demo::msg::MotorCmd msg_;
};

class Init_MotorCmd_dec
{
public:
  explicit Init_MotorCmd_dec(::base_interfaces_demo::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_control dec(::base_interfaces_demo::msg::MotorCmd::_dec_type arg)
  {
    msg_.dec = std::move(arg);
    return Init_MotorCmd_control(msg_);
  }

private:
  ::base_interfaces_demo::msg::MotorCmd msg_;
};

class Init_MotorCmd_acc
{
public:
  explicit Init_MotorCmd_acc(::base_interfaces_demo::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_dec acc(::base_interfaces_demo::msg::MotorCmd::_acc_type arg)
  {
    msg_.acc = std::move(arg);
    return Init_MotorCmd_dec(msg_);
  }

private:
  ::base_interfaces_demo::msg::MotorCmd msg_;
};

class Init_MotorCmd_mode
{
public:
  explicit Init_MotorCmd_mode(::base_interfaces_demo::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_acc mode(::base_interfaces_demo::msg::MotorCmd::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MotorCmd_acc(msg_);
  }

private:
  ::base_interfaces_demo::msg::MotorCmd msg_;
};

class Init_MotorCmd_cmd
{
public:
  explicit Init_MotorCmd_cmd(::base_interfaces_demo::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_mode cmd(::base_interfaces_demo::msg::MotorCmd::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return Init_MotorCmd_mode(msg_);
  }

private:
  ::base_interfaces_demo::msg::MotorCmd msg_;
};

class Init_MotorCmd_speed
{
public:
  Init_MotorCmd_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCmd_cmd speed(::base_interfaces_demo::msg::MotorCmd::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_MotorCmd_cmd(msg_);
  }

private:
  ::base_interfaces_demo::msg::MotorCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::MotorCmd>()
{
  return base_interfaces_demo::msg::builder::Init_MotorCmd_speed();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__MOTOR_CMD__BUILDER_HPP_
