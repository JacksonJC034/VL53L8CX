// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from base_interfaces_demo:msg/ManualSeekLabel.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "base_interfaces_demo/msg/detail/manual_seek_label__struct.hpp"
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

void ManualSeekLabel_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) base_interfaces_demo::msg::ManualSeekLabel(_init);
}

void ManualSeekLabel_fini_function(void * message_memory)
{
  auto typed_message = static_cast<base_interfaces_demo::msg::ManualSeekLabel *>(message_memory);
  typed_message->~ManualSeekLabel();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ManualSeekLabel_message_member_array[1] = {
  {
    "cmd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo::msg::ManualSeekLabel, cmd),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ManualSeekLabel_message_members = {
  "base_interfaces_demo::msg",  // message namespace
  "ManualSeekLabel",  // message name
  1,  // number of fields
  sizeof(base_interfaces_demo::msg::ManualSeekLabel),
  ManualSeekLabel_message_member_array,  // message members
  ManualSeekLabel_init_function,  // function to initialize message memory (memory has to be allocated)
  ManualSeekLabel_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ManualSeekLabel_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ManualSeekLabel_message_members,
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
get_message_type_support_handle<base_interfaces_demo::msg::ManualSeekLabel>()
{
  return &::base_interfaces_demo::msg::rosidl_typesupport_introspection_cpp::ManualSeekLabel_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfaces_demo, msg, ManualSeekLabel)() {
  return &::base_interfaces_demo::msg::rosidl_typesupport_introspection_cpp::ManualSeekLabel_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
