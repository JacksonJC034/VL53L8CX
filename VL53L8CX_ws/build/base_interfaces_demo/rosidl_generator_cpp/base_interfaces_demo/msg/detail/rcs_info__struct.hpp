// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:msg/RcsInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__RCS_INFO__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__RCS_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__msg__RcsInfo __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__msg__RcsInfo __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RcsInfo_
{
  using Type = RcsInfo_<ContainerAllocator>;

  explicit RcsInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0l;
      this->status = 0l;
      this->error = 0ll;
    }
  }

  explicit RcsInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0l;
      this->status = 0l;
      this->error = 0ll;
    }
  }

  // field types and members
  using _type_type =
    int32_t;
  _type_type type;
  using _status_type =
    int32_t;
  _status_type status;
  using _error_type =
    int64_t;
  _error_type error;

  // setters for named parameter idiom
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__status(
    const int32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__error(
    const int64_t & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::msg::RcsInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::msg::RcsInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::RcsInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::RcsInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::RcsInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::RcsInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::RcsInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::RcsInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::RcsInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::RcsInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__msg__RcsInfo
    std::shared_ptr<base_interfaces_demo::msg::RcsInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__msg__RcsInfo
    std::shared_ptr<base_interfaces_demo::msg::RcsInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RcsInfo_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const RcsInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RcsInfo_

// alias to use template instance with default allocator
using RcsInfo =
  base_interfaces_demo::msg::RcsInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__RCS_INFO__STRUCT_HPP_
