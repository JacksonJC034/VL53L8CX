// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/ObsLaser.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__OBS_LASER__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__OBS_LASER__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/obs_laser__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_ObsLaser_status
{
public:
  explicit Init_ObsLaser_status(::base_interfaces_demo::msg::ObsLaser & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::ObsLaser status(::base_interfaces_demo::msg::ObsLaser::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::ObsLaser msg_;
};

class Init_ObsLaser_error_code
{
public:
  explicit Init_ObsLaser_error_code(::base_interfaces_demo::msg::ObsLaser & msg)
  : msg_(msg)
  {}
  Init_ObsLaser_status error_code(::base_interfaces_demo::msg::ObsLaser::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_ObsLaser_status(msg_);
  }

private:
  ::base_interfaces_demo::msg::ObsLaser msg_;
};

class Init_ObsLaser_scout2
{
public:
  explicit Init_ObsLaser_scout2(::base_interfaces_demo::msg::ObsLaser & msg)
  : msg_(msg)
  {}
  Init_ObsLaser_error_code scout2(::base_interfaces_demo::msg::ObsLaser::_scout2_type arg)
  {
    msg_.scout2 = std::move(arg);
    return Init_ObsLaser_error_code(msg_);
  }

private:
  ::base_interfaces_demo::msg::ObsLaser msg_;
};

class Init_ObsLaser_mom2
{
public:
  explicit Init_ObsLaser_mom2(::base_interfaces_demo::msg::ObsLaser & msg)
  : msg_(msg)
  {}
  Init_ObsLaser_scout2 mom2(::base_interfaces_demo::msg::ObsLaser::_mom2_type arg)
  {
    msg_.mom2 = std::move(arg);
    return Init_ObsLaser_scout2(msg_);
  }

private:
  ::base_interfaces_demo::msg::ObsLaser msg_;
};

class Init_ObsLaser_son2
{
public:
  explicit Init_ObsLaser_son2(::base_interfaces_demo::msg::ObsLaser & msg)
  : msg_(msg)
  {}
  Init_ObsLaser_mom2 son2(::base_interfaces_demo::msg::ObsLaser::_son2_type arg)
  {
    msg_.son2 = std::move(arg);
    return Init_ObsLaser_mom2(msg_);
  }

private:
  ::base_interfaces_demo::msg::ObsLaser msg_;
};

class Init_ObsLaser_scout1
{
public:
  explicit Init_ObsLaser_scout1(::base_interfaces_demo::msg::ObsLaser & msg)
  : msg_(msg)
  {}
  Init_ObsLaser_son2 scout1(::base_interfaces_demo::msg::ObsLaser::_scout1_type arg)
  {
    msg_.scout1 = std::move(arg);
    return Init_ObsLaser_son2(msg_);
  }

private:
  ::base_interfaces_demo::msg::ObsLaser msg_;
};

class Init_ObsLaser_mom1
{
public:
  explicit Init_ObsLaser_mom1(::base_interfaces_demo::msg::ObsLaser & msg)
  : msg_(msg)
  {}
  Init_ObsLaser_scout1 mom1(::base_interfaces_demo::msg::ObsLaser::_mom1_type arg)
  {
    msg_.mom1 = std::move(arg);
    return Init_ObsLaser_scout1(msg_);
  }

private:
  ::base_interfaces_demo::msg::ObsLaser msg_;
};

class Init_ObsLaser_son1
{
public:
  Init_ObsLaser_son1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObsLaser_mom1 son1(::base_interfaces_demo::msg::ObsLaser::_son1_type arg)
  {
    msg_.son1 = std::move(arg);
    return Init_ObsLaser_mom1(msg_);
  }

private:
  ::base_interfaces_demo::msg::ObsLaser msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::ObsLaser>()
{
  return base_interfaces_demo::msg::builder::Init_ObsLaser_son1();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__OBS_LASER__BUILDER_HPP_
