// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__LOCATION__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__LOCATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__msg__Location __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__msg__Location __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Location_
{
  using Type = Location_<ContainerAllocator>;

  explicit Location_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->error = 0ll;
      this->status = 0l;
      this->distance = 0.0;
      this->hall_location = 0l;
      this->lift_son_loc_cali = 0l;
      this->lift_current_loc = 0l;
      this->lift_horseshoe_en = 0l;
      this->state_motor_or_son = 0l;
      this->state_lift_down_or_up = 0l;
      this->hall_rfid_en = 0l;
      this->distancex = 0.0;
      this->distancey = 0.0;
    }
  }

  explicit Location_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->error = 0ll;
      this->status = 0l;
      this->distance = 0.0;
      this->hall_location = 0l;
      this->lift_son_loc_cali = 0l;
      this->lift_current_loc = 0l;
      this->lift_horseshoe_en = 0l;
      this->state_motor_or_son = 0l;
      this->state_lift_down_or_up = 0l;
      this->hall_rfid_en = 0l;
      this->distancex = 0.0;
      this->distancey = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _error_type =
    int64_t;
  _error_type error;
  using _status_type =
    int32_t;
  _status_type status;
  using _distance_type =
    double;
  _distance_type distance;
  using _hall_location_type =
    int32_t;
  _hall_location_type hall_location;
  using _lift_son_loc_cali_type =
    int32_t;
  _lift_son_loc_cali_type lift_son_loc_cali;
  using _lift_current_loc_type =
    int32_t;
  _lift_current_loc_type lift_current_loc;
  using _lift_horseshoe_en_type =
    int32_t;
  _lift_horseshoe_en_type lift_horseshoe_en;
  using _state_motor_or_son_type =
    int32_t;
  _state_motor_or_son_type state_motor_or_son;
  using _state_lift_down_or_up_type =
    int32_t;
  _state_lift_down_or_up_type state_lift_down_or_up;
  using _hall_rfid_en_type =
    int32_t;
  _hall_rfid_en_type hall_rfid_en;
  using _distancex_type =
    double;
  _distancex_type distancex;
  using _distancey_type =
    double;
  _distancey_type distancey;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__error(
    const int64_t & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__status(
    const int32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__hall_location(
    const int32_t & _arg)
  {
    this->hall_location = _arg;
    return *this;
  }
  Type & set__lift_son_loc_cali(
    const int32_t & _arg)
  {
    this->lift_son_loc_cali = _arg;
    return *this;
  }
  Type & set__lift_current_loc(
    const int32_t & _arg)
  {
    this->lift_current_loc = _arg;
    return *this;
  }
  Type & set__lift_horseshoe_en(
    const int32_t & _arg)
  {
    this->lift_horseshoe_en = _arg;
    return *this;
  }
  Type & set__state_motor_or_son(
    const int32_t & _arg)
  {
    this->state_motor_or_son = _arg;
    return *this;
  }
  Type & set__state_lift_down_or_up(
    const int32_t & _arg)
  {
    this->state_lift_down_or_up = _arg;
    return *this;
  }
  Type & set__hall_rfid_en(
    const int32_t & _arg)
  {
    this->hall_rfid_en = _arg;
    return *this;
  }
  Type & set__distancex(
    const double & _arg)
  {
    this->distancex = _arg;
    return *this;
  }
  Type & set__distancey(
    const double & _arg)
  {
    this->distancey = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::msg::Location_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::msg::Location_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::Location_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::Location_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::Location_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::Location_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::Location_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::Location_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::Location_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::Location_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__msg__Location
    std::shared_ptr<base_interfaces_demo::msg::Location_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__msg__Location
    std::shared_ptr<base_interfaces_demo::msg::Location_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Location_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->hall_location != other.hall_location) {
      return false;
    }
    if (this->lift_son_loc_cali != other.lift_son_loc_cali) {
      return false;
    }
    if (this->lift_current_loc != other.lift_current_loc) {
      return false;
    }
    if (this->lift_horseshoe_en != other.lift_horseshoe_en) {
      return false;
    }
    if (this->state_motor_or_son != other.state_motor_or_son) {
      return false;
    }
    if (this->state_lift_down_or_up != other.state_lift_down_or_up) {
      return false;
    }
    if (this->hall_rfid_en != other.hall_rfid_en) {
      return false;
    }
    if (this->distancex != other.distancex) {
      return false;
    }
    if (this->distancey != other.distancey) {
      return false;
    }
    return true;
  }
  bool operator!=(const Location_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Location_

// alias to use template instance with default allocator
using Location =
  base_interfaces_demo::msg::Location_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__LOCATION__STRUCT_HPP_
