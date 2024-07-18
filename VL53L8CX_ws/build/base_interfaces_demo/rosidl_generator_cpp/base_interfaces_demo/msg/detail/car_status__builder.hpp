// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/CarStatus.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__CAR_STATUS__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__CAR_STATUS__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/car_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_CarStatus_status
{
public:
  explicit Init_CarStatus_status(::base_interfaces_demo::msg::CarStatus & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::CarStatus status(::base_interfaces_demo::msg::CarStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::CarStatus msg_;
};

class Init_CarStatus_task_state
{
public:
  explicit Init_CarStatus_task_state(::base_interfaces_demo::msg::CarStatus & msg)
  : msg_(msg)
  {}
  Init_CarStatus_status task_state(::base_interfaces_demo::msg::CarStatus::_task_state_type arg)
  {
    msg_.task_state = std::move(arg);
    return Init_CarStatus_status(msg_);
  }

private:
  ::base_interfaces_demo::msg::CarStatus msg_;
};

class Init_CarStatus_stand_alone_state
{
public:
  Init_CarStatus_stand_alone_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarStatus_task_state stand_alone_state(::base_interfaces_demo::msg::CarStatus::_stand_alone_state_type arg)
  {
    msg_.stand_alone_state = std::move(arg);
    return Init_CarStatus_task_state(msg_);
  }

private:
  ::base_interfaces_demo::msg::CarStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::CarStatus>()
{
  return base_interfaces_demo::msg::builder::Init_CarStatus_stand_alone_state();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__CAR_STATUS__BUILDER_HPP_
