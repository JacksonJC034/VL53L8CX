// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:srv/SetEmergency.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__SRV__DETAIL__SET_EMERGENCY__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__SRV__DETAIL__SET_EMERGENCY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__srv__SetEmergency_Request __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__srv__SetEmergency_Request __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetEmergency_Request_
{
  using Type = SetEmergency_Request_<ContainerAllocator>;

  explicit SetEmergency_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->emergency_cmd = 0;
    }
  }

  explicit SetEmergency_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->emergency_cmd = 0;
    }
  }

  // field types and members
  using _emergency_cmd_type =
    uint8_t;
  _emergency_cmd_type emergency_cmd;

  // setters for named parameter idiom
  Type & set__emergency_cmd(
    const uint8_t & _arg)
  {
    this->emergency_cmd = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t EMERGENCY_NONE =
    0u;
  static constexpr uint8_t EMERGENCY_SOFT =
    1u;
  static constexpr uint8_t EMERGENCY_HARD =
    2u;

  // pointer types
  using RawPtr =
    base_interfaces_demo::srv::SetEmergency_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::srv::SetEmergency_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::srv::SetEmergency_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::srv::SetEmergency_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::srv::SetEmergency_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::srv::SetEmergency_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::srv::SetEmergency_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::srv::SetEmergency_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::srv::SetEmergency_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::srv::SetEmergency_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__srv__SetEmergency_Request
    std::shared_ptr<base_interfaces_demo::srv::SetEmergency_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__srv__SetEmergency_Request
    std::shared_ptr<base_interfaces_demo::srv::SetEmergency_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetEmergency_Request_ & other) const
  {
    if (this->emergency_cmd != other.emergency_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetEmergency_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetEmergency_Request_

// alias to use template instance with default allocator
using SetEmergency_Request =
  base_interfaces_demo::srv::SetEmergency_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SetEmergency_Request_<ContainerAllocator>::EMERGENCY_NONE;
template<typename ContainerAllocator>
constexpr uint8_t SetEmergency_Request_<ContainerAllocator>::EMERGENCY_SOFT;
template<typename ContainerAllocator>
constexpr uint8_t SetEmergency_Request_<ContainerAllocator>::EMERGENCY_HARD;

}  // namespace srv

}  // namespace base_interfaces_demo


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__srv__SetEmergency_Response __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__srv__SetEmergency_Response __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetEmergency_Response_
{
  using Type = SetEmergency_Response_<ContainerAllocator>;

  explicit SetEmergency_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetEmergency_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::srv::SetEmergency_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::srv::SetEmergency_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::srv::SetEmergency_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::srv::SetEmergency_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::srv::SetEmergency_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::srv::SetEmergency_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::srv::SetEmergency_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::srv::SetEmergency_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::srv::SetEmergency_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::srv::SetEmergency_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__srv__SetEmergency_Response
    std::shared_ptr<base_interfaces_demo::srv::SetEmergency_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__srv__SetEmergency_Response
    std::shared_ptr<base_interfaces_demo::srv::SetEmergency_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetEmergency_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetEmergency_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetEmergency_Response_

// alias to use template instance with default allocator
using SetEmergency_Response =
  base_interfaces_demo::srv::SetEmergency_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace base_interfaces_demo

namespace base_interfaces_demo
{

namespace srv
{

struct SetEmergency
{
  using Request = base_interfaces_demo::srv::SetEmergency_Request;
  using Response = base_interfaces_demo::srv::SetEmergency_Response;
};

}  // namespace srv

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__SRV__DETAIL__SET_EMERGENCY__STRUCT_HPP_
