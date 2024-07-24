// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from base_interfaces_demo:msg/ObsLaser.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/obs_laser__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "base_interfaces_demo/msg/detail/obs_laser__struct.h"
#include "base_interfaces_demo/msg/detail/obs_laser__functions.h"
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


using _ObsLaser__ros_msg_type = base_interfaces_demo__msg__ObsLaser;

static bool _ObsLaser__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ObsLaser__ros_msg_type * ros_message = static_cast<const _ObsLaser__ros_msg_type *>(untyped_ros_message);
  // Field name: son1
  {
    cdr << ros_message->son1;
  }

  // Field name: mom1
  {
    cdr << ros_message->mom1;
  }

  // Field name: scout1
  {
    cdr << ros_message->scout1;
  }

  // Field name: son2
  {
    cdr << ros_message->son2;
  }

  // Field name: mom2
  {
    cdr << ros_message->mom2;
  }

  // Field name: scout2
  {
    cdr << ros_message->scout2;
  }

  // Field name: error_code
  {
    cdr << ros_message->error_code;
  }

  // Field name: status
  {
    cdr << ros_message->status;
  }

  return true;
}

static bool _ObsLaser__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ObsLaser__ros_msg_type * ros_message = static_cast<_ObsLaser__ros_msg_type *>(untyped_ros_message);
  // Field name: son1
  {
    cdr >> ros_message->son1;
  }

  // Field name: mom1
  {
    cdr >> ros_message->mom1;
  }

  // Field name: scout1
  {
    cdr >> ros_message->scout1;
  }

  // Field name: son2
  {
    cdr >> ros_message->son2;
  }

  // Field name: mom2
  {
    cdr >> ros_message->mom2;
  }

  // Field name: scout2
  {
    cdr >> ros_message->scout2;
  }

  // Field name: error_code
  {
    cdr >> ros_message->error_code;
  }

  // Field name: status
  {
    cdr >> ros_message->status;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t get_serialized_size_base_interfaces_demo__msg__ObsLaser(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ObsLaser__ros_msg_type * ros_message = static_cast<const _ObsLaser__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name son1
  {
    size_t item_size = sizeof(ros_message->son1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mom1
  {
    size_t item_size = sizeof(ros_message->mom1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scout1
  {
    size_t item_size = sizeof(ros_message->scout1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name son2
  {
    size_t item_size = sizeof(ros_message->son2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mom2
  {
    size_t item_size = sizeof(ros_message->mom2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scout2
  {
    size_t item_size = sizeof(ros_message->scout2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_code
  {
    size_t item_size = sizeof(ros_message->error_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ObsLaser__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_base_interfaces_demo__msg__ObsLaser(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t max_serialized_size_base_interfaces_demo__msg__ObsLaser(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: son1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mom1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: scout1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: son2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mom2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: scout2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: error_code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ObsLaser__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_base_interfaces_demo__msg__ObsLaser(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ObsLaser = {
  "base_interfaces_demo::msg",
  "ObsLaser",
  _ObsLaser__cdr_serialize,
  _ObsLaser__cdr_deserialize,
  _ObsLaser__get_serialized_size,
  _ObsLaser__max_serialized_size
};

static rosidl_message_type_support_t _ObsLaser__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ObsLaser,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, msg, ObsLaser)() {
  return &_ObsLaser__type_support;
}

#if defined(__cplusplus)
}
#endif
