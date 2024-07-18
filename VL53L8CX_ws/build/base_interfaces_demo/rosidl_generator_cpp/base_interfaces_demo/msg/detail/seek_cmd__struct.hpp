// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:msg/SeekCmd.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__SEEK_CMD__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__SEEK_CMD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__msg__SeekCmd __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__msg__SeekCmd __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SeekCmd_
{
  using Type = SeekCmd_<ContainerAllocator>;

  explicit SeekCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = 0l;
    }
  }

  explicit SeekCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = 0l;
    }
  }

  // field types and members
  using _cmd_type =
    int32_t;
  _cmd_type cmd;

  // setters for named parameter idiom
  Type & set__cmd(
    const int32_t & _arg)
  {
    this->cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::msg::SeekCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::msg::SeekCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::SeekCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::SeekCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::SeekCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::SeekCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::SeekCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::SeekCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::SeekCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::SeekCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__msg__SeekCmd
    std::shared_ptr<base_interfaces_demo::msg::SeekCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__msg__SeekCmd
    std::shared_ptr<base_interfaces_demo::msg::SeekCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SeekCmd_ & other) const
  {
    if (this->cmd != other.cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const SeekCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SeekCmd_

// alias to use template instance with default allocator
using SeekCmd =
  base_interfaces_demo::msg::SeekCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__SEEK_CMD__STRUCT_HPP_
