// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from base_interfaces_demo:msg/Manual.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "base_interfaces_demo/msg/detail/manual__rosidl_typesupport_introspection_c.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "base_interfaces_demo/msg/detail/manual__functions.h"
#include "base_interfaces_demo/msg/detail/manual__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Manual__rosidl_typesupport_introspection_c__Manual_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__msg__Manual__init(message_memory);
}

void Manual__rosidl_typesupport_introspection_c__Manual_fini_function(void * message_memory)
{
  base_interfaces_demo__msg__Manual__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Manual__rosidl_typesupport_introspection_c__Manual_message_member_array[7] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__Manual, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sender",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__Manual, sender),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "iparameter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__Manual, iparameter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "isize",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__Manual, isize),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fparameter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__Manual, fparameter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fsize",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__Manual, fsize),  // bytes offset in struct
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
    offsetof(base_interfaces_demo__msg__Manual, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Manual__rosidl_typesupport_introspection_c__Manual_message_members = {
  "base_interfaces_demo__msg",  // message namespace
  "Manual",  // message name
  7,  // number of fields
  sizeof(base_interfaces_demo__msg__Manual),
  Manual__rosidl_typesupport_introspection_c__Manual_message_member_array,  // message members
  Manual__rosidl_typesupport_introspection_c__Manual_init_function,  // function to initialize message memory (memory has to be allocated)
  Manual__rosidl_typesupport_introspection_c__Manual_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Manual__rosidl_typesupport_introspection_c__Manual_message_type_support_handle = {
  0,
  &Manual__rosidl_typesupport_introspection_c__Manual_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, msg, Manual)() {
  if (!Manual__rosidl_typesupport_introspection_c__Manual_message_type_support_handle.typesupport_identifier) {
    Manual__rosidl_typesupport_introspection_c__Manual_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Manual__rosidl_typesupport_introspection_c__Manual_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
