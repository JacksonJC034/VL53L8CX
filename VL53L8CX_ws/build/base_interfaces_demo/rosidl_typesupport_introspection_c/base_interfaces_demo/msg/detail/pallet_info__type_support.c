// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from base_interfaces_demo:msg/PalletInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "base_interfaces_demo/msg/detail/pallet_info__rosidl_typesupport_introspection_c.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "base_interfaces_demo/msg/detail/pallet_info__functions.h"
#include "base_interfaces_demo/msg/detail/pallet_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void PalletInfo__rosidl_typesupport_introspection_c__PalletInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__msg__PalletInfo__init(message_memory);
}

void PalletInfo__rosidl_typesupport_introspection_c__PalletInfo_fini_function(void * message_memory)
{
  base_interfaces_demo__msg__PalletInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PalletInfo__rosidl_typesupport_introspection_c__PalletInfo_message_member_array[5] = {
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__PalletInfo, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pallet",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__PalletInfo, pallet),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "drift",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__PalletInfo, drift),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__PalletInfo, angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__PalletInfo, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PalletInfo__rosidl_typesupport_introspection_c__PalletInfo_message_members = {
  "base_interfaces_demo__msg",  // message namespace
  "PalletInfo",  // message name
  5,  // number of fields
  sizeof(base_interfaces_demo__msg__PalletInfo),
  PalletInfo__rosidl_typesupport_introspection_c__PalletInfo_message_member_array,  // message members
  PalletInfo__rosidl_typesupport_introspection_c__PalletInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  PalletInfo__rosidl_typesupport_introspection_c__PalletInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PalletInfo__rosidl_typesupport_introspection_c__PalletInfo_message_type_support_handle = {
  0,
  &PalletInfo__rosidl_typesupport_introspection_c__PalletInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, msg, PalletInfo)() {
  if (!PalletInfo__rosidl_typesupport_introspection_c__PalletInfo_message_type_support_handle.typesupport_identifier) {
    PalletInfo__rosidl_typesupport_introspection_c__PalletInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PalletInfo__rosidl_typesupport_introspection_c__PalletInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
