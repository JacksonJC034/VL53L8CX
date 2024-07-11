// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:srv/PubCode.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__SRV__DETAIL__PUB_CODE__STRUCT_H_
#define BASE_INTERFACES_DEMO__SRV__DETAIL__PUB_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/PubCode in the package base_interfaces_demo.
typedef struct base_interfaces_demo__srv__PubCode_Request
{
  int32_t pub_code;
} base_interfaces_demo__srv__PubCode_Request;

// Struct for a sequence of base_interfaces_demo__srv__PubCode_Request.
typedef struct base_interfaces_demo__srv__PubCode_Request__Sequence
{
  base_interfaces_demo__srv__PubCode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__srv__PubCode_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/PubCode in the package base_interfaces_demo.
typedef struct base_interfaces_demo__srv__PubCode_Response
{
  int32_t calibration;
  double drift;
  double angle;
} base_interfaces_demo__srv__PubCode_Response;

// Struct for a sequence of base_interfaces_demo__srv__PubCode_Response.
typedef struct base_interfaces_demo__srv__PubCode_Response__Sequence
{
  base_interfaces_demo__srv__PubCode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__srv__PubCode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__SRV__DETAIL__PUB_CODE__STRUCT_H_
