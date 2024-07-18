// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:msg/MotionControl.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__MOTION_CONTROL__STRUCT_H_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__MOTION_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MotionControl in the package base_interfaces_demo.
typedef struct base_interfaces_demo__msg__MotionControl
{
  int32_t error;
  int32_t status;
  double total_odom;
} base_interfaces_demo__msg__MotionControl;

// Struct for a sequence of base_interfaces_demo__msg__MotionControl.
typedef struct base_interfaces_demo__msg__MotionControl__Sequence
{
  base_interfaces_demo__msg__MotionControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__msg__MotionControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__MOTION_CONTROL__STRUCT_H_
