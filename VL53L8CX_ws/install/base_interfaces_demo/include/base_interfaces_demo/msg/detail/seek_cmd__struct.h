// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:msg/SeekCmd.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__SEEK_CMD__STRUCT_H_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__SEEK_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SeekCmd in the package base_interfaces_demo.
typedef struct base_interfaces_demo__msg__SeekCmd
{
  int32_t cmd;
} base_interfaces_demo__msg__SeekCmd;

// Struct for a sequence of base_interfaces_demo__msg__SeekCmd.
typedef struct base_interfaces_demo__msg__SeekCmd__Sequence
{
  base_interfaces_demo__msg__SeekCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__msg__SeekCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__SEEK_CMD__STRUCT_H_
