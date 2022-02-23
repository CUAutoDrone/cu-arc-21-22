// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pi_gpio_interface:action/GPIO.idl
// generated code does not contain a copyright notice

#ifndef PI_GPIO_INTERFACE__ACTION__DETAIL__GPIO__BUILDER_HPP_
#define PI_GPIO_INTERFACE__ACTION__DETAIL__GPIO__BUILDER_HPP_

#include "pi_gpio_interface/action/detail/gpio__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pi_gpio_interface
{

namespace action
{

namespace builder
{

class Init_GPIO_Goal_gpio
{
public:
  Init_GPIO_Goal_gpio()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pi_gpio_interface::action::GPIO_Goal gpio(::pi_gpio_interface::action::GPIO_Goal::_gpio_type arg)
  {
    msg_.gpio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pi_gpio_interface::action::GPIO_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pi_gpio_interface::action::GPIO_Goal>()
{
  return pi_gpio_interface::action::builder::Init_GPIO_Goal_gpio();
}

}  // namespace pi_gpio_interface


namespace pi_gpio_interface
{

namespace action
{

namespace builder
{

class Init_GPIO_Result_value
{
public:
  Init_GPIO_Result_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pi_gpio_interface::action::GPIO_Result value(::pi_gpio_interface::action::GPIO_Result::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pi_gpio_interface::action::GPIO_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pi_gpio_interface::action::GPIO_Result>()
{
  return pi_gpio_interface::action::builder::Init_GPIO_Result_value();
}

}  // namespace pi_gpio_interface


namespace pi_gpio_interface
{

namespace action
{

namespace builder
{

class Init_GPIO_Feedback_feedback
{
public:
  Init_GPIO_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pi_gpio_interface::action::GPIO_Feedback feedback(::pi_gpio_interface::action::GPIO_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pi_gpio_interface::action::GPIO_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pi_gpio_interface::action::GPIO_Feedback>()
{
  return pi_gpio_interface::action::builder::Init_GPIO_Feedback_feedback();
}

}  // namespace pi_gpio_interface


namespace pi_gpio_interface
{

namespace action
{

namespace builder
{

class Init_GPIO_SendGoal_Request_goal
{
public:
  explicit Init_GPIO_SendGoal_Request_goal(::pi_gpio_interface::action::GPIO_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::pi_gpio_interface::action::GPIO_SendGoal_Request goal(::pi_gpio_interface::action::GPIO_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pi_gpio_interface::action::GPIO_SendGoal_Request msg_;
};

class Init_GPIO_SendGoal_Request_goal_id
{
public:
  Init_GPIO_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GPIO_SendGoal_Request_goal goal_id(::pi_gpio_interface::action::GPIO_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GPIO_SendGoal_Request_goal(msg_);
  }

private:
  ::pi_gpio_interface::action::GPIO_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pi_gpio_interface::action::GPIO_SendGoal_Request>()
{
  return pi_gpio_interface::action::builder::Init_GPIO_SendGoal_Request_goal_id();
}

}  // namespace pi_gpio_interface


namespace pi_gpio_interface
{

namespace action
{

namespace builder
{

class Init_GPIO_SendGoal_Response_stamp
{
public:
  explicit Init_GPIO_SendGoal_Response_stamp(::pi_gpio_interface::action::GPIO_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::pi_gpio_interface::action::GPIO_SendGoal_Response stamp(::pi_gpio_interface::action::GPIO_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pi_gpio_interface::action::GPIO_SendGoal_Response msg_;
};

class Init_GPIO_SendGoal_Response_accepted
{
public:
  Init_GPIO_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GPIO_SendGoal_Response_stamp accepted(::pi_gpio_interface::action::GPIO_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GPIO_SendGoal_Response_stamp(msg_);
  }

private:
  ::pi_gpio_interface::action::GPIO_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pi_gpio_interface::action::GPIO_SendGoal_Response>()
{
  return pi_gpio_interface::action::builder::Init_GPIO_SendGoal_Response_accepted();
}

}  // namespace pi_gpio_interface


namespace pi_gpio_interface
{

namespace action
{

namespace builder
{

class Init_GPIO_GetResult_Request_goal_id
{
public:
  Init_GPIO_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pi_gpio_interface::action::GPIO_GetResult_Request goal_id(::pi_gpio_interface::action::GPIO_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pi_gpio_interface::action::GPIO_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pi_gpio_interface::action::GPIO_GetResult_Request>()
{
  return pi_gpio_interface::action::builder::Init_GPIO_GetResult_Request_goal_id();
}

}  // namespace pi_gpio_interface


namespace pi_gpio_interface
{

namespace action
{

namespace builder
{

class Init_GPIO_GetResult_Response_result
{
public:
  explicit Init_GPIO_GetResult_Response_result(::pi_gpio_interface::action::GPIO_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::pi_gpio_interface::action::GPIO_GetResult_Response result(::pi_gpio_interface::action::GPIO_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pi_gpio_interface::action::GPIO_GetResult_Response msg_;
};

class Init_GPIO_GetResult_Response_status
{
public:
  Init_GPIO_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GPIO_GetResult_Response_result status(::pi_gpio_interface::action::GPIO_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GPIO_GetResult_Response_result(msg_);
  }

private:
  ::pi_gpio_interface::action::GPIO_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pi_gpio_interface::action::GPIO_GetResult_Response>()
{
  return pi_gpio_interface::action::builder::Init_GPIO_GetResult_Response_status();
}

}  // namespace pi_gpio_interface


namespace pi_gpio_interface
{

namespace action
{

namespace builder
{

class Init_GPIO_FeedbackMessage_feedback
{
public:
  explicit Init_GPIO_FeedbackMessage_feedback(::pi_gpio_interface::action::GPIO_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::pi_gpio_interface::action::GPIO_FeedbackMessage feedback(::pi_gpio_interface::action::GPIO_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pi_gpio_interface::action::GPIO_FeedbackMessage msg_;
};

class Init_GPIO_FeedbackMessage_goal_id
{
public:
  Init_GPIO_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GPIO_FeedbackMessage_feedback goal_id(::pi_gpio_interface::action::GPIO_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GPIO_FeedbackMessage_feedback(msg_);
  }

private:
  ::pi_gpio_interface::action::GPIO_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pi_gpio_interface::action::GPIO_FeedbackMessage>()
{
  return pi_gpio_interface::action::builder::Init_GPIO_FeedbackMessage_goal_id();
}

}  // namespace pi_gpio_interface

#endif  // PI_GPIO_INTERFACE__ACTION__DETAIL__GPIO__BUILDER_HPP_
