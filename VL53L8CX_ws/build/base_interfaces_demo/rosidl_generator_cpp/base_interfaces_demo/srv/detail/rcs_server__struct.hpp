// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:srv/RcsServer.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__SRV__DETAIL__RCS_SERVER__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__SRV__DETAIL__RCS_SERVER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__srv__RcsServer_Request __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__srv__RcsServer_Request __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RcsServer_Request_
{
  using Type = RcsServer_Request_<ContainerAllocator>;

  explicit RcsServer_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = 0l;
      this->rcsstring = "";
    }
  }

  explicit RcsServer_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rcsstring(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = 0l;
      this->rcsstring = "";
    }
  }

  // field types and members
  using _cmd_type =
    int32_t;
  _cmd_type cmd;
  using _rcsstring_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _rcsstring_type rcsstring;

  // setters for named parameter idiom
  Type & set__cmd(
    const int32_t & _arg)
  {
    this->cmd = _arg;
    return *this;
  }
  Type & set__rcsstring(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->rcsstring = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t CMD_BT =
    0;
  static constexpr int32_t CMD_HARD_EMERGENCY =
    1;
  static constexpr int32_t CMD_CANCEL =
    2;
  static constexpr int32_t CMD_PAUSE =
    3;

  // pointer types
  using RawPtr =
    base_interfaces_demo::srv::RcsServer_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::srv::RcsServer_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::srv::RcsServer_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::srv::RcsServer_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::srv::RcsServer_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::srv::RcsServer_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::srv::RcsServer_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::srv::RcsServer_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::srv::RcsServer_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::srv::RcsServer_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__srv__RcsServer_Request
    std::shared_ptr<base_interfaces_demo::srv::RcsServer_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__srv__RcsServer_Request
    std::shared_ptr<base_interfaces_demo::srv::RcsServer_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RcsServer_Request_ & other) const
  {
    if (this->cmd != other.cmd) {
      return false;
    }
    if (this->rcsstring != other.rcsstring) {
      return false;
    }
    return true;
  }
  bool operator!=(const RcsServer_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RcsServer_Request_

// alias to use template instance with default allocator
using RcsServer_Request =
  base_interfaces_demo::srv::RcsServer_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t RcsServer_Request_<ContainerAllocator>::CMD_BT;
template<typename ContainerAllocator>
constexpr int32_t RcsServer_Request_<ContainerAllocator>::CMD_HARD_EMERGENCY;
template<typename ContainerAllocator>
constexpr int32_t RcsServer_Request_<ContainerAllocator>::CMD_CANCEL;
template<typename ContainerAllocator>
constexpr int32_t RcsServer_Request_<ContainerAllocator>::CMD_PAUSE;

}  // namespace srv

}  // namespace base_interfaces_demo


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__srv__RcsServer_Response __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__srv__RcsServer_Response __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RcsServer_Response_
{
  using Type = RcsServer_Response_<ContainerAllocator>;

  explicit RcsServer_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ret = 0l;
    }
  }

  explicit RcsServer_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ret = 0l;
    }
  }

  // field types and members
  using _ret_type =
    int32_t;
  _ret_type ret;

  // setters for named parameter idiom
  Type & set__ret(
    const int32_t & _arg)
  {
    this->ret = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t RET_REJECT =
    0;
  static constexpr int32_t RET_ACCEPT =
    1;

  // pointer types
  using RawPtr =
    base_interfaces_demo::srv::RcsServer_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::srv::RcsServer_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::srv::RcsServer_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::srv::RcsServer_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::srv::RcsServer_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::srv::RcsServer_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::srv::RcsServer_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::srv::RcsServer_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::srv::RcsServer_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::srv::RcsServer_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__srv__RcsServer_Response
    std::shared_ptr<base_interfaces_demo::srv::RcsServer_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__srv__RcsServer_Response
    std::shared_ptr<base_interfaces_demo::srv::RcsServer_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RcsServer_Response_ & other) const
  {
    if (this->ret != other.ret) {
      return false;
    }
    return true;
  }
  bool operator!=(const RcsServer_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RcsServer_Response_

// alias to use template instance with default allocator
using RcsServer_Response =
  base_interfaces_demo::srv::RcsServer_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t RcsServer_Response_<ContainerAllocator>::RET_REJECT;
template<typename ContainerAllocator>
constexpr int32_t RcsServer_Response_<ContainerAllocator>::RET_ACCEPT;

}  // namespace srv

}  // namespace base_interfaces_demo

namespace base_interfaces_demo
{

namespace srv
{

struct RcsServer
{
  using Request = base_interfaces_demo::srv::RcsServer_Request;
  using Response = base_interfaces_demo::srv::RcsServer_Response;
};

}  // namespace srv

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__SRV__DETAIL__RCS_SERVER__STRUCT_HPP_
