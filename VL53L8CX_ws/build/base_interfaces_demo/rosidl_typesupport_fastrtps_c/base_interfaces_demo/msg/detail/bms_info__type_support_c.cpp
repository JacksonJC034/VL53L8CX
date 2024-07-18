// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from base_interfaces_demo:msg/BmsInfo.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/bms_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "base_interfaces_demo/msg/detail/bms_info__struct.h"
#include "base_interfaces_demo/msg/detail/bms_info__functions.h"
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


using _BmsInfo__ros_msg_type = base_interfaces_demo__msg__BmsInfo;

static bool _BmsInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BmsInfo__ros_msg_type * ros_message = static_cast<const _BmsInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: cell_num
  {
    cdr << ros_message->cell_num;
  }

  // Field name: run_time
  {
    cdr << ros_message->run_time;
  }

  // Field name: hsoc
  {
    cdr << ros_message->hsoc;
  }

  // Field name: voltage
  {
    cdr << ros_message->voltage;
  }

  // Field name: cur_cadc
  {
    cdr << ros_message->cur_cadc;
  }

  // Field name: temp
  {
    size_t size = 6;
    auto array_ptr = ros_message->temp;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: temp1
  {
    cdr << ros_message->temp1;
  }

  // Field name: temp2
  {
    cdr << ros_message->temp2;
  }

  // Field name: temp3
  {
    cdr << ros_message->temp3;
  }

  // Field name: temp4
  {
    cdr << ros_message->temp4;
  }

  // Field name: temp5
  {
    cdr << ros_message->temp5;
  }

  // Field name: temp6
  {
    cdr << ros_message->temp6;
  }

  // Field name: tmax
  {
    cdr << ros_message->tmax;
  }

  // Field name: tmin
  {
    cdr << ros_message->tmin;
  }

  // Field name: vmax
  {
    cdr << ros_message->vmax;
  }

  // Field name: vmin
  {
    cdr << ros_message->vmin;
  }

  // Field name: vmaxmin_no
  {
    cdr << ros_message->vmaxmin_no;
  }

  // Field name: rsoc
  {
    cdr << ros_message->rsoc;
  }

  // Field name: fcc
  {
    cdr << ros_message->fcc;
  }

  // Field name: rc
  {
    cdr << ros_message->rc;
  }

  // Field name: cycle_count
  {
    cdr << ros_message->cycle_count;
  }

  // Field name: protect
  {
    cdr << ros_message->protect;
  }

  // Field name: alarm
  {
    cdr << ros_message->alarm;
  }

  // Field name: pack_status
  {
    cdr << ros_message->pack_status;
  }

  // Field name: vcell
  {
    size_t size = 17;
    auto array_ptr = ros_message->vcell;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: vcell1
  {
    cdr << ros_message->vcell1;
  }

  // Field name: state
  {
    cdr << ros_message->state;
  }

  // Field name: soc
  {
    cdr << ros_message->soc;
  }

  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: error_code
  {
    cdr << ros_message->error_code;
  }

  return true;
}

static bool _BmsInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BmsInfo__ros_msg_type * ros_message = static_cast<_BmsInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: cell_num
  {
    cdr >> ros_message->cell_num;
  }

  // Field name: run_time
  {
    cdr >> ros_message->run_time;
  }

  // Field name: hsoc
  {
    cdr >> ros_message->hsoc;
  }

  // Field name: voltage
  {
    cdr >> ros_message->voltage;
  }

  // Field name: cur_cadc
  {
    cdr >> ros_message->cur_cadc;
  }

  // Field name: temp
  {
    size_t size = 6;
    auto array_ptr = ros_message->temp;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: temp1
  {
    cdr >> ros_message->temp1;
  }

  // Field name: temp2
  {
    cdr >> ros_message->temp2;
  }

  // Field name: temp3
  {
    cdr >> ros_message->temp3;
  }

  // Field name: temp4
  {
    cdr >> ros_message->temp4;
  }

  // Field name: temp5
  {
    cdr >> ros_message->temp5;
  }

  // Field name: temp6
  {
    cdr >> ros_message->temp6;
  }

  // Field name: tmax
  {
    cdr >> ros_message->tmax;
  }

  // Field name: tmin
  {
    cdr >> ros_message->tmin;
  }

  // Field name: vmax
  {
    cdr >> ros_message->vmax;
  }

  // Field name: vmin
  {
    cdr >> ros_message->vmin;
  }

  // Field name: vmaxmin_no
  {
    cdr >> ros_message->vmaxmin_no;
  }

  // Field name: rsoc
  {
    cdr >> ros_message->rsoc;
  }

  // Field name: fcc
  {
    cdr >> ros_message->fcc;
  }

  // Field name: rc
  {
    cdr >> ros_message->rc;
  }

  // Field name: cycle_count
  {
    cdr >> ros_message->cycle_count;
  }

  // Field name: protect
  {
    cdr >> ros_message->protect;
  }

  // Field name: alarm
  {
    cdr >> ros_message->alarm;
  }

  // Field name: pack_status
  {
    cdr >> ros_message->pack_status;
  }

  // Field name: vcell
  {
    size_t size = 17;
    auto array_ptr = ros_message->vcell;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: vcell1
  {
    cdr >> ros_message->vcell1;
  }

  // Field name: state
  {
    cdr >> ros_message->state;
  }

  // Field name: soc
  {
    cdr >> ros_message->soc;
  }

  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: error_code
  {
    cdr >> ros_message->error_code;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t get_serialized_size_base_interfaces_demo__msg__BmsInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BmsInfo__ros_msg_type * ros_message = static_cast<const _BmsInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cell_num
  {
    size_t item_size = sizeof(ros_message->cell_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name run_time
  {
    size_t item_size = sizeof(ros_message->run_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hsoc
  {
    size_t item_size = sizeof(ros_message->hsoc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voltage
  {
    size_t item_size = sizeof(ros_message->voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cur_cadc
  {
    size_t item_size = sizeof(ros_message->cur_cadc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temp
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->temp;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temp1
  {
    size_t item_size = sizeof(ros_message->temp1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temp2
  {
    size_t item_size = sizeof(ros_message->temp2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temp3
  {
    size_t item_size = sizeof(ros_message->temp3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temp4
  {
    size_t item_size = sizeof(ros_message->temp4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temp5
  {
    size_t item_size = sizeof(ros_message->temp5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temp6
  {
    size_t item_size = sizeof(ros_message->temp6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tmax
  {
    size_t item_size = sizeof(ros_message->tmax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tmin
  {
    size_t item_size = sizeof(ros_message->tmin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vmax
  {
    size_t item_size = sizeof(ros_message->vmax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vmin
  {
    size_t item_size = sizeof(ros_message->vmin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vmaxmin_no
  {
    size_t item_size = sizeof(ros_message->vmaxmin_no);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rsoc
  {
    size_t item_size = sizeof(ros_message->rsoc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fcc
  {
    size_t item_size = sizeof(ros_message->fcc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc
  {
    size_t item_size = sizeof(ros_message->rc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cycle_count
  {
    size_t item_size = sizeof(ros_message->cycle_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name protect
  {
    size_t item_size = sizeof(ros_message->protect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alarm
  {
    size_t item_size = sizeof(ros_message->alarm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pack_status
  {
    size_t item_size = sizeof(ros_message->pack_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vcell
  {
    size_t array_size = 17;
    auto array_ptr = ros_message->vcell;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vcell1
  {
    size_t item_size = sizeof(ros_message->vcell1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state
  {
    size_t item_size = sizeof(ros_message->state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name soc
  {
    size_t item_size = sizeof(ros_message->soc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_code
  {
    size_t item_size = sizeof(ros_message->error_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BmsInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_base_interfaces_demo__msg__BmsInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t max_serialized_size_base_interfaces_demo__msg__BmsInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: cell_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: run_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hsoc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: voltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cur_cadc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temp
  {
    size_t array_size = 6;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: temp1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temp2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temp3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temp4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temp5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temp6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tmax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tmin
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vmax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vmin
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vmaxmin_no
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rsoc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fcc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cycle_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: protect
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: alarm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pack_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vcell
  {
    size_t array_size = 17;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vcell1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: soc
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
  // member: error_code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _BmsInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_base_interfaces_demo__msg__BmsInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BmsInfo = {
  "base_interfaces_demo::msg",
  "BmsInfo",
  _BmsInfo__cdr_serialize,
  _BmsInfo__cdr_deserialize,
  _BmsInfo__get_serialized_size,
  _BmsInfo__max_serialized_size
};

static rosidl_message_type_support_t _BmsInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BmsInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, msg, BmsInfo)() {
  return &_BmsInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
