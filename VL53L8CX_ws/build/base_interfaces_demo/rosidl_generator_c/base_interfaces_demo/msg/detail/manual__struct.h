// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:msg/Manual.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__MANUAL__STRUCT_H_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__MANUAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Manual in the package base_interfaces_demo.
typedef struct base_interfaces_demo__msg__Manual
{
  int32_t type;
  int32_t sender;
  int32_t iparameter[16];
  int32_t isize;
  float fparameter[16];
  float fsize;
  int32_t status;
} base_interfaces_demo__msg__Manual;

// Struct for a sequence of base_interfaces_demo__msg__Manual.
typedef struct base_interfaces_demo__msg__Manual__Sequence
{
  base_interfaces_demo__msg__Manual * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__msg__Manual__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__MANUAL__STRUCT_H_
