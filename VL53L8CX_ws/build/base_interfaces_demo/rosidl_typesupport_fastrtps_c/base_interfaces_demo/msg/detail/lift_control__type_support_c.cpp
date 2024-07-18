// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from base_interfaces_demo:msg/LiftControl.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/lift_control__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "base_interfaces_demo/msg/detail/lift_control__struct.h"
#include "base_interfaces_demo/msg/detail/lift_control__functions.h"
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


using _LiftControl__ros_msg_type = base_interfaces_demo__msg__LiftControl;

static bool _LiftControl__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LiftControl__ros_msg_type * ros_message = static_cast<const _LiftControl__ros_msg_type *>(untyped_ros_message);
  // Field name: error
  {
    cdr << ros_message->error;
  }

  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: lift_times
  {
    cdr << ros_message->lift_times;
  }

  // Field name: convert_times
  {
    cdr << ros_message->convert_times;
  }

  return true;
}

static bool _LiftControl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LiftControl__ros_msg_type * ros_message = static_cast<_LiftControl__ros_msg_type *>(untyped_ros_message);
  // Field name: error
  {
    cdr >> ros_message->error;
  }

  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: lift_times
  {
    cdr >> ros_message->lift_times;
  }

  // Field name: convert_times
  {
    cdr >> ros_message->convert_times;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t get_serialized_size_base_interfaces_demo__msg__LiftControl(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LiftControl__ros_msg_type * ros_message = static_cast<const _LiftControl__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

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
  // field.name lift_times
  {
    size_t item_size = sizeof(ros_message->lift_times);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name convert_times
  {
    size_t item_size = sizeof(ros_message->convert_times);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LiftControl__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_base_interfaces_demo__msg__LiftControl(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t max_serialized_size_base_interfaces_demo__msg__LiftControl(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

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
  // member: lift_times
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: convert_times
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _LiftControl__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_base_interfaces_demo__msg__LiftControl(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LiftControl = {
  "base_interfaces_demo::msg",
  "LiftControl",
  _LiftControl__cdr_serialize,
  _LiftControl__cdr_deserialize,
  _LiftControl__get_serialized_size,
  _LiftControl__max_serialized_size
};

static rosidl_message_type_support_t _LiftControl__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LiftControl,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, msg, LiftControl)() {
  return &_LiftControl__type_support;
}

#if defined(__cplusplus)
}
#endif
