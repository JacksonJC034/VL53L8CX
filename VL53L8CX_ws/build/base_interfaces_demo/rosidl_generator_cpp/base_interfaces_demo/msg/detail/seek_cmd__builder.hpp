// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/SeekCmd.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__SEEK_CMD__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__SEEK_CMD__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/seek_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_SeekCmd_cmd
{
public:
  Init_SeekCmd_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces_demo::msg::SeekCmd cmd(::base_interfaces_demo::msg::SeekCmd::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::SeekCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::SeekCmd>()
{
  return base_interfaces_demo::msg::builder::Init_SeekCmd_cmd();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__SEEK_CMD__BUILDER_HPP_
