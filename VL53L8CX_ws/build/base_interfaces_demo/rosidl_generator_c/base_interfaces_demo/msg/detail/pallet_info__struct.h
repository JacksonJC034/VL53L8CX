// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:msg/PalletInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__PALLET_INFO__STRUCT_H_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__PALLET_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/PalletInfo in the package base_interfaces_demo.
typedef struct base_interfaces_demo__msg__PalletInfo
{
  int32_t distance;
  int32_t pallet;
  double drift;
  double angle;
  int64_t error_code;
  int32_t status;
  uint32_t sensor1[64];
  uint32_t sensor2[64];
} base_interfaces_demo__msg__PalletInfo;

// Struct for a sequence of base_interfaces_demo__msg__PalletInfo.
typedef struct base_interfaces_demo__msg__PalletInfo__Sequence
{
  base_interfaces_demo__msg__PalletInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__msg__PalletInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__PALLET_INFO__STRUCT_H_
