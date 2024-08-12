// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/system_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_SystemStatus_error_code
{
public:
  explicit Init_SystemStatus_error_code(::base_interfaces_demo::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::SystemStatus error_code(::base_interfaces_demo::msg::SystemStatus::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::SystemStatus msg_;
};

class Init_SystemStatus_init_status
{
public:
  explicit Init_SystemStatus_init_status(::base_interfaces_demo::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_error_code init_status(::base_interfaces_demo::msg::SystemStatus::_init_status_type arg)
  {
    msg_.init_status = std::move(arg);
    return Init_SystemStatus_error_code(msg_);
  }

private:
  ::base_interfaces_demo::msg::SystemStatus msg_;
};

class Init_SystemStatus_selfcheck_status
{
public:
  Init_SystemStatus_selfcheck_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemStatus_init_status selfcheck_status(::base_interfaces_demo::msg::SystemStatus::_selfcheck_status_type arg)
  {
    msg_.selfcheck_status = std::move(arg);
    return Init_SystemStatus_init_status(msg_);
  }

private:
  ::base_interfaces_demo::msg::SystemStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::SystemStatus>()
{
  return base_interfaces_demo::msg::builder::Init_SystemStatus_selfcheck_status();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
