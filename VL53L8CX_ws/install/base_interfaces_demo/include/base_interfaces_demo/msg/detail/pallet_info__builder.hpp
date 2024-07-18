// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/PalletInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__PALLET_INFO__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__PALLET_INFO__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/pallet_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_PalletInfo_sensor2
{
public:
  explicit Init_PalletInfo_sensor2(::base_interfaces_demo::msg::PalletInfo & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::PalletInfo sensor2(::base_interfaces_demo::msg::PalletInfo::_sensor2_type arg)
  {
    msg_.sensor2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::PalletInfo msg_;
};

class Init_PalletInfo_sensor1
{
public:
  explicit Init_PalletInfo_sensor1(::base_interfaces_demo::msg::PalletInfo & msg)
  : msg_(msg)
  {}
  Init_PalletInfo_sensor2 sensor1(::base_interfaces_demo::msg::PalletInfo::_sensor1_type arg)
  {
    msg_.sensor1 = std::move(arg);
    return Init_PalletInfo_sensor2(msg_);
  }

private:
  ::base_interfaces_demo::msg::PalletInfo msg_;
};

class Init_PalletInfo_status
{
public:
  explicit Init_PalletInfo_status(::base_interfaces_demo::msg::PalletInfo & msg)
  : msg_(msg)
  {}
  Init_PalletInfo_sensor1 status(::base_interfaces_demo::msg::PalletInfo::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PalletInfo_sensor1(msg_);
  }

private:
  ::base_interfaces_demo::msg::PalletInfo msg_;
};

class Init_PalletInfo_error_code
{
public:
  explicit Init_PalletInfo_error_code(::base_interfaces_demo::msg::PalletInfo & msg)
  : msg_(msg)
  {}
  Init_PalletInfo_status error_code(::base_interfaces_demo::msg::PalletInfo::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_PalletInfo_status(msg_);
  }

private:
  ::base_interfaces_demo::msg::PalletInfo msg_;
};

class Init_PalletInfo_angle
{
public:
  explicit Init_PalletInfo_angle(::base_interfaces_demo::msg::PalletInfo & msg)
  : msg_(msg)
  {}
  Init_PalletInfo_error_code angle(::base_interfaces_demo::msg::PalletInfo::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_PalletInfo_error_code(msg_);
  }

private:
  ::base_interfaces_demo::msg::PalletInfo msg_;
};

class Init_PalletInfo_drift
{
public:
  explicit Init_PalletInfo_drift(::base_interfaces_demo::msg::PalletInfo & msg)
  : msg_(msg)
  {}
  Init_PalletInfo_angle drift(::base_interfaces_demo::msg::PalletInfo::_drift_type arg)
  {
    msg_.drift = std::move(arg);
    return Init_PalletInfo_angle(msg_);
  }

private:
  ::base_interfaces_demo::msg::PalletInfo msg_;
};

class Init_PalletInfo_pallet
{
public:
  explicit Init_PalletInfo_pallet(::base_interfaces_demo::msg::PalletInfo & msg)
  : msg_(msg)
  {}
  Init_PalletInfo_drift pallet(::base_interfaces_demo::msg::PalletInfo::_pallet_type arg)
  {
    msg_.pallet = std::move(arg);
    return Init_PalletInfo_drift(msg_);
  }

private:
  ::base_interfaces_demo::msg::PalletInfo msg_;
};

class Init_PalletInfo_distance
{
public:
  Init_PalletInfo_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PalletInfo_pallet distance(::base_interfaces_demo::msg::PalletInfo::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_PalletInfo_pallet(msg_);
  }

private:
  ::base_interfaces_demo::msg::PalletInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::PalletInfo>()
{
  return base_interfaces_demo::msg::builder::Init_PalletInfo_distance();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__PALLET_INFO__BUILDER_HPP_
