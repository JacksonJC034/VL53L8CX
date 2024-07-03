// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from base_interfaces_demo:msg/PalletInfo.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/pallet_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "base_interfaces_demo/msg/detail/pallet_info__struct.h"
#include "base_interfaces_demo/msg/detail/pallet_info__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _PalletInfo__ros_msg_type = base_interfaces_demo__msg__PalletInfo;

static bool _PalletInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PalletInfo__ros_msg_type * ros_message = static_cast<const _PalletInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: distance
  {
    cdr << ros_message->distance;
  }

  // Field name: pallet
  {
    cdr << ros_message->pallet;
  }

  // Field name: drift
  {
    cdr << ros_message->drift;
  }

  // Field name: angle
  {
    cdr << ros_message->angle;
  }

  // Field name: error
  {
    cdr << ros_message->error;
  }

  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: sensor1
  {
    size_t size = 64;
    auto array_ptr = ros_message->sensor1;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: sensor2
  {
    size_t size = 64;
    auto array_ptr = ros_message->sensor2;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _PalletInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PalletInfo__ros_msg_type * ros_message = static_cast<_PalletInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: distance
  {
    cdr >> ros_message->distance;
  }

  // Field name: pallet
  {
    cdr >> ros_message->pallet;
  }

  // Field name: drift
  {
    cdr >> ros_message->drift;
  }

  // Field name: angle
  {
    cdr >> ros_message->angle;
  }

  // Field name: error
  {
    cdr >> ros_message->error;
  }

  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: sensor1
  {
    size_t size = 64;
    auto array_ptr = ros_message->sensor1;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: sensor2
  {
    size_t size = 64;
    auto array_ptr = ros_message->sensor2;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t get_serialized_size_base_interfaces_demo__msg__PalletInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PalletInfo__ros_msg_type * ros_message = static_cast<const _PalletInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name distance
  {
    size_t item_size = sizeof(ros_message->distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pallet
  {
    size_t item_size = sizeof(ros_message->pallet);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drift
  {
    size_t item_size = sizeof(ros_message->drift);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle
  {
    size_t item_size = sizeof(ros_message->angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error
  {
    size_t item_size = sizeof(ros_message->error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sensor1
  {
    size_t array_size = 64;
    auto array_ptr = ros_message->sensor1;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sensor2
  {
    size_t array_size = 64;
    auto array_ptr = ros_message->sensor2;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PalletInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_base_interfaces_demo__msg__PalletInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t max_serialized_size_base_interfaces_demo__msg__PalletInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pallet
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: drift
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sensor1
  {
    size_t array_size = 64;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sensor2
  {
    size_t array_size = 64;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PalletInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_base_interfaces_demo__msg__PalletInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PalletInfo = {
  "base_interfaces_demo::msg",
  "PalletInfo",
  _PalletInfo__cdr_serialize,
  _PalletInfo__cdr_deserialize,
  _PalletInfo__get_serialized_size,
  _PalletInfo__max_serialized_size
};

static rosidl_message_type_support_t _PalletInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PalletInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, msg, PalletInfo)() {
  return &_PalletInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
