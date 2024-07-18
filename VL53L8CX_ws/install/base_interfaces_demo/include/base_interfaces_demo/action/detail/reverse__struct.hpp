// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:action/Reverse.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__ACTION__DETAIL__REVERSE__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__ACTION__DETAIL__REVERSE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__action__Reverse_Goal __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__action__Reverse_Goal __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Reverse_Goal_
{
  using Type = Reverse_Goal_<ContainerAllocator>;

  explicit Reverse_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_location = 0.0f;
      this->type = 0l;
    }
  }

  explicit Reverse_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_location = 0.0f;
      this->type = 0l;
    }
  }

  // field types and members
  using _goal_location_type =
    float;
  _goal_location_type goal_location;
  using _type_type =
    int32_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__goal_location(
    const float & _arg)
  {
    this->goal_location = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::action::Reverse_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::action::Reverse_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Reverse_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Reverse_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Reverse_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Reverse_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Reverse_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Reverse_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Reverse_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Reverse_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__action__Reverse_Goal
    std::shared_ptr<base_interfaces_demo::action::Reverse_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__action__Reverse_Goal
    std::shared_ptr<base_interfaces_demo::action::Reverse_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Reverse_Goal_ & other) const
  {
    if (this->goal_location != other.goal_location) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const Reverse_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Reverse_Goal_

// alias to use template instance with default allocator
using Reverse_Goal =
  base_interfaces_demo::action::Reverse_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfaces_demo


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__action__Reverse_Result __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__action__Reverse_Result __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Reverse_Result_
{
  using Type = Reverse_Result_<ContainerAllocator>;

  explicit Reverse_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->final_location = 0.0f;
    }
  }

  explicit Reverse_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->final_location = 0.0f;
    }
  }

  // field types and members
  using _final_location_type =
    float;
  _final_location_type final_location;

  // setters for named parameter idiom
  Type & set__final_location(
    const float & _arg)
  {
    this->final_location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::action::Reverse_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::action::Reverse_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Reverse_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Reverse_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Reverse_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Reverse_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Reverse_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Reverse_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Reverse_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Reverse_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__action__Reverse_Result
    std::shared_ptr<base_interfaces_demo::action::Reverse_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__action__Reverse_Result
    std::shared_ptr<base_interfaces_demo::action::Reverse_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Reverse_Result_ & other) const
  {
    if (this->final_location != other.final_location) {
      return false;
    }
    return true;
  }
  bool operator!=(const Reverse_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Reverse_Result_

// alias to use template instance with default allocator
using Reverse_Result =
  base_interfaces_demo::action::Reverse_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfaces_demo


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__action__Reverse_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__action__Reverse_Feedback __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Reverse_Feedback_
{
  using Type = Reverse_Feedback_<ContainerAllocator>;

  explicit Reverse_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_location = 0.0f;
    }
  }

  explicit Reverse_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_location = 0.0f;
    }
  }

  // field types and members
  using _current_location_type =
    float;
  _current_location_type current_location;

  // setters for named parameter idiom
  Type & set__current_location(
    const float & _arg)
  {
    this->current_location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::action::Reverse_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::action::Reverse_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Reverse_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Reverse_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Reverse_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Reverse_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Reverse_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Reverse_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Reverse_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Reverse_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__action__Reverse_Feedback
    std::shared_ptr<base_interfaces_demo::action::Reverse_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__action__Reverse_Feedback
    std::shared_ptr<base_interfaces_demo::action::Reverse_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Reverse_Feedback_ & other) const
  {
    if (this->current_location != other.current_location) {
      return false;
    }
    return true;
  }
  bool operator!=(const Reverse_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Reverse_Feedback_

// alias to use template instance with default allocator
using Reverse_Feedback =
  base_interfaces_demo::action::Reverse_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfaces_demo


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "base_interfaces_demo/action/detail/reverse__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__action__Reverse_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__action__Reverse_SendGoal_Request __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Reverse_SendGoal_Request_
{
  using Type = Reverse_SendGoal_Request_<ContainerAllocator>;

  explicit Reverse_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Reverse_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    base_interfaces_demo::action::Reverse_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const base_interfaces_demo::action::Reverse_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::action::Reverse_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::action::Reverse_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Reverse_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Reverse_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Reverse_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Reverse_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Reverse_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Reverse_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Reverse_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Reverse_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__action__Reverse_SendGoal_Request
    std::shared_ptr<base_interfaces_demo::action::Reverse_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__action__Reverse_SendGoal_Request
    std::shared_ptr<base_interfaces_demo::action::Reverse_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Reverse_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Reverse_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Reverse_SendGoal_Request_

// alias to use template instance with default allocator
using Reverse_SendGoal_Request =
  base_interfaces_demo::action::Reverse_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfaces_demo


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__action__Reverse_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__action__Reverse_SendGoal_Response __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Reverse_SendGoal_Response_
{
  using Type = Reverse_SendGoal_Response_<ContainerAllocator>;

  explicit Reverse_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Reverse_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::action::Reverse_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::action::Reverse_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Reverse_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Reverse_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Reverse_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Reverse_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Reverse_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Reverse_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Reverse_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Reverse_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__action__Reverse_SendGoal_Response
    std::shared_ptr<base_interfaces_demo::action::Reverse_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__action__Reverse_SendGoal_Response
    std::shared_ptr<base_interfaces_demo::action::Reverse_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Reverse_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Reverse_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Reverse_SendGoal_Response_

// alias to use template instance with default allocator
using Reverse_SendGoal_Response =
  base_interfaces_demo::action::Reverse_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfaces_demo

namespace base_interfaces_demo
{

namespace action
{

struct Reverse_SendGoal
{
  using Request = base_interfaces_demo::action::Reverse_SendGoal_Request;
  using Response = base_interfaces_demo::action::Reverse_SendGoal_Response;
};

}  // namespace action

}  // namespace base_interfaces_demo


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__action__Reverse_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__action__Reverse_GetResult_Request __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Reverse_GetResult_Request_
{
  using Type = Reverse_GetResult_Request_<ContainerAllocator>;

  explicit Reverse_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Reverse_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::action::Reverse_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::action::Reverse_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Reverse_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Reverse_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Reverse_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Reverse_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Reverse_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Reverse_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Reverse_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Reverse_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__action__Reverse_GetResult_Request
    std::shared_ptr<base_interfaces_demo::action::Reverse_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__action__Reverse_GetResult_Request
    std::shared_ptr<base_interfaces_demo::action::Reverse_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Reverse_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Reverse_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Reverse_GetResult_Request_

// alias to use template instance with default allocator
using Reverse_GetResult_Request =
  base_interfaces_demo::action::Reverse_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfaces_demo


// Include directives for member types
// Member 'result'
// already included above
// #include "base_interfaces_demo/action/detail/reverse__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__action__Reverse_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__action__Reverse_GetResult_Response __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Reverse_GetResult_Response_
{
  using Type = Reverse_GetResult_Response_<ContainerAllocator>;

  explicit Reverse_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Reverse_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    base_interfaces_demo::action::Reverse_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const base_interfaces_demo::action::Reverse_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::action::Reverse_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::action::Reverse_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Reverse_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Reverse_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Reverse_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Reverse_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Reverse_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Reverse_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Reverse_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Reverse_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__action__Reverse_GetResult_Response
    std::shared_ptr<base_interfaces_demo::action::Reverse_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__action__Reverse_GetResult_Response
    std::shared_ptr<base_interfaces_demo::action::Reverse_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Reverse_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Reverse_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Reverse_GetResult_Response_

// alias to use template instance with default allocator
using Reverse_GetResult_Response =
  base_interfaces_demo::action::Reverse_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfaces_demo

namespace base_interfaces_demo
{

namespace action
{

struct Reverse_GetResult
{
  using Request = base_interfaces_demo::action::Reverse_GetResult_Request;
  using Response = base_interfaces_demo::action::Reverse_GetResult_Response;
};

}  // namespace action

}  // namespace base_interfaces_demo


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "base_interfaces_demo/action/detail/reverse__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__action__Reverse_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__action__Reverse_FeedbackMessage __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Reverse_FeedbackMessage_
{
  using Type = Reverse_FeedbackMessage_<ContainerAllocator>;

  explicit Reverse_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Reverse_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    base_interfaces_demo::action::Reverse_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const base_interfaces_demo::action::Reverse_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::action::Reverse_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::action::Reverse_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Reverse_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Reverse_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Reverse_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Reverse_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Reverse_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Reverse_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Reverse_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Reverse_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__action__Reverse_FeedbackMessage
    std::shared_ptr<base_interfaces_demo::action::Reverse_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__action__Reverse_FeedbackMessage
    std::shared_ptr<base_interfaces_demo::action::Reverse_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Reverse_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Reverse_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Reverse_FeedbackMessage_

// alias to use template instance with default allocator
using Reverse_FeedbackMessage =
  base_interfaces_demo::action::Reverse_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfaces_demo

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace base_interfaces_demo
{

namespace action
{

struct Reverse
{
  /// The goal message defined in the action definition.
  using Goal = base_interfaces_demo::action::Reverse_Goal;
  /// The result message defined in the action definition.
  using Result = base_interfaces_demo::action::Reverse_Result;
  /// The feedback message defined in the action definition.
  using Feedback = base_interfaces_demo::action::Reverse_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = base_interfaces_demo::action::Reverse_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = base_interfaces_demo::action::Reverse_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = base_interfaces_demo::action::Reverse_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Reverse Reverse;

}  // namespace action

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__ACTION__DETAIL__REVERSE__STRUCT_HPP_
