// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:srv/CheckEmergency.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__SRV__DETAIL__CHECK_EMERGENCY__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__SRV__DETAIL__CHECK_EMERGENCY__BUILDER_HPP_

#include "base_interfaces_demo/srv/detail/check_emergency__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::srv::CheckEmergency_Request>()
{
  return ::base_interfaces_demo::srv::CheckEmergency_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace srv
{

namespace builder
{

class Init_CheckEmergency_Response_status
{
public:
  Init_CheckEmergency_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces_demo::srv::CheckEmergency_Response status(::base_interfaces_demo::srv::CheckEmergency_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::srv::CheckEmergency_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::srv::CheckEmergency_Response>()
{
  return base_interfaces_demo::srv::builder::Init_CheckEmergency_Response_status();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__SRV__DETAIL__CHECK_EMERGENCY__BUILDER_HPP_
