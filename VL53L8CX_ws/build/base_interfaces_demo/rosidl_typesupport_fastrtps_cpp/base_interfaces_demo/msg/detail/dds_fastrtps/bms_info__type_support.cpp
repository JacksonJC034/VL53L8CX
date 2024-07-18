// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from base_interfaces_demo:msg/BmsInfo.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/bms_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "base_interfaces_demo/msg/detail/bms_info__struct.hpp"

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
  const base_interfaces_demo::msg::BmsInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cell_num
  cdr << ros_message.cell_num;
  // Member: run_time
  cdr << ros_message.run_time;
  // Member: hsoc
  cdr << ros_message.hsoc;
  // Member: voltage
  cdr << ros_message.voltage;
  // Member: cur_cadc
  cdr << ros_message.cur_cadc;
  // Member: temp
  {
    cdr << ros_message.temp;
  }
  // Member: temp1
  cdr << ros_message.temp1;
  // Member: temp2
  cdr << ros_message.temp2;
  // Member: temp3
  cdr << ros_message.temp3;
  // Member: temp4
  cdr << ros_message.temp4;
  // Member: temp5
  cdr << ros_message.temp5;
  // Member: temp6
  cdr << ros_message.temp6;
  // Member: tmax
  cdr << ros_message.tmax;
  // Member: tmin
  cdr << ros_message.tmin;
  // Member: vmax
  cdr << ros_message.vmax;
  // Member: vmin
  cdr << ros_message.vmin;
  // Member: vmaxmin_no
  cdr << ros_message.vmaxmin_no;
  // Member: rsoc
  cdr << ros_message.rsoc;
  // Member: fcc
  cdr << ros_message.fcc;
  // Member: rc
  cdr << ros_message.rc;
  // Member: cycle_count
  cdr << ros_message.cycle_count;
  // Member: protect
  cdr << ros_message.protect;
  // Member: alarm
  cdr << ros_message.alarm;
  // Member: pack_status
  cdr << ros_message.pack_status;
  // Member: vcell
  {
    cdr << ros_message.vcell;
  }
  // Member: vcell1
  cdr << ros_message.vcell1;
  // Member: state
  cdr << ros_message.state;
  // Member: soc
  cdr << ros_message.soc;
  // Member: status
  cdr << ros_message.status;
  // Member: error_code
  cdr << ros_message.error_code;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfaces_demo
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  base_interfaces_demo::msg::BmsInfo & ros_message)
{
  // Member: cell_num
  cdr >> ros_message.cell_num;

  // Member: run_time
  cdr >> ros_message.run_time;

  // Member: hsoc
  cdr >> ros_message.hsoc;

  // Member: voltage
  cdr >> ros_message.voltage;

  // Member: cur_cadc
  cdr >> ros_message.cur_cadc;

  // Member: temp
  {
    cdr >> ros_message.temp;
  }

  // Member: temp1
  cdr >> ros_message.temp1;

  // Member: temp2
  cdr >> ros_message.temp2;

  // Member: temp3
  cdr >> ros_message.temp3;

  // Member: temp4
  cdr >> ros_message.temp4;

  // Member: temp5
  cdr >> ros_message.temp5;

  // Member: temp6
  cdr >> ros_message.temp6;

  // Member: tmax
  cdr >> ros_message.tmax;

  // Member: tmin
  cdr >> ros_message.tmin;

  // Member: vmax
  cdr >> ros_message.vmax;

  // Member: vmin
  cdr >> ros_message.vmin;

  // Member: vmaxmin_no
  cdr >> ros_message.vmaxmin_no;

  // Member: rsoc
  cdr >> ros_message.rsoc;

  // Member: fcc
  cdr >> ros_message.fcc;

  // Member: rc
  cdr >> ros_message.rc;

  // Member: cycle_count
  cdr >> ros_message.cycle_count;

  // Member: protect
  cdr >> ros_message.protect;

  // Member: alarm
  cdr >> ros_message.alarm;

  // Member: pack_status
  cdr >> ros_message.pack_status;

  // Member: vcell
  {
    cdr >> ros_message.vcell;
  }

  // Member: vcell1
  cdr >> ros_message.vcell1;

  // Member: state
  cdr >> ros_message.state;

  // Member: soc
  cdr >> ros_message.soc;

  // Member: status
  cdr >> ros_message.status;

  // Member: error_code
  cdr >> ros_message.error_code;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfaces_demo
get_serialized_size(
  const base_interfaces_demo::msg::BmsInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cell_num
  {
    size_t item_size = sizeof(ros_message.cell_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: run_time
  {
    size_t item_size = sizeof(ros_message.run_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hsoc
  {
    size_t item_size = sizeof(ros_message.hsoc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: voltage
  {
    size_t item_size = sizeof(ros_message.voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cur_cadc
  {
    size_t item_size = sizeof(ros_message.cur_cadc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temp
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.temp[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temp1
  {
    size_t item_size = sizeof(ros_message.temp1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temp2
  {
    size_t item_size = sizeof(ros_message.temp2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temp3
  {
    size_t item_size = sizeof(ros_message.temp3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temp4
  {
    size_t item_size = sizeof(ros_message.temp4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temp5
  {
    size_t item_size = sizeof(ros_message.temp5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temp6
  {
    size_t item_size = sizeof(ros_message.temp6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tmax
  {
    size_t item_size = sizeof(ros_message.tmax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tmin
  {
    size_t item_size = sizeof(ros_message.tmin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vmax
  {
    size_t item_size = sizeof(ros_message.vmax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vmin
  {
    size_t item_size = sizeof(ros_message.vmin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vmaxmin_no
  {
    size_t item_size = sizeof(ros_message.vmaxmin_no);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rsoc
  {
    size_t item_size = sizeof(ros_message.rsoc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fcc
  {
    size_t item_size = sizeof(ros_message.fcc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc
  {
    size_t item_size = sizeof(ros_message.rc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cycle_count
  {
    size_t item_size = sizeof(ros_message.cycle_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: protect
  {
    size_t item_size = sizeof(ros_message.protect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alarm
  {
    size_t item_size = sizeof(ros_message.alarm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pack_status
  {
    size_t item_size = sizeof(ros_message.pack_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vcell
  {
    size_t array_size = 17;
    size_t item_size = sizeof(ros_message.vcell[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vcell1
  {
    size_t item_size = sizeof(ros_message.vcell1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: state
  {
    size_t item_size = sizeof(ros_message.state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: soc
  {
    size_t item_size = sizeof(ros_message.soc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_code
  {
    size_t item_size = sizeof(ros_message.error_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfaces_demo
max_serialized_size_BmsInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: cell_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: run_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hsoc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: voltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cur_cadc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temp
  {
    size_t array_size = 6;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: temp1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temp2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temp3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temp4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temp5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temp6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tmax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tmin
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vmax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vmin
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vmaxmin_no
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rsoc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fcc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cycle_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: protect
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: alarm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pack_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vcell
  {
    size_t array_size = 17;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vcell1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: soc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: error_code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _BmsInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const base_interfaces_demo::msg::BmsInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BmsInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<base_interfaces_demo::msg::BmsInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BmsInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const base_interfaces_demo::msg::BmsInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BmsInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_BmsInfo(full_bounded, 0);
}

static message_type_support_callbacks_t _BmsInfo__callbacks = {
  "base_interfaces_demo::msg",
  "BmsInfo",
  _BmsInfo__cdr_serialize,
  _BmsInfo__cdr_deserialize,
  _BmsInfo__get_serialized_size,
  _BmsInfo__max_serialized_size
};

static rosidl_message_type_support_t _BmsInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BmsInfo__callbacks,
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
get_message_type_support_handle<base_interfaces_demo::msg::BmsInfo>()
{
  return &base_interfaces_demo::msg::typesupport_fastrtps_cpp::_BmsInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfaces_demo, msg, BmsInfo)() {
  return &base_interfaces_demo::msg::typesupport_fastrtps_cpp::_BmsInfo__handle;
}

#ifdef __cplusplus
}
#endif
