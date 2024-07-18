// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from base_interfaces_demo:msg/RcsInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "base_interfaces_demo/msg/detail/rcs_info__rosidl_typesupport_introspection_c.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "base_interfaces_demo/msg/detail/rcs_info__functions.h"
#include "base_interfaces_demo/msg/detail/rcs_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void RcsInfo__rosidl_typesupport_introspection_c__RcsInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__msg__RcsInfo__init(message_memory);
}

void RcsInfo__rosidl_typesupport_introspection_c__RcsInfo_fini_function(void * message_memory)
{
  base_interfaces_demo__msg__RcsInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RcsInfo__rosidl_typesupport_introspection_c__RcsInfo_message_member_array[3] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__RcsInfo, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__RcsInfo, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__RcsInfo, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RcsInfo__rosidl_typesupport_introspection_c__RcsInfo_message_members = {
  "base_interfaces_demo__msg",  // message namespace
  "RcsInfo",  // message name
  3,  // number of fields
  sizeof(base_interfaces_demo__msg__RcsInfo),
  RcsInfo__rosidl_typesupport_introspection_c__RcsInfo_message_member_array,  // message members
  RcsInfo__rosidl_typesupport_introspection_c__RcsInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  RcsInfo__rosidl_typesupport_introspection_c__RcsInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RcsInfo__rosidl_typesupport_introspection_c__RcsInfo_message_type_support_handle = {
  0,
  &RcsInfo__rosidl_typesupport_introspection_c__RcsInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, msg, RcsInfo)() {
  if (!RcsInfo__rosidl_typesupport_introspection_c__RcsInfo_message_type_support_handle.typesupport_identifier) {
    RcsInfo__rosidl_typesupport_introspection_c__RcsInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RcsInfo__rosidl_typesupport_introspection_c__RcsInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
