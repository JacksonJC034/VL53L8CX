// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:action/Pallet.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__ACTION__DETAIL__PALLET__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__ACTION__DETAIL__PALLET__BUILDER_HPP_

#include "base_interfaces_demo/action/detail/pallet__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Pallet_Goal_type
{
public:
  Init_Pallet_Goal_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces_demo::action::Pallet_Goal type(::base_interfaces_demo::action::Pallet_Goal::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Pallet_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Pallet_Goal>()
{
  return base_interfaces_demo::action::builder::Init_Pallet_Goal_type();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Pallet_Result_drift
{
public:
  explicit Init_Pallet_Result_drift(::base_interfaces_demo::action::Pallet_Result & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::action::Pallet_Result drift(::base_interfaces_demo::action::Pallet_Result::_drift_type arg)
  {
    msg_.drift = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Pallet_Result msg_;
};

class Init_Pallet_Result_angle
{
public:
  explicit Init_Pallet_Result_angle(::base_interfaces_demo::action::Pallet_Result & msg)
  : msg_(msg)
  {}
  Init_Pallet_Result_drift angle(::base_interfaces_demo::action::Pallet_Result::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_Pallet_Result_drift(msg_);
  }

private:
  ::base_interfaces_demo::action::Pallet_Result msg_;
};

class Init_Pallet_Result_pallet
{
public:
  Init_Pallet_Result_pallet()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pallet_Result_angle pallet(::base_interfaces_demo::action::Pallet_Result::_pallet_type arg)
  {
    msg_.pallet = std::move(arg);
    return Init_Pallet_Result_angle(msg_);
  }

private:
  ::base_interfaces_demo::action::Pallet_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Pallet_Result>()
{
  return base_interfaces_demo::action::builder::Init_Pallet_Result_pallet();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Pallet_Feedback_drift
{
public:
  explicit Init_Pallet_Feedback_drift(::base_interfaces_demo::action::Pallet_Feedback & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::action::Pallet_Feedback drift(::base_interfaces_demo::action::Pallet_Feedback::_drift_type arg)
  {
    msg_.drift = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Pallet_Feedback msg_;
};

class Init_Pallet_Feedback_angle
{
public:
  explicit Init_Pallet_Feedback_angle(::base_interfaces_demo::action::Pallet_Feedback & msg)
  : msg_(msg)
  {}
  Init_Pallet_Feedback_drift angle(::base_interfaces_demo::action::Pallet_Feedback::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_Pallet_Feedback_drift(msg_);
  }

private:
  ::base_interfaces_demo::action::Pallet_Feedback msg_;
};

class Init_Pallet_Feedback_pallet
{
public:
  Init_Pallet_Feedback_pallet()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pallet_Feedback_angle pallet(::base_interfaces_demo::action::Pallet_Feedback::_pallet_type arg)
  {
    msg_.pallet = std::move(arg);
    return Init_Pallet_Feedback_angle(msg_);
  }

private:
  ::base_interfaces_demo::action::Pallet_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Pallet_Feedback>()
{
  return base_interfaces_demo::action::builder::Init_Pallet_Feedback_pallet();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Pallet_SendGoal_Request_goal
{
public:
  explicit Init_Pallet_SendGoal_Request_goal(::base_interfaces_demo::action::Pallet_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::action::Pallet_SendGoal_Request goal(::base_interfaces_demo::action::Pallet_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Pallet_SendGoal_Request msg_;
};

class Init_Pallet_SendGoal_Request_goal_id
{
public:
  Init_Pallet_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pallet_SendGoal_Request_goal goal_id(::base_interfaces_demo::action::Pallet_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Pallet_SendGoal_Request_goal(msg_);
  }

private:
  ::base_interfaces_demo::action::Pallet_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Pallet_SendGoal_Request>()
{
  return base_interfaces_demo::action::builder::Init_Pallet_SendGoal_Request_goal_id();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Pallet_SendGoal_Response_stamp
{
public:
  explicit Init_Pallet_SendGoal_Response_stamp(::base_interfaces_demo::action::Pallet_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::action::Pallet_SendGoal_Response stamp(::base_interfaces_demo::action::Pallet_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Pallet_SendGoal_Response msg_;
};

class Init_Pallet_SendGoal_Response_accepted
{
public:
  Init_Pallet_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pallet_SendGoal_Response_stamp accepted(::base_interfaces_demo::action::Pallet_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Pallet_SendGoal_Response_stamp(msg_);
  }

private:
  ::base_interfaces_demo::action::Pallet_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Pallet_SendGoal_Response>()
{
  return base_interfaces_demo::action::builder::Init_Pallet_SendGoal_Response_accepted();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Pallet_GetResult_Request_goal_id
{
public:
  Init_Pallet_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces_demo::action::Pallet_GetResult_Request goal_id(::base_interfaces_demo::action::Pallet_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Pallet_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Pallet_GetResult_Request>()
{
  return base_interfaces_demo::action::builder::Init_Pallet_GetResult_Request_goal_id();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Pallet_GetResult_Response_result
{
public:
  explicit Init_Pallet_GetResult_Response_result(::base_interfaces_demo::action::Pallet_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::action::Pallet_GetResult_Response result(::base_interfaces_demo::action::Pallet_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Pallet_GetResult_Response msg_;
};

class Init_Pallet_GetResult_Response_status
{
public:
  Init_Pallet_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pallet_GetResult_Response_result status(::base_interfaces_demo::action::Pallet_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Pallet_GetResult_Response_result(msg_);
  }

private:
  ::base_interfaces_demo::action::Pallet_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Pallet_GetResult_Response>()
{
  return base_interfaces_demo::action::builder::Init_Pallet_GetResult_Response_status();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Pallet_FeedbackMessage_feedback
{
public:
  explicit Init_Pallet_FeedbackMessage_feedback(::base_interfaces_demo::action::Pallet_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::action::Pallet_FeedbackMessage feedback(::base_interfaces_demo::action::Pallet_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Pallet_FeedbackMessage msg_;
};

class Init_Pallet_FeedbackMessage_goal_id
{
public:
  Init_Pallet_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pallet_FeedbackMessage_feedback goal_id(::base_interfaces_demo::action::Pallet_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Pallet_FeedbackMessage_feedback(msg_);
  }

private:
  ::base_interfaces_demo::action::Pallet_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Pallet_FeedbackMessage>()
{
  return base_interfaces_demo::action::builder::Init_Pallet_FeedbackMessage_goal_id();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__ACTION__DETAIL__PALLET__BUILDER_HPP_
