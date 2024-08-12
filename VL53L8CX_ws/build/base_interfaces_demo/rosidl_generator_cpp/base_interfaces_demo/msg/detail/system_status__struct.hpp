// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__SYSTEM_STATUS__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__SYSTEM_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__msg__SystemStatus __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__msg__SystemStatus __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemStatus_
{
  using Type = SystemStatus_<ContainerAllocator>;

  explicit SystemStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->selfcheck_status = 0l;
      this->init_status = 0l;
      this->error_code = 0ll;
    }
  }

  explicit SystemStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->selfcheck_status = 0l;
      this->init_status = 0l;
      this->error_code = 0ll;
    }
  }

  // field types and members
  using _selfcheck_status_type =
    int32_t;
  _selfcheck_status_type selfcheck_status;
  using _init_status_type =
    int32_t;
  _init_status_type init_status;
  using _error_code_type =
    int64_t;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__selfcheck_status(
    const int32_t & _arg)
  {
    this->selfcheck_status = _arg;
    return *this;
  }
  Type & set__init_status(
    const int32_t & _arg)
  {
    this->init_status = _arg;
    return *this;
  }
  Type & set__error_code(
    const int64_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::msg::SystemStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::msg::SystemStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::SystemStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::SystemStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::SystemStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::SystemStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::SystemStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::SystemStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::SystemStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::SystemStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__msg__SystemStatus
    std::shared_ptr<base_interfaces_demo::msg::SystemStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__msg__SystemStatus
    std::shared_ptr<base_interfaces_demo::msg::SystemStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemStatus_ & other) const
  {
    if (this->selfcheck_status != other.selfcheck_status) {
      return false;
    }
    if (this->init_status != other.init_status) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemStatus_

// alias to use template instance with default allocator
using SystemStatus =
  base_interfaces_demo::msg::SystemStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__SYSTEM_STATUS__STRUCT_HPP_
