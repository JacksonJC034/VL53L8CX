// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/RcsInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__RCS_INFO__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__RCS_INFO__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/rcs_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_RcsInfo_error
{
public:
  explicit Init_RcsInfo_error(::base_interfaces_demo::msg::RcsInfo & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::RcsInfo error(::base_interfaces_demo::msg::RcsInfo::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::RcsInfo msg_;
};

class Init_RcsInfo_status
{
public:
  explicit Init_RcsInfo_status(::base_interfaces_demo::msg::RcsInfo & msg)
  : msg_(msg)
  {}
  Init_RcsInfo_error status(::base_interfaces_demo::msg::RcsInfo::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RcsInfo_error(msg_);
  }

private:
  ::base_interfaces_demo::msg::RcsInfo msg_;
};

class Init_RcsInfo_type
{
public:
  Init_RcsInfo_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RcsInfo_status type(::base_interfaces_demo::msg::RcsInfo::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_RcsInfo_status(msg_);
  }

private:
  ::base_interfaces_demo::msg::RcsInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::RcsInfo>()
{
  return base_interfaces_demo::msg::builder::Init_RcsInfo_type();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__RCS_INFO__BUILDER_HPP_
