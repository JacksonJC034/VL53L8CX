// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:srv/PubCode.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__SRV__DETAIL__PUB_CODE__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__SRV__DETAIL__PUB_CODE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__srv__PubCode_Request __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__srv__PubCode_Request __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PubCode_Request_
{
  using Type = PubCode_Request_<ContainerAllocator>;

  explicit PubCode_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pub_code = 0l;
    }
  }

  explicit PubCode_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pub_code = 0l;
    }
  }

  // field types and members
  using _pub_code_type =
    int32_t;
  _pub_code_type pub_code;

  // setters for named parameter idiom
  Type & set__pub_code(
    const int32_t & _arg)
  {
    this->pub_code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::srv::PubCode_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::srv::PubCode_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::srv::PubCode_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::srv::PubCode_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::srv::PubCode_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::srv::PubCode_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::srv::PubCode_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::srv::PubCode_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::srv::PubCode_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::srv::PubCode_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__srv__PubCode_Request
    std::shared_ptr<base_interfaces_demo::srv::PubCode_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__srv__PubCode_Request
    std::shared_ptr<base_interfaces_demo::srv::PubCode_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PubCode_Request_ & other) const
  {
    if (this->pub_code != other.pub_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const PubCode_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PubCode_Request_

// alias to use template instance with default allocator
using PubCode_Request =
  base_interfaces_demo::srv::PubCode_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace base_interfaces_demo


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__srv__PubCode_Response __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__srv__PubCode_Response __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PubCode_Response_
{
  using Type = PubCode_Response_<ContainerAllocator>;

  explicit PubCode_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->calibration = 0l;
      this->drift = 0.0;
      this->angle = 0.0;
    }
  }

  explicit PubCode_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->calibration = 0l;
      this->drift = 0.0;
      this->angle = 0.0;
    }
  }

  // field types and members
  using _calibration_type =
    int32_t;
  _calibration_type calibration;
  using _drift_type =
    double;
  _drift_type drift;
  using _angle_type =
    double;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__calibration(
    const int32_t & _arg)
  {
    this->calibration = _arg;
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

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::srv::PubCode_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::srv::PubCode_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::srv::PubCode_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::srv::PubCode_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::srv::PubCode_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::srv::PubCode_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::srv::PubCode_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::srv::PubCode_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::srv::PubCode_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::srv::PubCode_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__srv__PubCode_Response
    std::shared_ptr<base_interfaces_demo::srv::PubCode_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__srv__PubCode_Response
    std::shared_ptr<base_interfaces_demo::srv::PubCode_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PubCode_Response_ & other) const
  {
    if (this->calibration != other.calibration) {
      return false;
    }
    if (this->drift != other.drift) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const PubCode_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PubCode_Response_

// alias to use template instance with default allocator
using PubCode_Response =
  base_interfaces_demo::srv::PubCode_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace base_interfaces_demo

namespace base_interfaces_demo
{

namespace srv
{

struct PubCode
{
  using Request = base_interfaces_demo::srv::PubCode_Request;
  using Response = base_interfaces_demo::srv::PubCode_Response;
};

}  // namespace srv

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__SRV__DETAIL__PUB_CODE__STRUCT_HPP_
