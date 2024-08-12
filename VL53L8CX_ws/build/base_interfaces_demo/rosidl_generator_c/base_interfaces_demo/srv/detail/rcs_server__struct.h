// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:srv/RcsServer.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__SRV__DETAIL__RCS_SERVER__STRUCT_H_
#define BASE_INTERFACES_DEMO__SRV__DETAIL__RCS_SERVER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CMD_BT'.
enum
{
  base_interfaces_demo__srv__RcsServer_Request__CMD_BT = 0l
};

/// Constant 'CMD_HARD_EMERGENCY'.
enum
{
  base_interfaces_demo__srv__RcsServer_Request__CMD_HARD_EMERGENCY = 1l
};

/// Constant 'CMD_CANCEL'.
enum
{
  base_interfaces_demo__srv__RcsServer_Request__CMD_CANCEL = 2l
};

/// Constant 'CMD_PAUSE'.
enum
{
  base_interfaces_demo__srv__RcsServer_Request__CMD_PAUSE = 3l
};

// Include directives for member types
// Member 'rcsstring'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/RcsServer in the package base_interfaces_demo.
typedef struct base_interfaces_demo__srv__RcsServer_Request
{
  int32_t cmd;
  rosidl_runtime_c__String rcsstring;
} base_interfaces_demo__srv__RcsServer_Request;

// Struct for a sequence of base_interfaces_demo__srv__RcsServer_Request.
typedef struct base_interfaces_demo__srv__RcsServer_Request__Sequence
{
  base_interfaces_demo__srv__RcsServer_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__srv__RcsServer_Request__Sequence;


// Constants defined in the message

/// Constant 'RET_REJECT'.
enum
{
  base_interfaces_demo__srv__RcsServer_Response__RET_REJECT = 0l
};

/// Constant 'RET_ACCEPT'.
enum
{
  base_interfaces_demo__srv__RcsServer_Response__RET_ACCEPT = 1l
};

// Struct defined in srv/RcsServer in the package base_interfaces_demo.
typedef struct base_interfaces_demo__srv__RcsServer_Response
{
  int32_t ret;
} base_interfaces_demo__srv__RcsServer_Response;

// Struct for a sequence of base_interfaces_demo__srv__RcsServer_Response.
typedef struct base_interfaces_demo__srv__RcsServer_Response__Sequence
{
  base_interfaces_demo__srv__RcsServer_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__srv__RcsServer_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__SRV__DETAIL__RCS_SERVER__STRUCT_H_
