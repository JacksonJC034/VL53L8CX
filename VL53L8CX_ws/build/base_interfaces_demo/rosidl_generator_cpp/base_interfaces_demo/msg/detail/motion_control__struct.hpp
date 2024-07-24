// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:msg/MotionControl.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__MOTION_CONTROL__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__MOTION_CONTROL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__msg__MotionControl __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__msg__MotionControl __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionControl_
{
  using Type = MotionControl_<ContainerAllocator>;

  explicit MotionControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0l;
      this->status = 0l;
      this->total_odom = 0.0;
    }
  }

  explicit MotionControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0l;
      this->status = 0l;
      this->total_odom = 0.0;
    }
  }

  // field types and members
  using _error_code_type =
    int32_t;
  _error_code_type error_code;
  using _status_type =
    int32_t;
  _status_type status;
  using _total_odom_type =
    double;
  _total_odom_type total_odom;

  // setters for named parameter idiom
  Type & set__error_code(
    const int32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__status(
    const int32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__total_odom(
    const double & _arg)
  {
    this->total_odom = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::msg::MotionControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::msg::MotionControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::MotionControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::MotionControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::MotionControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::MotionControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::MotionControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::MotionControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::MotionControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::MotionControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__msg__MotionControl
    std::shared_ptr<base_interfaces_demo::msg::MotionControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__msg__MotionControl
    std::shared_ptr<base_interfaces_demo::msg::MotionControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionControl_ & other) const
  {
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->total_odom != other.total_odom) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionControl_

// alias to use template instance with default allocator
using MotionControl =
  base_interfaces_demo::msg::MotionControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__MOTION_CONTROL__STRUCT_HPP_
