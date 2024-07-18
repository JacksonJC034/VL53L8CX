// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:msg/HallInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__HALL_INFO__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__HALL_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__msg__HallInfo __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__msg__HallInfo __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HallInfo_
{
  using Type = HallInfo_<ContainerAllocator>;

  explicit HallInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uid7 = 0l;
      this->uid6 = 0l;
      this->uid5 = 0l;
      this->uid4 = 0l;
      this->uid3 = 0l;
      this->uid2 = 0l;
      this->uid1 = 0l;
      this->uid0 = 0l;
      this->f1 = 0.0;
      this->f2 = 0.0;
      this->f3 = 0.0;
      this->f4 = 0.0;
      this->b1 = 0.0;
      this->b2 = 0.0;
      this->b3 = 0.0;
      this->b4 = 0.0;
      this->l1 = 0.0;
      this->l2 = 0.0;
      this->l3 = 0.0;
      this->l4 = 0.0;
      this->r1 = 0.0;
      this->r2 = 0.0;
      this->r3 = 0.0;
      this->r4 = 0.0;
      this->state = 0l;
    }
  }

  explicit HallInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uid7 = 0l;
      this->uid6 = 0l;
      this->uid5 = 0l;
      this->uid4 = 0l;
      this->uid3 = 0l;
      this->uid2 = 0l;
      this->uid1 = 0l;
      this->uid0 = 0l;
      this->f1 = 0.0;
      this->f2 = 0.0;
      this->f3 = 0.0;
      this->f4 = 0.0;
      this->b1 = 0.0;
      this->b2 = 0.0;
      this->b3 = 0.0;
      this->b4 = 0.0;
      this->l1 = 0.0;
      this->l2 = 0.0;
      this->l3 = 0.0;
      this->l4 = 0.0;
      this->r1 = 0.0;
      this->r2 = 0.0;
      this->r3 = 0.0;
      this->r4 = 0.0;
      this->state = 0l;
    }
  }

  // field types and members
  using _uid7_type =
    int32_t;
  _uid7_type uid7;
  using _uid6_type =
    int32_t;
  _uid6_type uid6;
  using _uid5_type =
    int32_t;
  _uid5_type uid5;
  using _uid4_type =
    int32_t;
  _uid4_type uid4;
  using _uid3_type =
    int32_t;
  _uid3_type uid3;
  using _uid2_type =
    int32_t;
  _uid2_type uid2;
  using _uid1_type =
    int32_t;
  _uid1_type uid1;
  using _uid0_type =
    int32_t;
  _uid0_type uid0;
  using _f1_type =
    double;
  _f1_type f1;
  using _f2_type =
    double;
  _f2_type f2;
  using _f3_type =
    double;
  _f3_type f3;
  using _f4_type =
    double;
  _f4_type f4;
  using _b1_type =
    double;
  _b1_type b1;
  using _b2_type =
    double;
  _b2_type b2;
  using _b3_type =
    double;
  _b3_type b3;
  using _b4_type =
    double;
  _b4_type b4;
  using _l1_type =
    double;
  _l1_type l1;
  using _l2_type =
    double;
  _l2_type l2;
  using _l3_type =
    double;
  _l3_type l3;
  using _l4_type =
    double;
  _l4_type l4;
  using _r1_type =
    double;
  _r1_type r1;
  using _r2_type =
    double;
  _r2_type r2;
  using _r3_type =
    double;
  _r3_type r3;
  using _r4_type =
    double;
  _r4_type r4;
  using _state_type =
    int32_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__uid7(
    const int32_t & _arg)
  {
    this->uid7 = _arg;
    return *this;
  }
  Type & set__uid6(
    const int32_t & _arg)
  {
    this->uid6 = _arg;
    return *this;
  }
  Type & set__uid5(
    const int32_t & _arg)
  {
    this->uid5 = _arg;
    return *this;
  }
  Type & set__uid4(
    const int32_t & _arg)
  {
    this->uid4 = _arg;
    return *this;
  }
  Type & set__uid3(
    const int32_t & _arg)
  {
    this->uid3 = _arg;
    return *this;
  }
  Type & set__uid2(
    const int32_t & _arg)
  {
    this->uid2 = _arg;
    return *this;
  }
  Type & set__uid1(
    const int32_t & _arg)
  {
    this->uid1 = _arg;
    return *this;
  }
  Type & set__uid0(
    const int32_t & _arg)
  {
    this->uid0 = _arg;
    return *this;
  }
  Type & set__f1(
    const double & _arg)
  {
    this->f1 = _arg;
    return *this;
  }
  Type & set__f2(
    const double & _arg)
  {
    this->f2 = _arg;
    return *this;
  }
  Type & set__f3(
    const double & _arg)
  {
    this->f3 = _arg;
    return *this;
  }
  Type & set__f4(
    const double & _arg)
  {
    this->f4 = _arg;
    return *this;
  }
  Type & set__b1(
    const double & _arg)
  {
    this->b1 = _arg;
    return *this;
  }
  Type & set__b2(
    const double & _arg)
  {
    this->b2 = _arg;
    return *this;
  }
  Type & set__b3(
    const double & _arg)
  {
    this->b3 = _arg;
    return *this;
  }
  Type & set__b4(
    const double & _arg)
  {
    this->b4 = _arg;
    return *this;
  }
  Type & set__l1(
    const double & _arg)
  {
    this->l1 = _arg;
    return *this;
  }
  Type & set__l2(
    const double & _arg)
  {
    this->l2 = _arg;
    return *this;
  }
  Type & set__l3(
    const double & _arg)
  {
    this->l3 = _arg;
    return *this;
  }
  Type & set__l4(
    const double & _arg)
  {
    this->l4 = _arg;
    return *this;
  }
  Type & set__r1(
    const double & _arg)
  {
    this->r1 = _arg;
    return *this;
  }
  Type & set__r2(
    const double & _arg)
  {
    this->r2 = _arg;
    return *this;
  }
  Type & set__r3(
    const double & _arg)
  {
    this->r3 = _arg;
    return *this;
  }
  Type & set__r4(
    const double & _arg)
  {
    this->r4 = _arg;
    return *this;
  }
  Type & set__state(
    const int32_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::msg::HallInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::msg::HallInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::HallInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::HallInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::HallInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::HallInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::HallInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::HallInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::HallInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::HallInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__msg__HallInfo
    std::shared_ptr<base_interfaces_demo::msg::HallInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__msg__HallInfo
    std::shared_ptr<base_interfaces_demo::msg::HallInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HallInfo_ & other) const
  {
    if (this->uid7 != other.uid7) {
      return false;
    }
    if (this->uid6 != other.uid6) {
      return false;
    }
    if (this->uid5 != other.uid5) {
      return false;
    }
    if (this->uid4 != other.uid4) {
      return false;
    }
    if (this->uid3 != other.uid3) {
      return false;
    }
    if (this->uid2 != other.uid2) {
      return false;
    }
    if (this->uid1 != other.uid1) {
      return false;
    }
    if (this->uid0 != other.uid0) {
      return false;
    }
    if (this->f1 != other.f1) {
      return false;
    }
    if (this->f2 != other.f2) {
      return false;
    }
    if (this->f3 != other.f3) {
      return false;
    }
    if (this->f4 != other.f4) {
      return false;
    }
    if (this->b1 != other.b1) {
      return false;
    }
    if (this->b2 != other.b2) {
      return false;
    }
    if (this->b3 != other.b3) {
      return false;
    }
    if (this->b4 != other.b4) {
      return false;
    }
    if (this->l1 != other.l1) {
      return false;
    }
    if (this->l2 != other.l2) {
      return false;
    }
    if (this->l3 != other.l3) {
      return false;
    }
    if (this->l4 != other.l4) {
      return false;
    }
    if (this->r1 != other.r1) {
      return false;
    }
    if (this->r2 != other.r2) {
      return false;
    }
    if (this->r3 != other.r3) {
      return false;
    }
    if (this->r4 != other.r4) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const HallInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HallInfo_

// alias to use template instance with default allocator
using HallInfo =
  base_interfaces_demo::msg::HallInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__HALL_INFO__STRUCT_HPP_
