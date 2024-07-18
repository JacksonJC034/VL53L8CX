// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:msg/Manual.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__MANUAL__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__MANUAL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__msg__Manual __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__msg__Manual __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Manual_
{
  using Type = Manual_<ContainerAllocator>;

  explicit Manual_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0l;
      this->sender = 0l;
      std::fill<typename std::array<int32_t, 16>::iterator, int32_t>(this->iparameter.begin(), this->iparameter.end(), 0l);
      this->isize = 0l;
      std::fill<typename std::array<float, 16>::iterator, float>(this->fparameter.begin(), this->fparameter.end(), 0.0f);
      this->fsize = 0.0f;
      this->status = 0l;
    }
  }

  explicit Manual_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : iparameter(_alloc),
    fparameter(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0l;
      this->sender = 0l;
      std::fill<typename std::array<int32_t, 16>::iterator, int32_t>(this->iparameter.begin(), this->iparameter.end(), 0l);
      this->isize = 0l;
      std::fill<typename std::array<float, 16>::iterator, float>(this->fparameter.begin(), this->fparameter.end(), 0.0f);
      this->fsize = 0.0f;
      this->status = 0l;
    }
  }

  // field types and members
  using _type_type =
    int32_t;
  _type_type type;
  using _sender_type =
    int32_t;
  _sender_type sender;
  using _iparameter_type =
    std::array<int32_t, 16>;
  _iparameter_type iparameter;
  using _isize_type =
    int32_t;
  _isize_type isize;
  using _fparameter_type =
    std::array<float, 16>;
  _fparameter_type fparameter;
  using _fsize_type =
    float;
  _fsize_type fsize;
  using _status_type =
    int32_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__sender(
    const int32_t & _arg)
  {
    this->sender = _arg;
    return *this;
  }
  Type & set__iparameter(
    const std::array<int32_t, 16> & _arg)
  {
    this->iparameter = _arg;
    return *this;
  }
  Type & set__isize(
    const int32_t & _arg)
  {
    this->isize = _arg;
    return *this;
  }
  Type & set__fparameter(
    const std::array<float, 16> & _arg)
  {
    this->fparameter = _arg;
    return *this;
  }
  Type & set__fsize(
    const float & _arg)
  {
    this->fsize = _arg;
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
    base_interfaces_demo::msg::Manual_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::msg::Manual_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::Manual_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::Manual_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::Manual_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::Manual_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::Manual_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::Manual_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::Manual_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::Manual_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__msg__Manual
    std::shared_ptr<base_interfaces_demo::msg::Manual_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__msg__Manual
    std::shared_ptr<base_interfaces_demo::msg::Manual_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Manual_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->sender != other.sender) {
      return false;
    }
    if (this->iparameter != other.iparameter) {
      return false;
    }
    if (this->isize != other.isize) {
      return false;
    }
    if (this->fparameter != other.fparameter) {
      return false;
    }
    if (this->fsize != other.fsize) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Manual_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Manual_

// alias to use template instance with default allocator
using Manual =
  base_interfaces_demo::msg::Manual_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__MANUAL__STRUCT_HPP_
