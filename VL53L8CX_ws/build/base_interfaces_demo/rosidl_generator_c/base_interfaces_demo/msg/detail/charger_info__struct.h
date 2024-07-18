// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:msg/ChargerInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__CHARGER_INFO__STRUCT_H_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__CHARGER_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ChargerInfo in the package base_interfaces_demo.
typedef struct base_interfaces_demo__msg__ChargerInfo
{
  int32_t charger_status;
  int32_t status;
  int64_t error_code;
} base_interfaces_demo__msg__ChargerInfo;

// Struct for a sequence of base_interfaces_demo__msg__ChargerInfo.
typedef struct base_interfaces_demo__msg__ChargerInfo__Sequence
{
  base_interfaces_demo__msg__ChargerInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__msg__ChargerInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__CHARGER_INFO__STRUCT_H_
