// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:srv/PubCode.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__SRV__DETAIL__PUB_CODE__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__SRV__DETAIL__PUB_CODE__BUILDER_HPP_

#include "base_interfaces_demo/srv/detail/pub_code__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace srv
{

namespace builder
{

class Init_PubCode_Request_pub_code
{
public:
  Init_PubCode_Request_pub_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces_demo::srv::PubCode_Request pub_code(::base_interfaces_demo::srv::PubCode_Request::_pub_code_type arg)
  {
    msg_.pub_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::srv::PubCode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::srv::PubCode_Request>()
{
  return base_interfaces_demo::srv::builder::Init_PubCode_Request_pub_code();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace srv
{

namespace builder
{

class Init_PubCode_Response_angle
{
public:
  explicit Init_PubCode_Response_angle(::base_interfaces_demo::srv::PubCode_Response & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::srv::PubCode_Response angle(::base_interfaces_demo::srv::PubCode_Response::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::srv::PubCode_Response msg_;
};

class Init_PubCode_Response_drift
{
public:
  explicit Init_PubCode_Response_drift(::base_interfaces_demo::srv::PubCode_Response & msg)
  : msg_(msg)
  {}
  Init_PubCode_Response_angle drift(::base_interfaces_demo::srv::PubCode_Response::_drift_type arg)
  {
    msg_.drift = std::move(arg);
    return Init_PubCode_Response_angle(msg_);
  }

private:
  ::base_interfaces_demo::srv::PubCode_Response msg_;
};

class Init_PubCode_Response_calibration
{
public:
  Init_PubCode_Response_calibration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PubCode_Response_drift calibration(::base_interfaces_demo::srv::PubCode_Response::_calibration_type arg)
  {
    msg_.calibration = std::move(arg);
    return Init_PubCode_Response_drift(msg_);
  }

private:
  ::base_interfaces_demo::srv::PubCode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::srv::PubCode_Response>()
{
  return base_interfaces_demo::srv::builder::Init_PubCode_Response_calibration();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__SRV__DETAIL__PUB_CODE__BUILDER_HPP_
