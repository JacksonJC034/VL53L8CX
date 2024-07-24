// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:msg/ObsLaser.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__OBS_LASER__STRUCT_H_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__OBS_LASER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ObsLaser in the package base_interfaces_demo.
typedef struct base_interfaces_demo__msg__ObsLaser
{
  int32_t son1;
  int32_t mom1;
  int32_t scout1;
  int32_t son2;
  int32_t mom2;
  int32_t scout2;
  int64_t error_code;
  int32_t status;
} base_interfaces_demo__msg__ObsLaser;

// Struct for a sequence of base_interfaces_demo__msg__ObsLaser.
typedef struct base_interfaces_demo__msg__ObsLaser__Sequence
{
  base_interfaces_demo__msg__ObsLaser * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__msg__ObsLaser__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__OBS_LASER__STRUCT_H_
