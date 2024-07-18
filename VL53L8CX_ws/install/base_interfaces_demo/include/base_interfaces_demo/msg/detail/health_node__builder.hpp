// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/HealthNode.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__HEALTH_NODE__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__HEALTH_NODE__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/health_node__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_HealthNode_error_level
{
public:
  explicit Init_HealthNode_error_level(::base_interfaces_demo::msg::HealthNode & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::HealthNode error_level(::base_interfaces_demo::msg::HealthNode::_error_level_type arg)
  {
    msg_.error_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::HealthNode msg_;
};

class Init_HealthNode_error_array
{
public:
  explicit Init_HealthNode_error_array(::base_interfaces_demo::msg::HealthNode & msg)
  : msg_(msg)
  {}
  Init_HealthNode_error_level error_array(::base_interfaces_demo::msg::HealthNode::_error_array_type arg)
  {
    msg_.error_array = std::move(arg);
    return Init_HealthNode_error_level(msg_);
  }

private:
  ::base_interfaces_demo::msg::HealthNode msg_;
};

class Init_HealthNode_temperature
{
public:
  explicit Init_HealthNode_temperature(::base_interfaces_demo::msg::HealthNode & msg)
  : msg_(msg)
  {}
  Init_HealthNode_error_array temperature(::base_interfaces_demo::msg::HealthNode::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_HealthNode_error_array(msg_);
  }

private:
  ::base_interfaces_demo::msg::HealthNode msg_;
};

class Init_HealthNode_nic_status
{
public:
  explicit Init_HealthNode_nic_status(::base_interfaces_demo::msg::HealthNode & msg)
  : msg_(msg)
  {}
  Init_HealthNode_temperature nic_status(::base_interfaces_demo::msg::HealthNode::_nic_status_type arg)
  {
    msg_.nic_status = std::move(arg);
    return Init_HealthNode_temperature(msg_);
  }

private:
  ::base_interfaces_demo::msg::HealthNode msg_;
};

class Init_HealthNode_cpu_frequency
{
public:
  explicit Init_HealthNode_cpu_frequency(::base_interfaces_demo::msg::HealthNode & msg)
  : msg_(msg)
  {}
  Init_HealthNode_nic_status cpu_frequency(::base_interfaces_demo::msg::HealthNode::_cpu_frequency_type arg)
  {
    msg_.cpu_frequency = std::move(arg);
    return Init_HealthNode_nic_status(msg_);
  }

private:
  ::base_interfaces_demo::msg::HealthNode msg_;
};

class Init_HealthNode_disk_usage
{
public:
  explicit Init_HealthNode_disk_usage(::base_interfaces_demo::msg::HealthNode & msg)
  : msg_(msg)
  {}
  Init_HealthNode_cpu_frequency disk_usage(::base_interfaces_demo::msg::HealthNode::_disk_usage_type arg)
  {
    msg_.disk_usage = std::move(arg);
    return Init_HealthNode_cpu_frequency(msg_);
  }

private:
  ::base_interfaces_demo::msg::HealthNode msg_;
};

class Init_HealthNode_memory_usage
{
public:
  explicit Init_HealthNode_memory_usage(::base_interfaces_demo::msg::HealthNode & msg)
  : msg_(msg)
  {}
  Init_HealthNode_disk_usage memory_usage(::base_interfaces_demo::msg::HealthNode::_memory_usage_type arg)
  {
    msg_.memory_usage = std::move(arg);
    return Init_HealthNode_disk_usage(msg_);
  }

private:
  ::base_interfaces_demo::msg::HealthNode msg_;
};

class Init_HealthNode_cpu_usage
{
public:
  Init_HealthNode_cpu_usage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HealthNode_memory_usage cpu_usage(::base_interfaces_demo::msg::HealthNode::_cpu_usage_type arg)
  {
    msg_.cpu_usage = std::move(arg);
    return Init_HealthNode_memory_usage(msg_);
  }

private:
  ::base_interfaces_demo::msg::HealthNode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::HealthNode>()
{
  return base_interfaces_demo::msg::builder::Init_HealthNode_cpu_usage();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__HEALTH_NODE__BUILDER_HPP_
