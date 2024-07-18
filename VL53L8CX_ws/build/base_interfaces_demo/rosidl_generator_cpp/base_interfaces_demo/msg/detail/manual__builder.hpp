// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/Manual.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__MANUAL__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__MANUAL__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/manual__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_Manual_status
{
public:
  explicit Init_Manual_status(::base_interfaces_demo::msg::Manual & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::Manual status(::base_interfaces_demo::msg::Manual::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::Manual msg_;
};

class Init_Manual_fsize
{
public:
  explicit Init_Manual_fsize(::base_interfaces_demo::msg::Manual & msg)
  : msg_(msg)
  {}
  Init_Manual_status fsize(::base_interfaces_demo::msg::Manual::_fsize_type arg)
  {
    msg_.fsize = std::move(arg);
    return Init_Manual_status(msg_);
  }

private:
  ::base_interfaces_demo::msg::Manual msg_;
};

class Init_Manual_fparameter
{
public:
  explicit Init_Manual_fparameter(::base_interfaces_demo::msg::Manual & msg)
  : msg_(msg)
  {}
  Init_Manual_fsize fparameter(::base_interfaces_demo::msg::Manual::_fparameter_type arg)
  {
    msg_.fparameter = std::move(arg);
    return Init_Manual_fsize(msg_);
  }

private:
  ::base_interfaces_demo::msg::Manual msg_;
};

class Init_Manual_isize
{
public:
  explicit Init_Manual_isize(::base_interfaces_demo::msg::Manual & msg)
  : msg_(msg)
  {}
  Init_Manual_fparameter isize(::base_interfaces_demo::msg::Manual::_isize_type arg)
  {
    msg_.isize = std::move(arg);
    return Init_Manual_fparameter(msg_);
  }

private:
  ::base_interfaces_demo::msg::Manual msg_;
};

class Init_Manual_iparameter
{
public:
  explicit Init_Manual_iparameter(::base_interfaces_demo::msg::Manual & msg)
  : msg_(msg)
  {}
  Init_Manual_isize iparameter(::base_interfaces_demo::msg::Manual::_iparameter_type arg)
  {
    msg_.iparameter = std::move(arg);
    return Init_Manual_isize(msg_);
  }

private:
  ::base_interfaces_demo::msg::Manual msg_;
};

class Init_Manual_sender
{
public:
  explicit Init_Manual_sender(::base_interfaces_demo::msg::Manual & msg)
  : msg_(msg)
  {}
  Init_Manual_iparameter sender(::base_interfaces_demo::msg::Manual::_sender_type arg)
  {
    msg_.sender = std::move(arg);
    return Init_Manual_iparameter(msg_);
  }

private:
  ::base_interfaces_demo::msg::Manual msg_;
};

class Init_Manual_type
{
public:
  Init_Manual_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Manual_sender type(::base_interfaces_demo::msg::Manual::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Manual_sender(msg_);
  }

private:
  ::base_interfaces_demo::msg::Manual msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::Manual>()
{
  return base_interfaces_demo::msg::builder::Init_Manual_type();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__MANUAL__BUILDER_HPP_
