// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from base_interfaces_demo:msg/RcsInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "base_interfaces_demo/msg/detail/rcs_info__struct.hpp"
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

void RcsInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) base_interfaces_demo::msg::RcsInfo(_init);
}

void RcsInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<base_interfaces_demo::msg::RcsInfo *>(message_memory);
  typed_message->~RcsInfo();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RcsInfo_message_member_array[3] = {
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo::msg::RcsInfo, type),  // bytes offset in struct
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
    offsetof(base_interfaces_demo::msg::RcsInfo, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo::msg::RcsInfo, error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RcsInfo_message_members = {
  "base_interfaces_demo::msg",  // message namespace
  "RcsInfo",  // message name
  3,  // number of fields
  sizeof(base_interfaces_demo::msg::RcsInfo),
  RcsInfo_message_member_array,  // message members
  RcsInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  RcsInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RcsInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RcsInfo_message_members,
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
get_message_type_support_handle<base_interfaces_demo::msg::RcsInfo>()
{
  return &::base_interfaces_demo::msg::rosidl_typesupport_introspection_cpp::RcsInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfaces_demo, msg, RcsInfo)() {
  return &::base_interfaces_demo::msg::rosidl_typesupport_introspection_cpp::RcsInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
