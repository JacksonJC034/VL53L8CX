// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/MovecontrolInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__MOVECONTROL_INFO__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__MOVECONTROL_INFO__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/movecontrol_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_MovecontrolInfo_status
{
public:
  explicit Init_MovecontrolInfo_status(::base_interfaces_demo::msg::MovecontrolInfo & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::MovecontrolInfo status(::base_interfaces_demo::msg::MovecontrolInfo::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::MovecontrolInfo msg_;
};

class Init_MovecontrolInfo_error
{
public:
  Init_MovecontrolInfo_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MovecontrolInfo_status error(::base_interfaces_demo::msg::MovecontrolInfo::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_MovecontrolInfo_status(msg_);
  }

private:
  ::base_interfaces_demo::msg::MovecontrolInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::MovecontrolInfo>()
{
  return base_interfaces_demo::msg::builder::Init_MovecontrolInfo_error();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__MOVECONTROL_INFO__BUILDER_HPP_
