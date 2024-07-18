// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:msg/CarStatus.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__CAR_STATUS__STRUCT_H_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__CAR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/CarStatus in the package base_interfaces_demo.
typedef struct base_interfaces_demo__msg__CarStatus
{
  int32_t stand_alone_state;
  int32_t task_state;
  int32_t status;
} base_interfaces_demo__msg__CarStatus;

// Struct for a sequence of base_interfaces_demo__msg__CarStatus.
typedef struct base_interfaces_demo__msg__CarStatus__Sequence
{
  base_interfaces_demo__msg__CarStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__msg__CarStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__CAR_STATUS__STRUCT_H_
