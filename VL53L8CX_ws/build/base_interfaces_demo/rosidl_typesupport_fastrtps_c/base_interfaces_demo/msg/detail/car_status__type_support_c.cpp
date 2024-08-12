// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from base_interfaces_demo:msg/CarStatus.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/car_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "base_interfaces_demo/msg/detail/car_status__struct.h"
#include "base_interfaces_demo/msg/detail/car_status__functions.h"
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


using _CarStatus__ros_msg_type = base_interfaces_demo__msg__CarStatus;

static bool _CarStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CarStatus__ros_msg_type * ros_message = static_cast<const _CarStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: task_state
  {
    cdr << ros_message->task_state;
  }

  // Field name: initializing
  {
    cdr << ros_message->initializing;
  }

  // Field name: checking
  {
    cdr << ros_message->checking;
  }

  // Field name: releasing
  {
    cdr << ros_message->releasing;
  }

  // Field name: driving
  {
    cdr << ros_message->driving;
  }

  // Field name: fine_positioning
  {
    cdr << ros_message->fine_positioning;
  }

  // Field name: on_tag
  {
    cdr << ros_message->on_tag;
  }

  // Field name: on_track
  {
    cdr << ros_message->on_track;
  }

  // Field name: error
  {
    cdr << ros_message->error;
  }

  // Field name: warning
  {
    cdr << ros_message->warning;
  }

  // Field name: estop
  {
    cdr << ros_message->estop;
  }

  // Field name: sleeping
  {
    cdr << ros_message->sleeping;
  }

  // Field name: load
  {
    cdr << ros_message->load;
  }

  // Field name: charging
  {
    cdr << ros_message->charging;
  }

  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: stand_alone_state
  {
    cdr << ros_message->stand_alone_state;
  }

  return true;
}

static bool _CarStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CarStatus__ros_msg_type * ros_message = static_cast<_CarStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: task_state
  {
    cdr >> ros_message->task_state;
  }

  // Field name: initializing
  {
    cdr >> ros_message->initializing;
  }

  // Field name: checking
  {
    cdr >> ros_message->checking;
  }

  // Field name: releasing
  {
    cdr >> ros_message->releasing;
  }

  // Field name: driving
  {
    cdr >> ros_message->driving;
  }

  // Field name: fine_positioning
  {
    cdr >> ros_message->fine_positioning;
  }

  // Field name: on_tag
  {
    cdr >> ros_message->on_tag;
  }

  // Field name: on_track
  {
    cdr >> ros_message->on_track;
  }

  // Field name: error
  {
    cdr >> ros_message->error;
  }

  // Field name: warning
  {
    cdr >> ros_message->warning;
  }

  // Field name: estop
  {
    cdr >> ros_message->estop;
  }

  // Field name: sleeping
  {
    cdr >> ros_message->sleeping;
  }

  // Field name: load
  {
    cdr >> ros_message->load;
  }

  // Field name: charging
  {
    cdr >> ros_message->charging;
  }

  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: stand_alone_state
  {
    cdr >> ros_message->stand_alone_state;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t get_serialized_size_base_interfaces_demo__msg__CarStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CarStatus__ros_msg_type * ros_message = static_cast<const _CarStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name task_state
  {
    size_t item_size = sizeof(ros_message->task_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name initializing
  {
    size_t item_size = sizeof(ros_message->initializing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name checking
  {
    size_t item_size = sizeof(ros_message->checking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name releasing
  {
    size_t item_size = sizeof(ros_message->releasing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driving
  {
    size_t item_size = sizeof(ros_message->driving);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fine_positioning
  {
    size_t item_size = sizeof(ros_message->fine_positioning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name on_tag
  {
    size_t item_size = sizeof(ros_message->on_tag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name on_track
  {
    size_t item_size = sizeof(ros_message->on_track);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error
  {
    size_t item_size = sizeof(ros_message->error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name warning
  {
    size_t item_size = sizeof(ros_message->warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name estop
  {
    size_t item_size = sizeof(ros_message->estop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sleeping
  {
    size_t item_size = sizeof(ros_message->sleeping);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name load
  {
    size_t item_size = sizeof(ros_message->load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name charging
  {
    size_t item_size = sizeof(ros_message->charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stand_alone_state
  {
    size_t item_size = sizeof(ros_message->stand_alone_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CarStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_base_interfaces_demo__msg__CarStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t max_serialized_size_base_interfaces_demo__msg__CarStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: task_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: initializing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: checking
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: releasing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: driving
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fine_positioning
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: on_tag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: on_track
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: warning
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: estop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sleeping
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: load
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: charging
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stand_alone_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CarStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_base_interfaces_demo__msg__CarStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CarStatus = {
  "base_interfaces_demo::msg",
  "CarStatus",
  _CarStatus__cdr_serialize,
  _CarStatus__cdr_deserialize,
  _CarStatus__get_serialized_size,
  _CarStatus__max_serialized_size
};

static rosidl_message_type_support_t _CarStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CarStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, msg, CarStatus)() {
  return &_CarStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
