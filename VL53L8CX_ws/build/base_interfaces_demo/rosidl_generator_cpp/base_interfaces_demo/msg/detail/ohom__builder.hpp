// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/Ohom.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__OHOM__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__OHOM__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/ohom__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_Ohom_speed
{
public:
  explicit Init_Ohom_speed(::base_interfaces_demo::msg::Ohom & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::Ohom speed(::base_interfaces_demo::msg::Ohom::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::Ohom msg_;
};

class Init_Ohom_mileage
{
public:
  Init_Ohom_mileage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ohom_speed mileage(::base_interfaces_demo::msg::Ohom::_mileage_type arg)
  {
    msg_.mileage = std::move(arg);
    return Init_Ohom_speed(msg_);
  }

private:
  ::base_interfaces_demo::msg::Ohom msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::Ohom>()
{
  return base_interfaces_demo::msg::builder::Init_Ohom_mileage();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__OHOM__BUILDER_HPP_
