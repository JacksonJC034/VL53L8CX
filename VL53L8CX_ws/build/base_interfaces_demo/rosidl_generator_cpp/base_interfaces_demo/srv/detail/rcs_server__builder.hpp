// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:srv/RcsServer.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__SRV__DETAIL__RCS_SERVER__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__SRV__DETAIL__RCS_SERVER__BUILDER_HPP_

#include "base_interfaces_demo/srv/detail/rcs_server__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace srv
{

namespace builder
{

class Init_RcsServer_Request_rcsstring
{
public:
  explicit Init_RcsServer_Request_rcsstring(::base_interfaces_demo::srv::RcsServer_Request & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::srv::RcsServer_Request rcsstring(::base_interfaces_demo::srv::RcsServer_Request::_rcsstring_type arg)
  {
    msg_.rcsstring = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::srv::RcsServer_Request msg_;
};

class Init_RcsServer_Request_cmd
{
public:
  Init_RcsServer_Request_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RcsServer_Request_rcsstring cmd(::base_interfaces_demo::srv::RcsServer_Request::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return Init_RcsServer_Request_rcsstring(msg_);
  }

private:
  ::base_interfaces_demo::srv::RcsServer_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::srv::RcsServer_Request>()
{
  return base_interfaces_demo::srv::builder::Init_RcsServer_Request_cmd();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace srv
{

namespace builder
{

class Init_RcsServer_Response_ret
{
public:
  Init_RcsServer_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces_demo::srv::RcsServer_Response ret(::base_interfaces_demo::srv::RcsServer_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::srv::RcsServer_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::srv::RcsServer_Response>()
{
  return base_interfaces_demo::srv::builder::Init_RcsServer_Response_ret();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__SRV__DETAIL__RCS_SERVER__BUILDER_HPP_
