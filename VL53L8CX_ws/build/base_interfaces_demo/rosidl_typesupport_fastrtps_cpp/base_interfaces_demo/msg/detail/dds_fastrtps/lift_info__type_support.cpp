// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from base_interfaces_demo:msg/LiftInfo.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/lift_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "base_interfaces_demo/msg/detail/lift_info__struct.hpp"

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
  const base_interfaces_demo::msg::LiftInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: lift_location
  cdr << ros_message.lift_location;
  // Member: lift_base_location
  cdr << ros_message.lift_base_location;
  // Member: error
  cdr << ros_message.error;
  // Member: status
  cdr << ros_message.status;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfaces_demo
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  base_interfaces_demo::msg::LiftInfo & ros_message)
{
  // Member: lift_location
  cdr >> ros_message.lift_location;

  // Member: lift_base_location
  cdr >> ros_message.lift_base_location;

  // Member: error
  cdr >> ros_message.error;

  // Member: status
  cdr >> ros_message.status;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfaces_demo
get_serialized_size(
  const base_interfaces_demo::msg::LiftInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: lift_location
  {
    size_t item_size = sizeof(ros_message.lift_location);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lift_base_location
  {
    size_t item_size = sizeof(ros_message.lift_base_location);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error
  {
    size_t item_size = sizeof(ros_message.error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfaces_demo
max_serialized_size_LiftInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: lift_location
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lift_base_location
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _LiftInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const base_interfaces_demo::msg::LiftInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LiftInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<base_interfaces_demo::msg::LiftInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LiftInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const base_interfaces_demo::msg::LiftInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LiftInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LiftInfo(full_bounded, 0);
}

static message_type_support_callbacks_t _LiftInfo__callbacks = {
  "base_interfaces_demo::msg",
  "LiftInfo",
  _LiftInfo__cdr_serialize,
  _LiftInfo__cdr_deserialize,
  _LiftInfo__get_serialized_size,
  _LiftInfo__max_serialized_size
};

static rosidl_message_type_support_t _LiftInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LiftInfo__callbacks,
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
get_message_type_support_handle<base_interfaces_demo::msg::LiftInfo>()
{
  return &base_interfaces_demo::msg::typesupport_fastrtps_cpp::_LiftInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfaces_demo, msg, LiftInfo)() {
  return &base_interfaces_demo::msg::typesupport_fastrtps_cpp::_LiftInfo__handle;
}

#ifdef __cplusplus
}
#endif
