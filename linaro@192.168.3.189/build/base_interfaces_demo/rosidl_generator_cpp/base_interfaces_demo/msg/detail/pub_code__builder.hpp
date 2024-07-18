// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/PubCode.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__PUB_CODE__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__PUB_CODE__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/pub_code__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_PubCode_pub_code
{
public:
  Init_PubCode_pub_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces_demo::msg::PubCode pub_code(::base_interfaces_demo::msg::PubCode::_pub_code_type arg)
  {
    msg_.pub_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::PubCode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::PubCode>()
{
  return base_interfaces_demo::msg::builder::Init_PubCode_pub_code();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__PUB_CODE__BUILDER_HPP_
