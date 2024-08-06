// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:srv/SetEmergency.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__SRV__DETAIL__SET_EMERGENCY__STRUCT_H_
#define BASE_INTERFACES_DEMO__SRV__DETAIL__SET_EMERGENCY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EMERGENCY_NONE'.
enum
{
  base_interfaces_demo__srv__SetEmergency_Request__EMERGENCY_NONE = 0
};

/// Constant 'EMERGENCY_SOFT'.
enum
{
  base_interfaces_demo__srv__SetEmergency_Request__EMERGENCY_SOFT = 1
};

/// Constant 'EMERGENCY_HARD'.
enum
{
  base_interfaces_demo__srv__SetEmergency_Request__EMERGENCY_HARD = 2
};

// Struct defined in srv/SetEmergency in the package base_interfaces_demo.
typedef struct base_interfaces_demo__srv__SetEmergency_Request
{
  uint8_t emergency_cmd;
} base_interfaces_demo__srv__SetEmergency_Request;

// Struct for a sequence of base_interfaces_demo__srv__SetEmergency_Request.
typedef struct base_interfaces_demo__srv__SetEmergency_Request__Sequence
{
  base_interfaces_demo__srv__SetEmergency_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__srv__SetEmergency_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetEmergency in the package base_interfaces_demo.
typedef struct base_interfaces_demo__srv__SetEmergency_Response
{
  bool success;
} base_interfaces_demo__srv__SetEmergency_Response;

// Struct for a sequence of base_interfaces_demo__srv__SetEmergency_Response.
typedef struct base_interfaces_demo__srv__SetEmergency_Response__Sequence
{
  base_interfaces_demo__srv__SetEmergency_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__srv__SetEmergency_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__SRV__DETAIL__SET_EMERGENCY__STRUCT_H_
