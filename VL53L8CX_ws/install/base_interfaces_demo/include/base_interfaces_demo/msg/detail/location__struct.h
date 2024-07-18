// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__LOCATION__STRUCT_H_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Location in the package base_interfaces_demo.
typedef struct base_interfaces_demo__msg__Location
{
  double x;
  double y;
  int64_t error;
  int32_t status;
  double distance;
  int32_t hall_location;
  int32_t lift_son_loc_cali;
  int32_t lift_current_loc;
  int32_t lift_horseshoe_en;
  int32_t state_motor_or_son;
  int32_t state_lift_down_or_up;
  int32_t hall_rfid_en;
  double distancex;
  double distancey;
} base_interfaces_demo__msg__Location;

// Struct for a sequence of base_interfaces_demo__msg__Location.
typedef struct base_interfaces_demo__msg__Location__Sequence
{
  base_interfaces_demo__msg__Location * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__msg__Location__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__LOCATION__STRUCT_H_
