// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:msg/PalletInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__PALLET_INFO__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__PALLET_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__msg__PalletInfo __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__msg__PalletInfo __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PalletInfo_
{
  using Type = PalletInfo_<ContainerAllocator>;

  explicit PalletInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0l;
      this->pallet = 0l;
      this->drift = 0.0;
      this->angle = 0.0;
      this->error = 0l;
    }
  }

  explicit PalletInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0l;
      this->pallet = 0l;
      this->drift = 0.0;
      this->angle = 0.0;
      this->error = 0l;
    }
  }

  // field types and members
  using _distance_type =
    int32_t;
  _distance_type distance;
  using _pallet_type =
    int32_t;
  _pallet_type pallet;
  using _drift_type =
    double;
  _drift_type drift;
  using _angle_type =
    double;
  _angle_type angle;
  using _error_type =
    int32_t;
  _error_type error;

  // setters for named parameter idiom
  Type & set__distance(
    const int32_t & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__pallet(
    const int32_t & _arg)
  {
    this->pallet = _arg;
    return *this;
  }
  Type & set__drift(
    const double & _arg)
  {
    this->drift = _arg;
    return *this;
  }
  Type & set__angle(
    const double & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__error(
    const int32_t & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::msg::PalletInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::msg::PalletInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::PalletInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::PalletInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::PalletInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::PalletInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::PalletInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::PalletInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::PalletInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::PalletInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__msg__PalletInfo
    std::shared_ptr<base_interfaces_demo::msg::PalletInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__msg__PalletInfo
    std::shared_ptr<base_interfaces_demo::msg::PalletInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PalletInfo_ & other) const
  {
    if (this->distance != other.distance) {
      return false;
    }
    if (this->pallet != other.pallet) {
      return false;
    }
    if (this->drift != other.drift) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const PalletInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PalletInfo_

// alias to use template instance with default allocator
using PalletInfo =
  base_interfaces_demo::msg::PalletInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__PALLET_INFO__STRUCT_HPP_
