// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:msg/PubCode.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__PUB_CODE__STRUCT_H_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__PUB_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/PubCode in the package base_interfaces_demo.
typedef struct base_interfaces_demo__msg__PubCode
{
  int32_t pub_code;
} base_interfaces_demo__msg__PubCode;

// Struct for a sequence of base_interfaces_demo__msg__PubCode.
typedef struct base_interfaces_demo__msg__PubCode__Sequence
{
  base_interfaces_demo__msg__PubCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__msg__PubCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__PUB_CODE__STRUCT_H_
