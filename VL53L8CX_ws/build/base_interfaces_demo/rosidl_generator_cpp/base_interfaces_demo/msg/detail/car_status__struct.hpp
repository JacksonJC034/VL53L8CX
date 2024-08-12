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
      this->task_state = 0l;
      this->initializing = 0l;
      this->checking = 0l;
      this->releasing = 0l;
      this->driving = 0l;
      this->fine_positioning = 0l;
      this->on_tag = 0l;
      this->on_track = 0l;
      this->error = 0l;
      this->warning = 0l;
      this->estop = 0l;
      this->sleeping = 0l;
      this->load = 0l;
      this->charging = 0l;
      this->mode = 0l;
      this->stand_alone_state = 0l;
    }
  }

  explicit CarStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_state = 0l;
      this->initializing = 0l;
      this->checking = 0l;
      this->releasing = 0l;
      this->driving = 0l;
      this->fine_positioning = 0l;
      this->on_tag = 0l;
      this->on_track = 0l;
      this->error = 0l;
      this->warning = 0l;
      this->estop = 0l;
      this->sleeping = 0l;
      this->load = 0l;
      this->charging = 0l;
      this->mode = 0l;
      this->stand_alone_state = 0l;
    }
  }

  // field types and members
  using _task_state_type =
    int32_t;
  _task_state_type task_state;
  using _initializing_type =
    int32_t;
  _initializing_type initializing;
  using _checking_type =
    int32_t;
  _checking_type checking;
  using _releasing_type =
    int32_t;
  _releasing_type releasing;
  using _driving_type =
    int32_t;
  _driving_type driving;
  using _fine_positioning_type =
    int32_t;
  _fine_positioning_type fine_positioning;
  using _on_tag_type =
    int32_t;
  _on_tag_type on_tag;
  using _on_track_type =
    int32_t;
  _on_track_type on_track;
  using _error_type =
    int32_t;
  _error_type error;
  using _warning_type =
    int32_t;
  _warning_type warning;
  using _estop_type =
    int32_t;
  _estop_type estop;
  using _sleeping_type =
    int32_t;
  _sleeping_type sleeping;
  using _load_type =
    int32_t;
  _load_type load;
  using _charging_type =
    int32_t;
  _charging_type charging;
  using _mode_type =
    int32_t;
  _mode_type mode;
  using _stand_alone_state_type =
    int32_t;
  _stand_alone_state_type stand_alone_state;

  // setters for named parameter idiom
  Type & set__task_state(
    const int32_t & _arg)
  {
    this->task_state = _arg;
    return *this;
  }
  Type & set__initializing(
    const int32_t & _arg)
  {
    this->initializing = _arg;
    return *this;
  }
  Type & set__checking(
    const int32_t & _arg)
  {
    this->checking = _arg;
    return *this;
  }
  Type & set__releasing(
    const int32_t & _arg)
  {
    this->releasing = _arg;
    return *this;
  }
  Type & set__driving(
    const int32_t & _arg)
  {
    this->driving = _arg;
    return *this;
  }
  Type & set__fine_positioning(
    const int32_t & _arg)
  {
    this->fine_positioning = _arg;
    return *this;
  }
  Type & set__on_tag(
    const int32_t & _arg)
  {
    this->on_tag = _arg;
    return *this;
  }
  Type & set__on_track(
    const int32_t & _arg)
  {
    this->on_track = _arg;
    return *this;
  }
  Type & set__error(
    const int32_t & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__warning(
    const int32_t & _arg)
  {
    this->warning = _arg;
    return *this;
  }
  Type & set__estop(
    const int32_t & _arg)
  {
    this->estop = _arg;
    return *this;
  }
  Type & set__sleeping(
    const int32_t & _arg)
  {
    this->sleeping = _arg;
    return *this;
  }
  Type & set__load(
    const int32_t & _arg)
  {
    this->load = _arg;
    return *this;
  }
  Type & set__charging(
    const int32_t & _arg)
  {
    this->charging = _arg;
    return *this;
  }
  Type & set__mode(
    const int32_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__stand_alone_state(
    const int32_t & _arg)
  {
    this->stand_alone_state = _arg;
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
    if (this->task_state != other.task_state) {
      return false;
    }
    if (this->initializing != other.initializing) {
      return false;
    }
    if (this->checking != other.checking) {
      return false;
    }
    if (this->releasing != other.releasing) {
      return false;
    }
    if (this->driving != other.driving) {
      return false;
    }
    if (this->fine_positioning != other.fine_positioning) {
      return false;
    }
    if (this->on_tag != other.on_tag) {
      return false;
    }
    if (this->on_track != other.on_track) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->warning != other.warning) {
      return false;
    }
    if (this->estop != other.estop) {
      return false;
    }
    if (this->sleeping != other.sleeping) {
      return false;
    }
    if (this->load != other.load) {
      return false;
    }
    if (this->charging != other.charging) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->stand_alone_state != other.stand_alone_state) {
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
