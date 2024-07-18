// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:msg/BmsInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__BMS_INFO__STRUCT_H_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__BMS_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/BmsInfo in the package base_interfaces_demo.
typedef struct base_interfaces_demo__msg__BmsInfo
{
  uint32_t cell_num;
  uint32_t run_time;
  uint32_t hsoc;
  double voltage;
  uint32_t cur_cadc;
  double temp[6];
  uint32_t temp1;
  uint32_t temp2;
  uint32_t temp3;
  uint32_t temp4;
  uint32_t temp5;
  uint32_t temp6;
  double tmax;
  double tmin;
  uint32_t vmax;
  uint32_t vmin;
  uint32_t vmaxmin_no;
  uint32_t rsoc;
  double fcc;
  double rc;
  uint32_t cycle_count;
  uint32_t protect;
  uint32_t alarm;
  uint32_t pack_status;
  uint32_t vcell[17];
  uint32_t vcell1;
  int32_t state;
  uint32_t soc;
  int32_t status;
  int64_t error_code;
} base_interfaces_demo__msg__BmsInfo;

// Struct for a sequence of base_interfaces_demo__msg__BmsInfo.
typedef struct base_interfaces_demo__msg__BmsInfo__Sequence
{
  base_interfaces_demo__msg__BmsInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__msg__BmsInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__BMS_INFO__STRUCT_H_
