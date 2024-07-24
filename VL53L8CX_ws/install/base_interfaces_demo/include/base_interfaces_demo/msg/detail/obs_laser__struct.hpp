// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:msg/ObsLaser.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__OBS_LASER__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__OBS_LASER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__msg__ObsLaser __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__msg__ObsLaser __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObsLaser_
{
  using Type = ObsLaser_<ContainerAllocator>;

  explicit ObsLaser_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->son1 = 0l;
      this->mom1 = 0l;
      this->scout1 = 0l;
      this->son2 = 0l;
      this->mom2 = 0l;
      this->scout2 = 0l;
      this->error_code = 0ll;
      this->status = 0l;
    }
  }

  explicit ObsLaser_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->son1 = 0l;
      this->mom1 = 0l;
      this->scout1 = 0l;
      this->son2 = 0l;
      this->mom2 = 0l;
      this->scout2 = 0l;
      this->error_code = 0ll;
      this->status = 0l;
    }
  }

  // field types and members
  using _son1_type =
    int32_t;
  _son1_type son1;
  using _mom1_type =
    int32_t;
  _mom1_type mom1;
  using _scout1_type =
    int32_t;
  _scout1_type scout1;
  using _son2_type =
    int32_t;
  _son2_type son2;
  using _mom2_type =
    int32_t;
  _mom2_type mom2;
  using _scout2_type =
    int32_t;
  _scout2_type scout2;
  using _error_code_type =
    int64_t;
  _error_code_type error_code;
  using _status_type =
    int32_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__son1(
    const int32_t & _arg)
  {
    this->son1 = _arg;
    return *this;
  }
  Type & set__mom1(
    const int32_t & _arg)
  {
    this->mom1 = _arg;
    return *this;
  }
  Type & set__scout1(
    const int32_t & _arg)
  {
    this->scout1 = _arg;
    return *this;
  }
  Type & set__son2(
    const int32_t & _arg)
  {
    this->son2 = _arg;
    return *this;
  }
  Type & set__mom2(
    const int32_t & _arg)
  {
    this->mom2 = _arg;
    return *this;
  }
  Type & set__scout2(
    const int32_t & _arg)
  {
    this->scout2 = _arg;
    return *this;
  }
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

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::msg::ObsLaser_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::msg::ObsLaser_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::ObsLaser_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::ObsLaser_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::ObsLaser_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::ObsLaser_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::ObsLaser_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::ObsLaser_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::ObsLaser_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::ObsLaser_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__msg__ObsLaser
    std::shared_ptr<base_interfaces_demo::msg::ObsLaser_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__msg__ObsLaser
    std::shared_ptr<base_interfaces_demo::msg::ObsLaser_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObsLaser_ & other) const
  {
    if (this->son1 != other.son1) {
      return false;
    }
    if (this->mom1 != other.mom1) {
      return false;
    }
    if (this->scout1 != other.scout1) {
      return false;
    }
    if (this->son2 != other.son2) {
      return false;
    }
    if (this->mom2 != other.mom2) {
      return false;
    }
    if (this->scout2 != other.scout2) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObsLaser_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObsLaser_

// alias to use template instance with default allocator
using ObsLaser =
  base_interfaces_demo::msg::ObsLaser_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__OBS_LASER__STRUCT_HPP_
