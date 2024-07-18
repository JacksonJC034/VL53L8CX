// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:msg/CarStatus.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__CAR_STATUS__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__CAR_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__msg__CarStatus __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__msg__CarStatus __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarStatus_
{
  using Type = CarStatus_<ContainerAllocator>;

  explicit CarStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stand_alone_state = 0l;
      this->task_state = 0l;
      this->status = 0l;
    }
  }

  explicit CarStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stand_alone_state = 0l;
      this->task_state = 0l;
      this->status = 0l;
    }
  }

  // field types and members
  using _stand_alone_state_type =
    int32_t;
  _stand_alone_state_type stand_alone_state;
  using _task_state_type =
    int32_t;
  _task_state_type task_state;
  using _status_type =
    int32_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__stand_alone_state(
    const int32_t & _arg)
  {
    this->stand_alone_state = _arg;
    return *this;
  }
  Type & set__task_state(
    const int32_t & _arg)
  {
    this->task_state = _arg;
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
    base_interfaces_demo::msg::CarStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::msg::CarStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::CarStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::CarStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::CarStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::CarStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::CarStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::CarStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::CarStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::CarStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__msg__CarStatus
    std::shared_ptr<base_interfaces_demo::msg::CarStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__msg__CarStatus
    std::shared_ptr<base_interfaces_demo::msg::CarStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarStatus_ & other) const
  {
    if (this->stand_alone_state != other.stand_alone_state) {
      return false;
    }
    if (this->task_state != other.task_state) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarStatus_

// alias to use template instance with default allocator
using CarStatus =
  base_interfaces_demo::msg::CarStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__CAR_STATUS__STRUCT_HPP_
