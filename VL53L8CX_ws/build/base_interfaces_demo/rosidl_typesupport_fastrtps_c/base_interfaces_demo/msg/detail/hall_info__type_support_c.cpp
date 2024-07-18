// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from base_interfaces_demo:msg/HallInfo.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/hall_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "base_interfaces_demo/msg/detail/hall_info__struct.h"
#include "base_interfaces_demo/msg/detail/hall_info__functions.h"
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


using _HallInfo__ros_msg_type = base_interfaces_demo__msg__HallInfo;

static bool _HallInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HallInfo__ros_msg_type * ros_message = static_cast<const _HallInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: uid7
  {
    cdr << ros_message->uid7;
  }

  // Field name: uid6
  {
    cdr << ros_message->uid6;
  }

  // Field name: uid5
  {
    cdr << ros_message->uid5;
  }

  // Field name: uid4
  {
    cdr << ros_message->uid4;
  }

  // Field name: uid3
  {
    cdr << ros_message->uid3;
  }

  // Field name: uid2
  {
    cdr << ros_message->uid2;
  }

  // Field name: uid1
  {
    cdr << ros_message->uid1;
  }

  // Field name: uid0
  {
    cdr << ros_message->uid0;
  }

  // Field name: f1
  {
    cdr << ros_message->f1;
  }

  // Field name: f2
  {
    cdr << ros_message->f2;
  }

  // Field name: f3
  {
    cdr << ros_message->f3;
  }

  // Field name: f4
  {
    cdr << ros_message->f4;
  }

  // Field name: b1
  {
    cdr << ros_message->b1;
  }

  // Field name: b2
  {
    cdr << ros_message->b2;
  }

  // Field name: b3
  {
    cdr << ros_message->b3;
  }

  // Field name: b4
  {
    cdr << ros_message->b4;
  }

  // Field name: l1
  {
    cdr << ros_message->l1;
  }

  // Field name: l2
  {
    cdr << ros_message->l2;
  }

  // Field name: l3
  {
    cdr << ros_message->l3;
  }

  // Field name: l4
  {
    cdr << ros_message->l4;
  }

  // Field name: r1
  {
    cdr << ros_message->r1;
  }

  // Field name: r2
  {
    cdr << ros_message->r2;
  }

  // Field name: r3
  {
    cdr << ros_message->r3;
  }

  // Field name: r4
  {
    cdr << ros_message->r4;
  }

  // Field name: state
  {
    cdr << ros_message->state;
  }

  return true;
}

static bool _HallInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HallInfo__ros_msg_type * ros_message = static_cast<_HallInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: uid7
  {
    cdr >> ros_message->uid7;
  }

  // Field name: uid6
  {
    cdr >> ros_message->uid6;
  }

  // Field name: uid5
  {
    cdr >> ros_message->uid5;
  }

  // Field name: uid4
  {
    cdr >> ros_message->uid4;
  }

  // Field name: uid3
  {
    cdr >> ros_message->uid3;
  }

  // Field name: uid2
  {
    cdr >> ros_message->uid2;
  }

  // Field name: uid1
  {
    cdr >> ros_message->uid1;
  }

  // Field name: uid0
  {
    cdr >> ros_message->uid0;
  }

  // Field name: f1
  {
    cdr >> ros_message->f1;
  }

  // Field name: f2
  {
    cdr >> ros_message->f2;
  }

  // Field name: f3
  {
    cdr >> ros_message->f3;
  }

  // Field name: f4
  {
    cdr >> ros_message->f4;
  }

  // Field name: b1
  {
    cdr >> ros_message->b1;
  }

  // Field name: b2
  {
    cdr >> ros_message->b2;
  }

  // Field name: b3
  {
    cdr >> ros_message->b3;
  }

  // Field name: b4
  {
    cdr >> ros_message->b4;
  }

  // Field name: l1
  {
    cdr >> ros_message->l1;
  }

  // Field name: l2
  {
    cdr >> ros_message->l2;
  }

  // Field name: l3
  {
    cdr >> ros_message->l3;
  }

  // Field name: l4
  {
    cdr >> ros_message->l4;
  }

  // Field name: r1
  {
    cdr >> ros_message->r1;
  }

  // Field name: r2
  {
    cdr >> ros_message->r2;
  }

  // Field name: r3
  {
    cdr >> ros_message->r3;
  }

  // Field name: r4
  {
    cdr >> ros_message->r4;
  }

  // Field name: state
  {
    cdr >> ros_message->state;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t get_serialized_size_base_interfaces_demo__msg__HallInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HallInfo__ros_msg_type * ros_message = static_cast<const _HallInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name uid7
  {
    size_t item_size = sizeof(ros_message->uid7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uid6
  {
    size_t item_size = sizeof(ros_message->uid6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uid5
  {
    size_t item_size = sizeof(ros_message->uid5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uid4
  {
    size_t item_size = sizeof(ros_message->uid4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uid3
  {
    size_t item_size = sizeof(ros_message->uid3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uid2
  {
    size_t item_size = sizeof(ros_message->uid2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uid1
  {
    size_t item_size = sizeof(ros_message->uid1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uid0
  {
    size_t item_size = sizeof(ros_message->uid0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f1
  {
    size_t item_size = sizeof(ros_message->f1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f2
  {
    size_t item_size = sizeof(ros_message->f2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f3
  {
    size_t item_size = sizeof(ros_message->f3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f4
  {
    size_t item_size = sizeof(ros_message->f4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b1
  {
    size_t item_size = sizeof(ros_message->b1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b2
  {
    size_t item_size = sizeof(ros_message->b2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b3
  {
    size_t item_size = sizeof(ros_message->b3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b4
  {
    size_t item_size = sizeof(ros_message->b4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name l1
  {
    size_t item_size = sizeof(ros_message->l1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name l2
  {
    size_t item_size = sizeof(ros_message->l2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name l3
  {
    size_t item_size = sizeof(ros_message->l3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name l4
  {
    size_t item_size = sizeof(ros_message->l4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name r1
  {
    size_t item_size = sizeof(ros_message->r1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name r2
  {
    size_t item_size = sizeof(ros_message->r2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name r3
  {
    size_t item_size = sizeof(ros_message->r3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name r4
  {
    size_t item_size = sizeof(ros_message->r4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state
  {
    size_t item_size = sizeof(ros_message->state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HallInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_base_interfaces_demo__msg__HallInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t max_serialized_size_base_interfaces_demo__msg__HallInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: uid7
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uid6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uid5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uid4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uid3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uid2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uid1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uid0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: f1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: f2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: f3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: f4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: b1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: b2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: b3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: b4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: l1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: l2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: l3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: l4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: r1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: r2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: r3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: r4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _HallInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_base_interfaces_demo__msg__HallInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_HallInfo = {
  "base_interfaces_demo::msg",
  "HallInfo",
  _HallInfo__cdr_serialize,
  _HallInfo__cdr_deserialize,
  _HallInfo__get_serialized_size,
  _HallInfo__max_serialized_size
};

static rosidl_message_type_support_t _HallInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HallInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, msg, HallInfo)() {
  return &_HallInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
