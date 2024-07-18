// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/LiftInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__LIFT_INFO__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__LIFT_INFO__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/lift_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_LiftInfo_status
{
public:
  explicit Init_LiftInfo_status(::base_interfaces_demo::msg::LiftInfo & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::LiftInfo status(::base_interfaces_demo::msg::LiftInfo::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::LiftInfo msg_;
};

class Init_LiftInfo_error
{
public:
  explicit Init_LiftInfo_error(::base_interfaces_demo::msg::LiftInfo & msg)
  : msg_(msg)
  {}
  Init_LiftInfo_status error(::base_interfaces_demo::msg::LiftInfo::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_LiftInfo_status(msg_);
  }

private:
  ::base_interfaces_demo::msg::LiftInfo msg_;
};

class Init_LiftInfo_lift_base_location
{
public:
  explicit Init_LiftInfo_lift_base_location(::base_interfaces_demo::msg::LiftInfo & msg)
  : msg_(msg)
  {}
  Init_LiftInfo_error lift_base_location(::base_interfaces_demo::msg::LiftInfo::_lift_base_location_type arg)
  {
    msg_.lift_base_location = std::move(arg);
    return Init_LiftInfo_error(msg_);
  }

private:
  ::base_interfaces_demo::msg::LiftInfo msg_;
};

class Init_LiftInfo_lift_location
{
public:
  Init_LiftInfo_lift_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LiftInfo_lift_base_location lift_location(::base_interfaces_demo::msg::LiftInfo::_lift_location_type arg)
  {
    msg_.lift_location = std::move(arg);
    return Init_LiftInfo_lift_base_location(msg_);
  }

private:
  ::base_interfaces_demo::msg::LiftInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::LiftInfo>()
{
  return base_interfaces_demo::msg::builder::Init_LiftInfo_lift_location();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__LIFT_INFO__BUILDER_HPP_
