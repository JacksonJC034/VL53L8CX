// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from base_interfaces_demo:msg/Location.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/location__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "base_interfaces_demo/msg/detail/location__struct.h"
#include "base_interfaces_demo/msg/detail/location__functions.h"
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


using _Location__ros_msg_type = base_interfaces_demo__msg__Location;

static bool _Location__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Location__ros_msg_type * ros_message = static_cast<const _Location__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: error
  {
    cdr << ros_message->error;
  }

  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: distance
  {
    cdr << ros_message->distance;
  }

  // Field name: hall_location
  {
    cdr << ros_message->hall_location;
  }

  // Field name: lift_son_loc_cali
  {
    cdr << ros_message->lift_son_loc_cali;
  }

  // Field name: lift_current_loc
  {
    cdr << ros_message->lift_current_loc;
  }

  // Field name: lift_horseshoe_en
  {
    cdr << ros_message->lift_horseshoe_en;
  }

  // Field name: state_motor_or_son
  {
    cdr << ros_message->state_motor_or_son;
  }

  // Field name: state_lift_down_or_up
  {
    cdr << ros_message->state_lift_down_or_up;
  }

  // Field name: hall_rfid_en
  {
    cdr << ros_message->hall_rfid_en;
  }

  // Field name: distancex
  {
    cdr << ros_message->distancex;
  }

  // Field name: distancey
  {
    cdr << ros_message->distancey;
  }

  return true;
}

static bool _Location__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Location__ros_msg_type * ros_message = static_cast<_Location__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  // Field name: error
  {
    cdr >> ros_message->error;
  }

  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: distance
  {
    cdr >> ros_message->distance;
  }

  // Field name: hall_location
  {
    cdr >> ros_message->hall_location;
  }

  // Field name: lift_son_loc_cali
  {
    cdr >> ros_message->lift_son_loc_cali;
  }

  // Field name: lift_current_loc
  {
    cdr >> ros_message->lift_current_loc;
  }

  // Field name: lift_horseshoe_en
  {
    cdr >> ros_message->lift_horseshoe_en;
  }

  // Field name: state_motor_or_son
  {
    cdr >> ros_message->state_motor_or_son;
  }

  // Field name: state_lift_down_or_up
  {
    cdr >> ros_message->state_lift_down_or_up;
  }

  // Field name: hall_rfid_en
  {
    cdr >> ros_message->hall_rfid_en;
  }

  // Field name: distancex
  {
    cdr >> ros_message->distancex;
  }

  // Field name: distancey
  {
    cdr >> ros_message->distancey;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t get_serialized_size_base_interfaces_demo__msg__Location(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Location__ros_msg_type * ros_message = static_cast<const _Location__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
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
  // field.name distance
  {
    size_t item_size = sizeof(ros_message->distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hall_location
  {
    size_t item_size = sizeof(ros_message->hall_location);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lift_son_loc_cali
  {
    size_t item_size = sizeof(ros_message->lift_son_loc_cali);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lift_current_loc
  {
    size_t item_size = sizeof(ros_message->lift_current_loc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lift_horseshoe_en
  {
    size_t item_size = sizeof(ros_message->lift_horseshoe_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state_motor_or_son
  {
    size_t item_size = sizeof(ros_message->state_motor_or_son);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state_lift_down_or_up
  {
    size_t item_size = sizeof(ros_message->state_lift_down_or_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hall_rfid_en
  {
    size_t item_size = sizeof(ros_message->hall_rfid_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distancex
  {
    size_t item_size = sizeof(ros_message->distancex);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distancey
  {
    size_t item_size = sizeof(ros_message->distancey);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Location__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_base_interfaces_demo__msg__Location(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t max_serialized_size_base_interfaces_demo__msg__Location(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: error
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
  // member: distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: hall_location
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lift_son_loc_cali
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lift_current_loc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lift_horseshoe_en
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: state_motor_or_son
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: state_lift_down_or_up
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hall_rfid_en
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: distancex
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: distancey
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Location__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_base_interfaces_demo__msg__Location(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Location = {
  "base_interfaces_demo::msg",
  "Location",
  _Location__cdr_serialize,
  _Location__cdr_deserialize,
  _Location__get_serialized_size,
  _Location__max_serialized_size
};

static rosidl_message_type_support_t _Location__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Location,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, msg, Location)() {
  return &_Location__type_support;
}

#if defined(__cplusplus)
}
#endif
