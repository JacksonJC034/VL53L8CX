// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from base_interfaces_demo:msg/SystemStatus.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/system_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "base_interfaces_demo/msg/detail/system_status__struct.h"
#include "base_interfaces_demo/msg/detail/system_status__functions.h"
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


using _SystemStatus__ros_msg_type = base_interfaces_demo__msg__SystemStatus;

static bool _SystemStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SystemStatus__ros_msg_type * ros_message = static_cast<const _SystemStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: system_mode
  {
    cdr << ros_message->system_mode;
  }

  // Field name: work_status
  {
    cdr << ros_message->work_status;
  }

  // Field name: init_status
  {
    cdr << ros_message->init_status;
  }

  return true;
}

static bool _SystemStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SystemStatus__ros_msg_type * ros_message = static_cast<_SystemStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: system_mode
  {
    cdr >> ros_message->system_mode;
  }

  // Field name: work_status
  {
    cdr >> ros_message->work_status;
  }

  // Field name: init_status
  {
    cdr >> ros_message->init_status;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t get_serialized_size_base_interfaces_demo__msg__SystemStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SystemStatus__ros_msg_type * ros_message = static_cast<const _SystemStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name system_mode
  {
    size_t item_size = sizeof(ros_message->system_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name work_status
  {
    size_t item_size = sizeof(ros_message->work_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name init_status
  {
    size_t item_size = sizeof(ros_message->init_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SystemStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_base_interfaces_demo__msg__SystemStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t max_serialized_size_base_interfaces_demo__msg__SystemStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: system_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: work_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: init_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SystemStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_base_interfaces_demo__msg__SystemStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SystemStatus = {
  "base_interfaces_demo::msg",
  "SystemStatus",
  _SystemStatus__cdr_serialize,
  _SystemStatus__cdr_deserialize,
  _SystemStatus__get_serialized_size,
  _SystemStatus__max_serialized_size
};

static rosidl_message_type_support_t _SystemStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SystemStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, msg, SystemStatus)() {
  return &_SystemStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
