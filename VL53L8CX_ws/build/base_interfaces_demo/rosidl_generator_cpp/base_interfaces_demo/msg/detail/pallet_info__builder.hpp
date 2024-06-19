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

class Init_PalletInfo_error
{
public:
  explicit Init_PalletInfo_error(::base_interfaces_demo::msg::PalletInfo & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::PalletInfo error(::base_interfaces_demo::msg::PalletInfo::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
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
  Init_PalletInfo_error angle(::base_interfaces_demo::msg::PalletInfo::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_PalletInfo_error(msg_);
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
