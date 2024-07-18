// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from base_interfaces_demo:msg/HealthNode.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/health_node__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "base_interfaces_demo/msg/detail/health_node__struct.h"
#include "base_interfaces_demo/msg/detail/health_node__functions.h"
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

#include "rosidl_runtime_c/string.h"  // nic_status
#include "rosidl_runtime_c/string_functions.h"  // nic_status

// forward declare type support functions


using _HealthNode__ros_msg_type = base_interfaces_demo__msg__HealthNode;

static bool _HealthNode__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HealthNode__ros_msg_type * ros_message = static_cast<const _HealthNode__ros_msg_type *>(untyped_ros_message);
  // Field name: cpu_usage
  {
    cdr << ros_message->cpu_usage;
  }

  // Field name: memory_usage
  {
    cdr << ros_message->memory_usage;
  }

  // Field name: disk_usage
  {
    cdr << ros_message->disk_usage;
  }

  // Field name: cpu_frequency
  {
    cdr << ros_message->cpu_frequency;
  }

  // Field name: nic_status
  {
    const rosidl_runtime_c__String * str = &ros_message->nic_status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  // Field name: error_array
  {
    size_t size = 12;
    auto array_ptr = ros_message->error_array;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: error_level
  {
    cdr << ros_message->error_level;
  }

  return true;
}

static bool _HealthNode__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HealthNode__ros_msg_type * ros_message = static_cast<_HealthNode__ros_msg_type *>(untyped_ros_message);
  // Field name: cpu_usage
  {
    cdr >> ros_message->cpu_usage;
  }

  // Field name: memory_usage
  {
    cdr >> ros_message->memory_usage;
  }

  // Field name: disk_usage
  {
    cdr >> ros_message->disk_usage;
  }

  // Field name: cpu_frequency
  {
    cdr >> ros_message->cpu_frequency;
  }

  // Field name: nic_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->nic_status.data) {
      rosidl_runtime_c__String__init(&ros_message->nic_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->nic_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'nic_status'\n");
      return false;
    }
  }

  // Field name: temperature
  {
    cdr >> ros_message->temperature;
  }

  // Field name: error_array
  {
    size_t size = 12;
    auto array_ptr = ros_message->error_array;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: error_level
  {
    cdr >> ros_message->error_level;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t get_serialized_size_base_interfaces_demo__msg__HealthNode(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HealthNode__ros_msg_type * ros_message = static_cast<const _HealthNode__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cpu_usage
  {
    size_t item_size = sizeof(ros_message->cpu_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name memory_usage
  {
    size_t item_size = sizeof(ros_message->memory_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name disk_usage
  {
    size_t item_size = sizeof(ros_message->disk_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cpu_frequency
  {
    size_t item_size = sizeof(ros_message->cpu_frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nic_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->nic_status.size + 1);
  // field.name temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_array
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->error_array;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_level
  {
    size_t item_size = sizeof(ros_message->error_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HealthNode__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_base_interfaces_demo__msg__HealthNode(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t max_serialized_size_base_interfaces_demo__msg__HealthNode(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: cpu_usage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: memory_usage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: disk_usage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cpu_frequency
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: nic_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: error_array
  {
    size_t array_size = 12;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: error_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _HealthNode__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_base_interfaces_demo__msg__HealthNode(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_HealthNode = {
  "base_interfaces_demo::msg",
  "HealthNode",
  _HealthNode__cdr_serialize,
  _HealthNode__cdr_deserialize,
  _HealthNode__get_serialized_size,
  _HealthNode__max_serialized_size
};

static rosidl_message_type_support_t _HealthNode__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HealthNode,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, msg, HealthNode)() {
  return &_HealthNode__type_support;
}

#if defined(__cplusplus)
}
#endif
