// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:msg/LiftInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__LIFT_INFO__STRUCT_H_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__LIFT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/LiftInfo in the package base_interfaces_demo.
typedef struct base_interfaces_demo__msg__LiftInfo
{
  int32_t lift_location;
  int32_t lift_base_location;
  int64_t error;
  int32_t status;
} base_interfaces_demo__msg__LiftInfo;

// Struct for a sequence of base_interfaces_demo__msg__LiftInfo.
typedef struct base_interfaces_demo__msg__LiftInfo__Sequence
{
  base_interfaces_demo__msg__LiftInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__msg__LiftInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__LIFT_INFO__STRUCT_H_
