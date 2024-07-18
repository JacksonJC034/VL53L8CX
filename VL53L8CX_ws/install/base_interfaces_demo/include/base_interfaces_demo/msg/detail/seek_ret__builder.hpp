// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/SeekRet.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__SEEK_RET__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__SEEK_RET__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/seek_ret__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_SeekRet_ret
{
public:
  Init_SeekRet_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces_demo::msg::SeekRet ret(::base_interfaces_demo::msg::SeekRet::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::SeekRet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::SeekRet>()
{
  return base_interfaces_demo::msg::builder::Init_SeekRet_ret();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__SEEK_RET__BUILDER_HPP_
