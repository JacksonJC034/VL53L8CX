// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:msg/LiftControl.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__LIFT_CONTROL__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__LIFT_CONTROL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__msg__LiftControl __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__msg__LiftControl __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LiftControl_
{
  using Type = LiftControl_<ContainerAllocator>;

  explicit LiftControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0ll;
      this->status = 0l;
      this->lift_times = 0ull;
      this->convert_times = 0ull;
    }
  }

  explicit LiftControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0ll;
      this->status = 0l;
      this->lift_times = 0ull;
      this->convert_times = 0ull;
    }
  }

  // field types and members
  using _error_code_type =
    int64_t;
  _error_code_type error_code;
  using _status_type =
    int32_t;
  _status_type status;
  using _lift_times_type =
    uint64_t;
  _lift_times_type lift_times;
  using _convert_times_type =
    uint64_t;
  _convert_times_type convert_times;

  // setters for named parameter idiom
  Type & set__error_code(
    const int64_t & _arg)
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
  Type & set__lift_times(
    const uint64_t & _arg)
  {
    this->lift_times = _arg;
    return *this;
  }
  Type & set__convert_times(
    const uint64_t & _arg)
  {
    this->convert_times = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::msg::LiftControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::msg::LiftControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::LiftControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::LiftControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::LiftControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::LiftControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::LiftControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::LiftControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::LiftControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::LiftControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__msg__LiftControl
    std::shared_ptr<base_interfaces_demo::msg::LiftControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__msg__LiftControl
    std::shared_ptr<base_interfaces_demo::msg::LiftControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LiftControl_ & other) const
  {
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->lift_times != other.lift_times) {
      return false;
    }
    if (this->convert_times != other.convert_times) {
      return false;
    }
    return true;
  }
  bool operator!=(const LiftControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LiftControl_

// alias to use template instance with default allocator
using LiftControl =
  base_interfaces_demo::msg::LiftControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__LIFT_CONTROL__STRUCT_HPP_