// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/FileUpdata.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__FILE_UPDATA__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__FILE_UPDATA__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/file_updata__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_FileUpdata_mode
{
public:
  explicit Init_FileUpdata_mode(::base_interfaces_demo::msg::FileUpdata & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::FileUpdata mode(::base_interfaces_demo::msg::FileUpdata::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::FileUpdata msg_;
};

class Init_FileUpdata_file_type
{
public:
  Init_FileUpdata_file_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FileUpdata_mode file_type(::base_interfaces_demo::msg::FileUpdata::_file_type_type arg)
  {
    msg_.file_type = std::move(arg);
    return Init_FileUpdata_mode(msg_);
  }

private:
  ::base_interfaces_demo::msg::FileUpdata msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::FileUpdata>()
{
  return base_interfaces_demo::msg::builder::Init_FileUpdata_file_type();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__FILE_UPDATA__BUILDER_HPP_
