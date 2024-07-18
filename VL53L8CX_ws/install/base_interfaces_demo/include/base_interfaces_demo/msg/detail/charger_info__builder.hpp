// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/ChargerInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__CHARGER_INFO__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__CHARGER_INFO__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/charger_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_ChargerInfo_error_code
{
public:
  explicit Init_ChargerInfo_error_code(::base_interfaces_demo::msg::ChargerInfo & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::ChargerInfo error_code(::base_interfaces_demo::msg::ChargerInfo::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::ChargerInfo msg_;
};

class Init_ChargerInfo_status
{
public:
  explicit Init_ChargerInfo_status(::base_interfaces_demo::msg::ChargerInfo & msg)
  : msg_(msg)
  {}
  Init_ChargerInfo_error_code status(::base_interfaces_demo::msg::ChargerInfo::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ChargerInfo_error_code(msg_);
  }

private:
  ::base_interfaces_demo::msg::ChargerInfo msg_;
};

class Init_ChargerInfo_charger_status
{
public:
  Init_ChargerInfo_charger_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargerInfo_status charger_status(::base_interfaces_demo::msg::ChargerInfo::_charger_status_type arg)
  {
    msg_.charger_status = std::move(arg);
    return Init_ChargerInfo_status(msg_);
  }

private:
  ::base_interfaces_demo::msg::ChargerInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::ChargerInfo>()
{
  return base_interfaces_demo::msg::builder::Init_ChargerInfo_charger_status();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__CHARGER_INFO__BUILDER_HPP_
