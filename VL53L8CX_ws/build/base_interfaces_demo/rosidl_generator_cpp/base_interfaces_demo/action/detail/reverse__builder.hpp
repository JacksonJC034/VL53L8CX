// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:action/Reverse.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__ACTION__DETAIL__REVERSE__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__ACTION__DETAIL__REVERSE__BUILDER_HPP_

#include "base_interfaces_demo/action/detail/reverse__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Reverse_Goal_type
{
public:
  explicit Init_Reverse_Goal_type(::base_interfaces_demo::action::Reverse_Goal & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::action::Reverse_Goal type(::base_interfaces_demo::action::Reverse_Goal::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Reverse_Goal msg_;
};

class Init_Reverse_Goal_goal_location
{
public:
  Init_Reverse_Goal_goal_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Reverse_Goal_type goal_location(::base_interfaces_demo::action::Reverse_Goal::_goal_location_type arg)
  {
    msg_.goal_location = std::move(arg);
    return Init_Reverse_Goal_type(msg_);
  }

private:
  ::base_interfaces_demo::action::Reverse_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Reverse_Goal>()
{
  return base_interfaces_demo::action::builder::Init_Reverse_Goal_goal_location();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Reverse_Result_final_location
{
public:
  Init_Reverse_Result_final_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces_demo::action::Reverse_Result final_location(::base_interfaces_demo::action::Reverse_Result::_final_location_type arg)
  {
    msg_.final_location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Reverse_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Reverse_Result>()
{
  return base_interfaces_demo::action::builder::Init_Reverse_Result_final_location();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Reverse_Feedback_current_location
{
public:
  Init_Reverse_Feedback_current_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces_demo::action::Reverse_Feedback current_location(::base_interfaces_demo::action::Reverse_Feedback::_current_location_type arg)
  {
    msg_.current_location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Reverse_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Reverse_Feedback>()
{
  return base_interfaces_demo::action::builder::Init_Reverse_Feedback_current_location();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Reverse_SendGoal_Request_goal
{
public:
  explicit Init_Reverse_SendGoal_Request_goal(::base_interfaces_demo::action::Reverse_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::action::Reverse_SendGoal_Request goal(::base_interfaces_demo::action::Reverse_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Reverse_SendGoal_Request msg_;
};

class Init_Reverse_SendGoal_Request_goal_id
{
public:
  Init_Reverse_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Reverse_SendGoal_Request_goal goal_id(::base_interfaces_demo::action::Reverse_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Reverse_SendGoal_Request_goal(msg_);
  }

private:
  ::base_interfaces_demo::action::Reverse_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Reverse_SendGoal_Request>()
{
  return base_interfaces_demo::action::builder::Init_Reverse_SendGoal_Request_goal_id();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Reverse_SendGoal_Response_stamp
{
public:
  explicit Init_Reverse_SendGoal_Response_stamp(::base_interfaces_demo::action::Reverse_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::action::Reverse_SendGoal_Response stamp(::base_interfaces_demo::action::Reverse_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Reverse_SendGoal_Response msg_;
};

class Init_Reverse_SendGoal_Response_accepted
{
public:
  Init_Reverse_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Reverse_SendGoal_Response_stamp accepted(::base_interfaces_demo::action::Reverse_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Reverse_SendGoal_Response_stamp(msg_);
  }

private:
  ::base_interfaces_demo::action::Reverse_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Reverse_SendGoal_Response>()
{
  return base_interfaces_demo::action::builder::Init_Reverse_SendGoal_Response_accepted();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Reverse_GetResult_Request_goal_id
{
public:
  Init_Reverse_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces_demo::action::Reverse_GetResult_Request goal_id(::base_interfaces_demo::action::Reverse_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Reverse_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Reverse_GetResult_Request>()
{
  return base_interfaces_demo::action::builder::Init_Reverse_GetResult_Request_goal_id();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Reverse_GetResult_Response_result
{
public:
  explicit Init_Reverse_GetResult_Response_result(::base_interfaces_demo::action::Reverse_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::action::Reverse_GetResult_Response result(::base_interfaces_demo::action::Reverse_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Reverse_GetResult_Response msg_;
};

class Init_Reverse_GetResult_Response_status
{
public:
  Init_Reverse_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Reverse_GetResult_Response_result status(::base_interfaces_demo::action::Reverse_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Reverse_GetResult_Response_result(msg_);
  }

private:
  ::base_interfaces_demo::action::Reverse_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Reverse_GetResult_Response>()
{
  return base_interfaces_demo::action::builder::Init_Reverse_GetResult_Response_status();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Reverse_FeedbackMessage_feedback
{
public:
  explicit Init_Reverse_FeedbackMessage_feedback(::base_interfaces_demo::action::Reverse_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::action::Reverse_FeedbackMessage feedback(::base_interfaces_demo::action::Reverse_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Reverse_FeedbackMessage msg_;
};

class Init_Reverse_FeedbackMessage_goal_id
{
public:
  Init_Reverse_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Reverse_FeedbackMessage_feedback goal_id(::base_interfaces_demo::action::Reverse_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Reverse_FeedbackMessage_feedback(msg_);
  }

private:
  ::base_interfaces_demo::action::Reverse_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Reverse_FeedbackMessage>()
{
  return base_interfaces_demo::action::builder::Init_Reverse_FeedbackMessage_goal_id();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__ACTION__DETAIL__REVERSE__BUILDER_HPP_
