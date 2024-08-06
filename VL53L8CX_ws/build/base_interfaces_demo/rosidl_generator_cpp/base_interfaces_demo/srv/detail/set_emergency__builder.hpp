// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:srv/SetEmergency.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__SRV__DETAIL__SET_EMERGENCY__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__SRV__DETAIL__SET_EMERGENCY__BUILDER_HPP_

#include "base_interfaces_demo/srv/detail/set_emergency__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace srv
{

namespace builder
{

class Init_SetEmergency_Request_emergency_cmd
{
public:
  Init_SetEmergency_Request_emergency_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces_demo::srv::SetEmergency_Request emergency_cmd(::base_interfaces_demo::srv::SetEmergency_Request::_emergency_cmd_type arg)
  {
    msg_.emergency_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::srv::SetEmergency_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::srv::SetEmergency_Request>()
{
  return base_interfaces_demo::srv::builder::Init_SetEmergency_Request_emergency_cmd();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace srv
{

namespace builder
{

class Init_SetEmergency_Response_success
{
public:
  Init_SetEmergency_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces_demo::srv::SetEmergency_Response success(::base_interfaces_demo::srv::SetEmergency_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::srv::SetEmergency_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::srv::SetEmergency_Response>()
{
  return base_interfaces_demo::srv::builder::Init_SetEmergency_Response_success();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__SRV__DETAIL__SET_EMERGENCY__BUILDER_HPP_
