// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from base_interfaces_demo:msg/FileUpdata.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/file_updata__rosidl_typesupport_fastrtps_cpp.hpp"
#include "base_interfaces_demo/msg/detail/file_updata__struct.hpp"

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
  const base_interfaces_demo::msg::FileUpdata & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: file_type
  cdr << ros_message.file_type;
  // Member: mode
  cdr << ros_message.mode;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfaces_demo
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  base_interfaces_demo::msg::FileUpdata & ros_message)
{
  // Member: file_type
  cdr >> ros_message.file_type;

  // Member: mode
  cdr >> ros_message.mode;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfaces_demo
get_serialized_size(
  const base_interfaces_demo::msg::FileUpdata & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: file_type
  {
    size_t item_size = sizeof(ros_message.file_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode
  {
    size_t item_size = sizeof(ros_message.mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfaces_demo
max_serialized_size_FileUpdata(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: file_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _FileUpdata__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const base_interfaces_demo::msg::FileUpdata *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FileUpdata__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<base_interfaces_demo::msg::FileUpdata *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FileUpdata__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const base_interfaces_demo::msg::FileUpdata *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FileUpdata__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_FileUpdata(full_bounded, 0);
}

static message_type_support_callbacks_t _FileUpdata__callbacks = {
  "base_interfaces_demo::msg",
  "FileUpdata",
  _FileUpdata__cdr_serialize,
  _FileUpdata__cdr_deserialize,
  _FileUpdata__get_serialized_size,
  _FileUpdata__max_serialized_size
};

static rosidl_message_type_support_t _FileUpdata__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FileUpdata__callbacks,
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
get_message_type_support_handle<base_interfaces_demo::msg::FileUpdata>()
{
  return &base_interfaces_demo::msg::typesupport_fastrtps_cpp::_FileUpdata__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfaces_demo, msg, FileUpdata)() {
  return &base_interfaces_demo::msg::typesupport_fastrtps_cpp::_FileUpdata__handle;
}

#ifdef __cplusplus
}
#endif
