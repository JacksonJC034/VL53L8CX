// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:srv/Hall.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__SRV__DETAIL__HALL__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__SRV__DETAIL__HALL__BUILDER_HPP_

#include "base_interfaces_demo/srv/detail/hall__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace srv
{

namespace builder
{

class Init_Hall_Request_cmd
{
public:
  Init_Hall_Request_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces_demo::srv::Hall_Request cmd(::base_interfaces_demo::srv::Hall_Request::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::srv::Hall_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::srv::Hall_Request>()
{
  return base_interfaces_demo::srv::builder::Init_Hall_Request_cmd();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace srv
{

namespace builder
{

class Init_Hall_Response_para2
{
public:
  explicit Init_Hall_Response_para2(::base_interfaces_demo::srv::Hall_Response & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::srv::Hall_Response para2(::base_interfaces_demo::srv::Hall_Response::_para2_type arg)
  {
    msg_.para2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::srv::Hall_Response msg_;
};

class Init_Hall_Response_para
{
public:
  explicit Init_Hall_Response_para(::base_interfaces_demo::srv::Hall_Response & msg)
  : msg_(msg)
  {}
  Init_Hall_Response_para2 para(::base_interfaces_demo::srv::Hall_Response::_para_type arg)
  {
    msg_.para = std::move(arg);
    return Init_Hall_Response_para2(msg_);
  }

private:
  ::base_interfaces_demo::srv::Hall_Response msg_;
};

class Init_Hall_Response_ret
{
public:
  Init_Hall_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Hall_Response_para ret(::base_interfaces_demo::srv::Hall_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return Init_Hall_Response_para(msg_);
  }

private:
  ::base_interfaces_demo::srv::Hall_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::srv::Hall_Response>()
{
  return base_interfaces_demo::srv::builder::Init_Hall_Response_ret();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__SRV__DETAIL__HALL__BUILDER_HPP_
