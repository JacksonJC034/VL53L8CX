// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from base_interfaces_demo:msg/Manual.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "base_interfaces_demo/msg/detail/manual__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace base_interfaces_demo
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Manual_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) base_interfaces_demo::msg::Manual(_init);
}

void Manual_fini_function(void * message_memory)
{
  auto typed_message = static_cast<base_interfaces_demo::msg::Manual *>(message_memory);
  typed_message->~Manual();
}

size_t size_function__Manual__iparameter(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__Manual__iparameter(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__Manual__iparameter(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 16> *>(untyped_member);
  return &member[index];
}

size_t size_function__Manual__fparameter(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__Manual__fparameter(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__Manual__fparameter(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 16> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Manual_message_member_array[7] = {
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo::msg::Manual, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sender",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo::msg::Manual, sender),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "iparameter",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo::msg::Manual, iparameter),  // bytes offset in struct
    nullptr,  // default value
    size_function__Manual__iparameter,  // size() function pointer
    get_const_function__Manual__iparameter,  // get_const(index) function pointer
    get_function__Manual__iparameter,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "isize",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo::msg::Manual, isize),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "fparameter",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo::msg::Manual, fparameter),  // bytes offset in struct
    nullptr,  // default value
    size_function__Manual__fparameter,  // size() function pointer
    get_const_function__Manual__fparameter,  // get_const(index) function pointer
    get_function__Manual__fparameter,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "fsize",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo::msg::Manual, fsize),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo::msg::Manual, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Manual_message_members = {
  "base_interfaces_demo::msg",  // message namespace
  "Manual",  // message name
  7,  // number of fields
  sizeof(base_interfaces_demo::msg::Manual),
  Manual_message_member_array,  // message members
  Manual_init_function,  // function to initialize message memory (memory has to be allocated)
  Manual_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Manual_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Manual_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace base_interfaces_demo


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfaces_demo::msg::Manual>()
{
  return &::base_interfaces_demo::msg::rosidl_typesupport_introspection_cpp::Manual_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfaces_demo, msg, Manual)() {
  return &::base_interfaces_demo::msg::rosidl_typesupport_introspection_cpp::Manual_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
