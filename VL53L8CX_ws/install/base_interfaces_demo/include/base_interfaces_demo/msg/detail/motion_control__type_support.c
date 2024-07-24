// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from base_interfaces_demo:msg/MotionControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "base_interfaces_demo/msg/detail/motion_control__rosidl_typesupport_introspection_c.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "base_interfaces_demo/msg/detail/motion_control__functions.h"
#include "base_interfaces_demo/msg/detail/motion_control__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MotionControl__rosidl_typesupport_introspection_c__MotionControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__msg__MotionControl__init(message_memory);
}

void MotionControl__rosidl_typesupport_introspection_c__MotionControl_fini_function(void * message_memory)
{
  base_interfaces_demo__msg__MotionControl__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MotionControl__rosidl_typesupport_introspection_c__MotionControl_message_member_array[3] = {
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__MotionControl, error_code),  // bytes offset in struct
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
    offsetof(base_interfaces_demo__msg__MotionControl, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_odom",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__MotionControl, total_odom),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotionControl__rosidl_typesupport_introspection_c__MotionControl_message_members = {
  "base_interfaces_demo__msg",  // message namespace
  "MotionControl",  // message name
  3,  // number of fields
  sizeof(base_interfaces_demo__msg__MotionControl),
  MotionControl__rosidl_typesupport_introspection_c__MotionControl_message_member_array,  // message members
  MotionControl__rosidl_typesupport_introspection_c__MotionControl_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionControl__rosidl_typesupport_introspection_c__MotionControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotionControl__rosidl_typesupport_introspection_c__MotionControl_message_type_support_handle = {
  0,
  &MotionControl__rosidl_typesupport_introspection_c__MotionControl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, msg, MotionControl)() {
  if (!MotionControl__rosidl_typesupport_introspection_c__MotionControl_message_type_support_handle.typesupport_identifier) {
    MotionControl__rosidl_typesupport_introspection_c__MotionControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotionControl__rosidl_typesupport_introspection_c__MotionControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
