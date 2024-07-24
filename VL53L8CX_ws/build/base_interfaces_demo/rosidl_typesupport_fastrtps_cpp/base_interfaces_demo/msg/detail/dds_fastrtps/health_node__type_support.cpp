// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from base_interfaces_demo:msg/HealthNode.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/health_node__rosidl_typesupport_fastrtps_cpp.hpp"
#include "base_interfaces_demo/msg/detail/health_node__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace base_interfaces_demo
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfaces_demo
cdr_serialize(
  const base_interfaces_demo::msg::HealthNode & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cpu_usage
  cdr << ros_message.cpu_usage;
  // Member: disk_usage
  cdr << ros_message.disk_usage;
  // Member: memory_usage
  cdr << ros_message.memory_usage;
  // Member: nic_status
  cdr << ros_message.nic_status;
  // Member: temperature
  cdr << ros_message.temperature;
  // Member: cpu_frequency
  cdr << ros_message.cpu_frequency;
  // Member: error_array
  {
    cdr << ros_message.error_array;
  }
  // Member: error_level
  cdr << ros_message.error_level;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfaces_demo
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  base_interfaces_demo::msg::HealthNode & ros_message)
{
  // Member: cpu_usage
  cdr >> ros_message.cpu_usage;

  // Member: disk_usage
  cdr >> ros_message.disk_usage;

  // Member: memory_usage
  cdr >> ros_message.memory_usage;

  // Member: nic_status
  cdr >> ros_message.nic_status;

  // Member: temperature
  cdr >> ros_message.temperature;

  // Member: cpu_frequency
  cdr >> ros_message.cpu_frequency;

  // Member: error_array
  {
    cdr >> ros_message.error_array;
  }

  // Member: error_level
  cdr >> ros_message.error_level;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfaces_demo
get_serialized_size(
  const base_interfaces_demo::msg::HealthNode & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cpu_usage
  {
    size_t item_size = sizeof(ros_message.cpu_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: disk_usage
  {
    size_t item_size = sizeof(ros_message.disk_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: memory_usage
  {
    size_t item_size = sizeof(ros_message.memory_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nic_status
  {
    size_t item_size = sizeof(ros_message.nic_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature
  {
    size_t item_size = sizeof(ros_message.temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cpu_frequency
  {
    size_t item_size = sizeof(ros_message.cpu_frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_array
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.error_array[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_level
  {
    size_t item_size = sizeof(ros_message.error_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfaces_demo
max_serialized_size_HealthNode(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: cpu_usage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: disk_usage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: memory_usage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: nic_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cpu_frequency
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: error_array
  {
    size_t array_size = 12;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: error_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _HealthNode__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const base_interfaces_demo::msg::HealthNode *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HealthNode__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<base_interfaces_demo::msg::HealthNode *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HealthNode__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const base_interfaces_demo::msg::HealthNode *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HealthNode__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_HealthNode(full_bounded, 0);
}

static message_type_support_callbacks_t _HealthNode__callbacks = {
  "base_interfaces_demo::msg",
  "HealthNode",
  _HealthNode__cdr_serialize,
  _HealthNode__cdr_deserialize,
  _HealthNode__get_serialized_size,
  _HealthNode__max_serialized_size
};

static rosidl_message_type_support_t _HealthNode__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HealthNode__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace base_interfaces_demo

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfaces_demo::msg::HealthNode>()
{
  return &base_interfaces_demo::msg::typesupport_fastrtps_cpp::_HealthNode__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfaces_demo, msg, HealthNode)() {
  return &base_interfaces_demo::msg::typesupport_fastrtps_cpp::_HealthNode__handle;
}

#ifdef __cplusplus
}
#endif
