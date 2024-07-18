// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__msg__MotorStatus __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__msg__MotorStatus __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorStatus_
{
  using Type = MotorStatus_<ContainerAllocator>;

  explicit MotorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0l;
      this->error = 0l;
      this->current = 0l;
      this->speed = 0l;
      this->status = 0l;
      this->driver_init_status = 0l;
      this->odometer = 0l;
      this->encoder_location = 0l;
      this->jerk = 0l;
      this->enable = 0l;
    }
  }

  explicit MotorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0l;
      this->error = 0l;
      this->current = 0l;
      this->speed = 0l;
      this->status = 0l;
      this->driver_init_status = 0l;
      this->odometer = 0l;
      this->encoder_location = 0l;
      this->jerk = 0l;
      this->enable = 0l;
    }
  }

  // field types and members
  using _mode_type =
    int32_t;
  _mode_type mode;
  using _error_type =
    int32_t;
  _error_type error;
  using _current_type =
    int32_t;
  _current_type current;
  using _speed_type =
    int32_t;
  _speed_type speed;
  using _status_type =
    int32_t;
  _status_type status;
  using _driver_init_status_type =
    int32_t;
  _driver_init_status_type driver_init_status;
  using _odometer_type =
    int32_t;
  _odometer_type odometer;
  using _encoder_location_type =
    int32_t;
  _encoder_location_type encoder_location;
  using _jerk_type =
    int32_t;
  _jerk_type jerk;
  using _enable_type =
    int32_t;
  _enable_type enable;

  // setters for named parameter idiom
  Type & set__mode(
    const int32_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__error(
    const int32_t & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__current(
    const int32_t & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__speed(
    const int32_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__status(
    const int32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__driver_init_status(
    const int32_t & _arg)
  {
    this->driver_init_status = _arg;
    return *this;
  }
  Type & set__odometer(
    const int32_t & _arg)
  {
    this->odometer = _arg;
    return *this;
  }
  Type & set__encoder_location(
    const int32_t & _arg)
  {
    this->encoder_location = _arg;
    return *this;
  }
  Type & set__jerk(
    const int32_t & _arg)
  {
    this->jerk = _arg;
    return *this;
  }
  Type & set__enable(
    const int32_t & _arg)
  {
    this->enable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::msg::MotorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::msg::MotorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::MotorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::MotorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::MotorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::MotorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::MotorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::MotorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::MotorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::MotorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__msg__MotorStatus
    std::shared_ptr<base_interfaces_demo::msg::MotorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__msg__MotorStatus
    std::shared_ptr<base_interfaces_demo::msg::MotorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorStatus_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->driver_init_status != other.driver_init_status) {
      return false;
    }
    if (this->odometer != other.odometer) {
      return false;
    }
    if (this->encoder_location != other.encoder_location) {
      return false;
    }
    if (this->jerk != other.jerk) {
      return false;
    }
    if (this->enable != other.enable) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorStatus_

// alias to use template instance with default allocator
using MotorStatus =
  base_interfaces_demo::msg::MotorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_
