// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SystemStatus in the package base_interfaces_demo.
typedef struct base_interfaces_demo__msg__SystemStatus
{
  int32_t system_mode;
  int32_t work_status;
  int32_t init_status;
} base_interfaces_demo__msg__SystemStatus;

// Struct for a sequence of base_interfaces_demo__msg__SystemStatus.
typedef struct base_interfaces_demo__msg__SystemStatus__Sequence
{
  base_interfaces_demo__msg__SystemStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__msg__SystemStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_
