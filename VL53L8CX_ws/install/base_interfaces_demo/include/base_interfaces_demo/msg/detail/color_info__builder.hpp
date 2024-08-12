// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/ColorInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__COLOR_INFO__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__COLOR_INFO__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/color_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_ColorInfo_status
{
public:
  explicit Init_ColorInfo_status(::base_interfaces_demo::msg::ColorInfo & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::ColorInfo status(::base_interfaces_demo::msg::ColorInfo::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::ColorInfo msg_;
};

class Init_ColorInfo_error_code
{
public:
  explicit Init_ColorInfo_error_code(::base_interfaces_demo::msg::ColorInfo & msg)
  : msg_(msg)
  {}
  Init_ColorInfo_status error_code(::base_interfaces_demo::msg::ColorInfo::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_ColorInfo_status(msg_);
  }

private:
  ::base_interfaces_demo::msg::ColorInfo msg_;
};

class Init_ColorInfo_color_type
{
public:
  Init_ColorInfo_color_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ColorInfo_error_code color_type(::base_interfaces_demo::msg::ColorInfo::_color_type_type arg)
  {
    msg_.color_type = std::move(arg);
    return Init_ColorInfo_error_code(msg_);
  }

private:
  ::base_interfaces_demo::msg::ColorInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::ColorInfo>()
{
  return base_interfaces_demo::msg::builder::Init_ColorInfo_color_type();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__COLOR_INFO__BUILDER_HPP_
