// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/BtStatus.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__BT_STATUS__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__BT_STATUS__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/bt_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_BtStatus_error
{
public:
  explicit Init_BtStatus_error(::base_interfaces_demo::msg::BtStatus & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::BtStatus error(::base_interfaces_demo::msg::BtStatus::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::BtStatus msg_;
};

class Init_BtStatus_status
{
public:
  Init_BtStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BtStatus_error status(::base_interfaces_demo::msg::BtStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_BtStatus_error(msg_);
  }

private:
  ::base_interfaces_demo::msg::BtStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::BtStatus>()
{
  return base_interfaces_demo::msg::builder::Init_BtStatus_status();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__BT_STATUS__BUILDER_HPP_
