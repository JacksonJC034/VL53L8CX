// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:msg/MotorCmd.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__MOTOR_CMD__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__MOTOR_CMD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__msg__MotorCmd __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__msg__MotorCmd __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorCmd_
{
  using Type = MotorCmd_<ContainerAllocator>;

  explicit MotorCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0l;
      this->cmd = 0l;
      this->mode = 0l;
      this->acc = 0l;
      this->dec = 0l;
      this->control = 0l;
      this->location = 0l;
    }
  }

  explicit MotorCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0l;
      this->cmd = 0l;
      this->mode = 0l;
      this->acc = 0l;
      this->dec = 0l;
      this->control = 0l;
      this->location = 0l;
    }
  }

  // field types and members
  using _speed_type =
    int32_t;
  _speed_type speed;
  using _cmd_type =
    int32_t;
  _cmd_type cmd;
  using _mode_type =
    int32_t;
  _mode_type mode;
  using _acc_type =
    int32_t;
  _acc_type acc;
  using _dec_type =
    int32_t;
  _dec_type dec;
  using _control_type =
    int32_t;
  _control_type control;
  using _location_type =
    int32_t;
  _location_type location;

  // setters for named parameter idiom
  Type & set__speed(
    const int32_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__cmd(
    const int32_t & _arg)
  {
    this->cmd = _arg;
    return *this;
  }
  Type & set__mode(
    const int32_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__acc(
    const int32_t & _arg)
  {
    this->acc = _arg;
    return *this;
  }
  Type & set__dec(
    const int32_t & _arg)
  {
    this->dec = _arg;
    return *this;
  }
  Type & set__control(
    const int32_t & _arg)
  {
    this->control = _arg;
    return *this;
  }
  Type & set__location(
    const int32_t & _arg)
  {
    this->location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::msg::MotorCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::msg::MotorCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::MotorCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::MotorCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::MotorCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::MotorCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::MotorCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::MotorCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::MotorCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::MotorCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__msg__MotorCmd
    std::shared_ptr<base_interfaces_demo::msg::MotorCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__msg__MotorCmd
    std::shared_ptr<base_interfaces_demo::msg::MotorCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorCmd_ & other) const
  {
    if (this->speed != other.speed) {
      return false;
    }
    if (this->cmd != other.cmd) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->acc != other.acc) {
      return false;
    }
    if (this->dec != other.dec) {
      return false;
    }
    if (this->control != other.control) {
      return false;
    }
    if (this->location != other.location) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorCmd_

// alias to use template instance with default allocator
using MotorCmd =
  base_interfaces_demo::msg::MotorCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__MOTOR_CMD__STRUCT_HPP_
