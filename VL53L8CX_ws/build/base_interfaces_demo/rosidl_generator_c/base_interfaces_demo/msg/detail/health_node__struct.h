// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:msg/HealthNode.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__HEALTH_NODE__STRUCT_H_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__HEALTH_NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/HealthNode in the package base_interfaces_demo.
typedef struct base_interfaces_demo__msg__HealthNode
{
  double cpu_usage;
  double disk_usage;
  double memory_usage;
  double nic_status;
  double temperature;
  double cpu_frequency;
  uint64_t error_array[12];
  uint8_t error_level;
} base_interfaces_demo__msg__HealthNode;

// Struct for a sequence of base_interfaces_demo__msg__HealthNode.
typedef struct base_interfaces_demo__msg__HealthNode__Sequence
{
  base_interfaces_demo__msg__HealthNode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__msg__HealthNode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__HEALTH_NODE__STRUCT_H_
