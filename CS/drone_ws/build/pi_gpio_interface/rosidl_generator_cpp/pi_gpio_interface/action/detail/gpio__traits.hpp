// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pi_gpio_interface:action/GPIO.idl
// generated code does not contain a copyright notice

#ifndef PI_GPIO_INTERFACE__ACTION__DETAIL__GPIO__TRAITS_HPP_
#define PI_GPIO_INTERFACE__ACTION__DETAIL__GPIO__TRAITS_HPP_

#include "pi_gpio_interface/action/detail/gpio__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pi_gpio_interface::action::GPIO_Goal>()
{
  return "pi_gpio_interface::action::GPIO_Goal";
}

template<>
inline const char * name<pi_gpio_interface::action::GPIO_Goal>()
{
  return "pi_gpio_interface/action/GPIO_Goal";
}

template<>
struct has_fixed_size<pi_gpio_interface::action::GPIO_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pi_gpio_interface::action::GPIO_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pi_gpio_interface::action::GPIO_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pi_gpio_interface::action::GPIO_Result>()
{
  return "pi_gpio_interface::action::GPIO_Result";
}

template<>
inline const char * name<pi_gpio_interface::action::GPIO_Result>()
{
  return "pi_gpio_interface/action/GPIO_Result";
}

template<>
struct has_fixed_size<pi_gpio_interface::action::GPIO_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pi_gpio_interface::action::GPIO_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pi_gpio_interface::action::GPIO_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pi_gpio_interface::action::GPIO_Feedback>()
{
  return "pi_gpio_interface::action::GPIO_Feedback";
}

template<>
inline const char * name<pi_gpio_interface::action::GPIO_Feedback>()
{
  return "pi_gpio_interface/action/GPIO_Feedback";
}

template<>
struct has_fixed_size<pi_gpio_interface::action::GPIO_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pi_gpio_interface::action::GPIO_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pi_gpio_interface::action::GPIO_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "pi_gpio_interface/action/detail/gpio__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pi_gpio_interface::action::GPIO_SendGoal_Request>()
{
  return "pi_gpio_interface::action::GPIO_SendGoal_Request";
}

template<>
inline const char * name<pi_gpio_interface::action::GPIO_SendGoal_Request>()
{
  return "pi_gpio_interface/action/GPIO_SendGoal_Request";
}

template<>
struct has_fixed_size<pi_gpio_interface::action::GPIO_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<pi_gpio_interface::action::GPIO_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pi_gpio_interface::action::GPIO_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<pi_gpio_interface::action::GPIO_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pi_gpio_interface::action::GPIO_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pi_gpio_interface::action::GPIO_SendGoal_Response>()
{
  return "pi_gpio_interface::action::GPIO_SendGoal_Response";
}

template<>
inline const char * name<pi_gpio_interface::action::GPIO_SendGoal_Response>()
{
  return "pi_gpio_interface/action/GPIO_SendGoal_Response";
}

template<>
struct has_fixed_size<pi_gpio_interface::action::GPIO_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<pi_gpio_interface::action::GPIO_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<pi_gpio_interface::action::GPIO_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pi_gpio_interface::action::GPIO_SendGoal>()
{
  return "pi_gpio_interface::action::GPIO_SendGoal";
}

template<>
inline const char * name<pi_gpio_interface::action::GPIO_SendGoal>()
{
  return "pi_gpio_interface/action/GPIO_SendGoal";
}

template<>
struct has_fixed_size<pi_gpio_interface::action::GPIO_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<pi_gpio_interface::action::GPIO_SendGoal_Request>::value &&
    has_fixed_size<pi_gpio_interface::action::GPIO_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<pi_gpio_interface::action::GPIO_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<pi_gpio_interface::action::GPIO_SendGoal_Request>::value &&
    has_bounded_size<pi_gpio_interface::action::GPIO_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<pi_gpio_interface::action::GPIO_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<pi_gpio_interface::action::GPIO_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pi_gpio_interface::action::GPIO_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pi_gpio_interface::action::GPIO_GetResult_Request>()
{
  return "pi_gpio_interface::action::GPIO_GetResult_Request";
}

template<>
inline const char * name<pi_gpio_interface::action::GPIO_GetResult_Request>()
{
  return "pi_gpio_interface/action/GPIO_GetResult_Request";
}

template<>
struct has_fixed_size<pi_gpio_interface::action::GPIO_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pi_gpio_interface::action::GPIO_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pi_gpio_interface::action::GPIO_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "pi_gpio_interface/action/detail/gpio__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pi_gpio_interface::action::GPIO_GetResult_Response>()
{
  return "pi_gpio_interface::action::GPIO_GetResult_Response";
}

template<>
inline const char * name<pi_gpio_interface::action::GPIO_GetResult_Response>()
{
  return "pi_gpio_interface/action/GPIO_GetResult_Response";
}

template<>
struct has_fixed_size<pi_gpio_interface::action::GPIO_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<pi_gpio_interface::action::GPIO_Result>::value> {};

template<>
struct has_bounded_size<pi_gpio_interface::action::GPIO_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<pi_gpio_interface::action::GPIO_Result>::value> {};

template<>
struct is_message<pi_gpio_interface::action::GPIO_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pi_gpio_interface::action::GPIO_GetResult>()
{
  return "pi_gpio_interface::action::GPIO_GetResult";
}

template<>
inline const char * name<pi_gpio_interface::action::GPIO_GetResult>()
{
  return "pi_gpio_interface/action/GPIO_GetResult";
}

template<>
struct has_fixed_size<pi_gpio_interface::action::GPIO_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<pi_gpio_interface::action::GPIO_GetResult_Request>::value &&
    has_fixed_size<pi_gpio_interface::action::GPIO_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<pi_gpio_interface::action::GPIO_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<pi_gpio_interface::action::GPIO_GetResult_Request>::value &&
    has_bounded_size<pi_gpio_interface::action::GPIO_GetResult_Response>::value
  >
{
};

template<>
struct is_service<pi_gpio_interface::action::GPIO_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<pi_gpio_interface::action::GPIO_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pi_gpio_interface::action::GPIO_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "pi_gpio_interface/action/detail/gpio__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pi_gpio_interface::action::GPIO_FeedbackMessage>()
{
  return "pi_gpio_interface::action::GPIO_FeedbackMessage";
}

template<>
inline const char * name<pi_gpio_interface::action::GPIO_FeedbackMessage>()
{
  return "pi_gpio_interface/action/GPIO_FeedbackMessage";
}

template<>
struct has_fixed_size<pi_gpio_interface::action::GPIO_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<pi_gpio_interface::action::GPIO_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pi_gpio_interface::action::GPIO_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<pi_gpio_interface::action::GPIO_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pi_gpio_interface::action::GPIO_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<pi_gpio_interface::action::GPIO>
  : std::true_type
{
};

template<>
struct is_action_goal<pi_gpio_interface::action::GPIO_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<pi_gpio_interface::action::GPIO_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<pi_gpio_interface::action::GPIO_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PI_GPIO_INTERFACE__ACTION__DETAIL__GPIO__TRAITS_HPP_
