// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/LiftControl.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__LIFT_CONTROL__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__LIFT_CONTROL__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/lift_control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_LiftControl_convert_times
{
public:
  explicit Init_LiftControl_convert_times(::base_interfaces_demo::msg::LiftControl & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::LiftControl convert_times(::base_interfaces_demo::msg::LiftControl::_convert_times_type arg)
  {
    msg_.convert_times = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::LiftControl msg_;
};

class Init_LiftControl_lift_times
{
public:
  explicit Init_LiftControl_lift_times(::base_interfaces_demo::msg::LiftControl & msg)
  : msg_(msg)
  {}
  Init_LiftControl_convert_times lift_times(::base_interfaces_demo::msg::LiftControl::_lift_times_type arg)
  {
    msg_.lift_times = std::move(arg);
    return Init_LiftControl_convert_times(msg_);
  }

private:
  ::base_interfaces_demo::msg::LiftControl msg_;
};

class Init_LiftControl_status
{
public:
  explicit Init_LiftControl_status(::base_interfaces_demo::msg::LiftControl & msg)
  : msg_(msg)
  {}
  Init_LiftControl_lift_times status(::base_interfaces_demo::msg::LiftControl::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LiftControl_lift_times(msg_);
  }

private:
  ::base_interfaces_demo::msg::LiftControl msg_;
};

class Init_LiftControl_error_code
{
public:
  Init_LiftControl_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LiftControl_status error_code(::base_interfaces_demo::msg::LiftControl::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_LiftControl_status(msg_);
  }

private:
  ::base_interfaces_demo::msg::LiftControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::LiftControl>()
{
  return base_interfaces_demo::msg::builder::Init_LiftControl_error_code();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__LIFT_CONTROL__BUILDER_HPP_
