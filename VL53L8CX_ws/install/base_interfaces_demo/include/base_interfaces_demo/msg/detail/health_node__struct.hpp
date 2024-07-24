// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:msg/HealthNode.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__HEALTH_NODE__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__HEALTH_NODE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__msg__HealthNode __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__msg__HealthNode __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HealthNode_
{
  using Type = HealthNode_<ContainerAllocator>;

  explicit HealthNode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cpu_usage = 0.0;
      this->disk_usage = 0.0;
      this->memory_usage = 0.0;
      this->nic_status = 0.0;
      this->temperature = 0.0;
      this->cpu_frequency = 0.0;
      std::fill<typename std::array<uint64_t, 12>::iterator, uint64_t>(this->error_array.begin(), this->error_array.end(), 0ull);
      this->error_level = 0;
    }
  }

  explicit HealthNode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_array(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cpu_usage = 0.0;
      this->disk_usage = 0.0;
      this->memory_usage = 0.0;
      this->nic_status = 0.0;
      this->temperature = 0.0;
      this->cpu_frequency = 0.0;
      std::fill<typename std::array<uint64_t, 12>::iterator, uint64_t>(this->error_array.begin(), this->error_array.end(), 0ull);
      this->error_level = 0;
    }
  }

  // field types and members
  using _cpu_usage_type =
    double;
  _cpu_usage_type cpu_usage;
  using _disk_usage_type =
    double;
  _disk_usage_type disk_usage;
  using _memory_usage_type =
    double;
  _memory_usage_type memory_usage;
  using _nic_status_type =
    double;
  _nic_status_type nic_status;
  using _temperature_type =
    double;
  _temperature_type temperature;
  using _cpu_frequency_type =
    double;
  _cpu_frequency_type cpu_frequency;
  using _error_array_type =
    std::array<uint64_t, 12>;
  _error_array_type error_array;
  using _error_level_type =
    uint8_t;
  _error_level_type error_level;

  // setters for named parameter idiom
  Type & set__cpu_usage(
    const double & _arg)
  {
    this->cpu_usage = _arg;
    return *this;
  }
  Type & set__disk_usage(
    const double & _arg)
  {
    this->disk_usage = _arg;
    return *this;
  }
  Type & set__memory_usage(
    const double & _arg)
  {
    this->memory_usage = _arg;
    return *this;
  }
  Type & set__nic_status(
    const double & _arg)
  {
    this->nic_status = _arg;
    return *this;
  }
  Type & set__temperature(
    const double & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__cpu_frequency(
    const double & _arg)
  {
    this->cpu_frequency = _arg;
    return *this;
  }
  Type & set__error_array(
    const std::array<uint64_t, 12> & _arg)
  {
    this->error_array = _arg;
    return *this;
  }
  Type & set__error_level(
    const uint8_t & _arg)
  {
    this->error_level = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::msg::HealthNode_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::msg::HealthNode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::HealthNode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::HealthNode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::HealthNode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::HealthNode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::HealthNode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::HealthNode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::HealthNode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::HealthNode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__msg__HealthNode
    std::shared_ptr<base_interfaces_demo::msg::HealthNode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__msg__HealthNode
    std::shared_ptr<base_interfaces_demo::msg::HealthNode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HealthNode_ & other) const
  {
    if (this->cpu_usage != other.cpu_usage) {
      return false;
    }
    if (this->disk_usage != other.disk_usage) {
      return false;
    }
    if (this->memory_usage != other.memory_usage) {
      return false;
    }
    if (this->nic_status != other.nic_status) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->cpu_frequency != other.cpu_frequency) {
      return false;
    }
    if (this->error_array != other.error_array) {
      return false;
    }
    if (this->error_level != other.error_level) {
      return false;
    }
    return true;
  }
  bool operator!=(const HealthNode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HealthNode_

// alias to use template instance with default allocator
using HealthNode =
  base_interfaces_demo::msg::HealthNode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__HEALTH_NODE__STRUCT_HPP_
