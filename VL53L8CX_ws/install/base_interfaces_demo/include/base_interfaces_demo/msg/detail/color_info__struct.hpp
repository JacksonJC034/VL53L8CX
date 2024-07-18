// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:msg/ColorInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__COLOR_INFO__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__COLOR_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__msg__ColorInfo __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__msg__ColorInfo __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ColorInfo_
{
  using Type = ColorInfo_<ContainerAllocator>;

  explicit ColorInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color_type = 0l;
    }
  }

  explicit ColorInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color_type = 0l;
    }
  }

  // field types and members
  using _color_type_type =
    int32_t;
  _color_type_type color_type;

  // setters for named parameter idiom
  Type & set__color_type(
    const int32_t & _arg)
  {
    this->color_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::msg::ColorInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::msg::ColorInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::ColorInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::ColorInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::ColorInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::ColorInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::ColorInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::ColorInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::ColorInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::ColorInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__msg__ColorInfo
    std::shared_ptr<base_interfaces_demo::msg::ColorInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__msg__ColorInfo
    std::shared_ptr<base_interfaces_demo::msg::ColorInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ColorInfo_ & other) const
  {
    if (this->color_type != other.color_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const ColorInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ColorInfo_

// alias to use template instance with default allocator
using ColorInfo =
  base_interfaces_demo::msg::ColorInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__COLOR_INFO__STRUCT_HPP_
