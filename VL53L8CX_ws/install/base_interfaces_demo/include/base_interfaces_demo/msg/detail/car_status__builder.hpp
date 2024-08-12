// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/CarStatus.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__CAR_STATUS__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__CAR_STATUS__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/car_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_CarStatus_stand_alone_state
{
public:
  explicit Init_CarStatus_stand_alone_state(::base_interfaces_demo::msg::CarStatus & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::CarStatus stand_alone_state(::base_interfaces_demo::msg::CarStatus::_stand_alone_state_type arg)
  {
    msg_.stand_alone_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::CarStatus msg_;
};

class Init_CarStatus_mode
{
public:
  explicit Init_CarStatus_mode(::base_interfaces_demo::msg::CarStatus & msg)
  : msg_(msg)
  {}
  Init_CarStatus_stand_alone_state mode(::base_interfaces_demo::msg::CarStatus::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_CarStatus_stand_alone_state(msg_);
  }

private:
  ::base_interfaces_demo::msg::CarStatus msg_;
};

class Init_CarStatus_charging
{
public:
  explicit Init_CarStatus_charging(::base_interfaces_demo::msg::CarStatus & msg)
  : msg_(msg)
  {}
  Init_CarStatus_mode charging(::base_interfaces_demo::msg::CarStatus::_charging_type arg)
  {
    msg_.charging = std::move(arg);
    return Init_CarStatus_mode(msg_);
  }

private:
  ::base_interfaces_demo::msg::CarStatus msg_;
};

class Init_CarStatus_load
{
public:
  explicit Init_CarStatus_load(::base_interfaces_demo::msg::CarStatus & msg)
  : msg_(msg)
  {}
  Init_CarStatus_charging load(::base_interfaces_demo::msg::CarStatus::_load_type arg)
  {
    msg_.load = std::move(arg);
    return Init_CarStatus_charging(msg_);
  }

private:
  ::base_interfaces_demo::msg::CarStatus msg_;
};

class Init_CarStatus_sleeping
{
public:
  explicit Init_CarStatus_sleeping(::base_interfaces_demo::msg::CarStatus & msg)
  : msg_(msg)
  {}
  Init_CarStatus_load sleeping(::base_interfaces_demo::msg::CarStatus::_sleeping_type arg)
  {
    msg_.sleeping = std::move(arg);
    return Init_CarStatus_load(msg_);
  }

private:
  ::base_interfaces_demo::msg::CarStatus msg_;
};

class Init_CarStatus_estop
{
public:
  explicit Init_CarStatus_estop(::base_interfaces_demo::msg::CarStatus & msg)
  : msg_(msg)
  {}
  Init_CarStatus_sleeping estop(::base_interfaces_demo::msg::CarStatus::_estop_type arg)
  {
    msg_.estop = std::move(arg);
    return Init_CarStatus_sleeping(msg_);
  }

private:
  ::base_interfaces_demo::msg::CarStatus msg_;
};

class Init_CarStatus_warning
{
public:
  explicit Init_CarStatus_warning(::base_interfaces_demo::msg::CarStatus & msg)
  : msg_(msg)
  {}
  Init_CarStatus_estop warning(::base_interfaces_demo::msg::CarStatus::_warning_type arg)
  {
    msg_.warning = std::move(arg);
    return Init_CarStatus_estop(msg_);
  }

private:
  ::base_interfaces_demo::msg::CarStatus msg_;
};

class Init_CarStatus_error
{
public:
  explicit Init_CarStatus_error(::base_interfaces_demo::msg::CarStatus & msg)
  : msg_(msg)
  {}
  Init_CarStatus_warning error(::base_interfaces_demo::msg::CarStatus::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_CarStatus_warning(msg_);
  }

private:
  ::base_interfaces_demo::msg::CarStatus msg_;
};

class Init_CarStatus_on_track
{
public:
  explicit Init_CarStatus_on_track(::base_interfaces_demo::msg::CarStatus & msg)
  : msg_(msg)
  {}
  Init_CarStatus_error on_track(::base_interfaces_demo::msg::CarStatus::_on_track_type arg)
  {
    msg_.on_track = std::move(arg);
    return Init_CarStatus_error(msg_);
  }

private:
  ::base_interfaces_demo::msg::CarStatus msg_;
};

class Init_CarStatus_on_tag
{
public:
  explicit Init_CarStatus_on_tag(::base_interfaces_demo::msg::CarStatus & msg)
  : msg_(msg)
  {}
  Init_CarStatus_on_track on_tag(::base_interfaces_demo::msg::CarStatus::_on_tag_type arg)
  {
    msg_.on_tag = std::move(arg);
    return Init_CarStatus_on_track(msg_);
  }

private:
  ::base_interfaces_demo::msg::CarStatus msg_;
};

class Init_CarStatus_fine_positioning
{
public:
  explicit Init_CarStatus_fine_positioning(::base_interfaces_demo::msg::CarStatus & msg)
  : msg_(msg)
  {}
  Init_CarStatus_on_tag fine_positioning(::base_interfaces_demo::msg::CarStatus::_fine_positioning_type arg)
  {
    msg_.fine_positioning = std::move(arg);
    return Init_CarStatus_on_tag(msg_);
  }

private:
  ::base_interfaces_demo::msg::CarStatus msg_;
};

class Init_CarStatus_driving
{
public:
  explicit Init_CarStatus_driving(::base_interfaces_demo::msg::CarStatus & msg)
  : msg_(msg)
  {}
  Init_CarStatus_fine_positioning driving(::base_interfaces_demo::msg::CarStatus::_driving_type arg)
  {
    msg_.driving = std::move(arg);
    return Init_CarStatus_fine_positioning(msg_);
  }

private:
  ::base_interfaces_demo::msg::CarStatus msg_;
};

class Init_CarStatus_releasing
{
public:
  explicit Init_CarStatus_releasing(::base_interfaces_demo::msg::CarStatus & msg)
  : msg_(msg)
  {}
  Init_CarStatus_driving releasing(::base_interfaces_demo::msg::CarStatus::_releasing_type arg)
  {
    msg_.releasing = std::move(arg);
    return Init_CarStatus_driving(msg_);
  }

private:
  ::base_interfaces_demo::msg::CarStatus msg_;
};

class Init_CarStatus_checking
{
public:
  explicit Init_CarStatus_checking(::base_interfaces_demo::msg::CarStatus & msg)
  : msg_(msg)
  {}
  Init_CarStatus_releasing checking(::base_interfaces_demo::msg::CarStatus::_checking_type arg)
  {
    msg_.checking = std::move(arg);
    return Init_CarStatus_releasing(msg_);
  }

private:
  ::base_interfaces_demo::msg::CarStatus msg_;
};

class Init_CarStatus_initializing
{
public:
  explicit Init_CarStatus_initializing(::base_interfaces_demo::msg::CarStatus & msg)
  : msg_(msg)
  {}
  Init_CarStatus_checking initializing(::base_interfaces_demo::msg::CarStatus::_initializing_type arg)
  {
    msg_.initializing = std::move(arg);
    return Init_CarStatus_checking(msg_);
  }

private:
  ::base_interfaces_demo::msg::CarStatus msg_;
};

class Init_CarStatus_task_state
{
public:
  Init_CarStatus_task_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarStatus_initializing task_state(::base_interfaces_demo::msg::CarStatus::_task_state_type arg)
  {
    msg_.task_state = std::move(arg);
    return Init_CarStatus_initializing(msg_);
  }

private:
  ::base_interfaces_demo::msg::CarStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::CarStatus>()
{
  return base_interfaces_demo::msg::builder::Init_CarStatus_task_state();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__CAR_STATUS__BUILDER_HPP_
