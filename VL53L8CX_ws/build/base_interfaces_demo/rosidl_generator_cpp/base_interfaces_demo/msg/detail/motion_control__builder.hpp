// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/MotionControl.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__MOTION_CONTROL__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__MOTION_CONTROL__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/motion_control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_MotionControl_total_odom
{
public:
  explicit Init_MotionControl_total_odom(::base_interfaces_demo::msg::MotionControl & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::MotionControl total_odom(::base_interfaces_demo::msg::MotionControl::_total_odom_type arg)
  {
    msg_.total_odom = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::MotionControl msg_;
};

class Init_MotionControl_status
{
public:
  explicit Init_MotionControl_status(::base_interfaces_demo::msg::MotionControl & msg)
  : msg_(msg)
  {}
  Init_MotionControl_total_odom status(::base_interfaces_demo::msg::MotionControl::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MotionControl_total_odom(msg_);
  }

private:
  ::base_interfaces_demo::msg::MotionControl msg_;
};

class Init_MotionControl_error
{
public:
  Init_MotionControl_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionControl_status error(::base_interfaces_demo::msg::MotionControl::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_MotionControl_status(msg_);
  }

private:
  ::base_interfaces_demo::msg::MotionControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::MotionControl>()
{
  return base_interfaces_demo::msg::builder::Init_MotionControl_error();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__MOTION_CONTROL__BUILDER_HPP_
