// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pi_gpio_interface:action/GPIO.idl
// generated code does not contain a copyright notice

#ifndef PI_GPIO_INTERFACE__ACTION__DETAIL__GPIO__STRUCT_H_
#define PI_GPIO_INTERFACE__ACTION__DETAIL__GPIO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'gpio'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/GPIO in the package pi_gpio_interface.
typedef struct pi_gpio_interface__action__GPIO_Goal
{
  rosidl_runtime_c__String gpio;
} pi_gpio_interface__action__GPIO_Goal;

// Struct for a sequence of pi_gpio_interface__action__GPIO_Goal.
typedef struct pi_gpio_interface__action__GPIO_Goal__Sequence
{
  pi_gpio_interface__action__GPIO_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pi_gpio_interface__action__GPIO_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/GPIO in the package pi_gpio_interface.
typedef struct pi_gpio_interface__action__GPIO_Result
{
  int32_t value;
} pi_gpio_interface__action__GPIO_Result;

// Struct for a sequence of pi_gpio_interface__action__GPIO_Result.
typedef struct pi_gpio_interface__action__GPIO_Result__Sequence
{
  pi_gpio_interface__action__GPIO_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pi_gpio_interface__action__GPIO_Result__Sequence;


// Constants defined in the message

// Struct defined in action/GPIO in the package pi_gpio_interface.
typedef struct pi_gpio_interface__action__GPIO_Feedback
{
  int32_t feedback;
} pi_gpio_interface__action__GPIO_Feedback;

// Struct for a sequence of pi_gpio_interface__action__GPIO_Feedback.
typedef struct pi_gpio_interface__action__GPIO_Feedback__Sequence
{
  pi_gpio_interface__action__GPIO_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pi_gpio_interface__action__GPIO_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "pi_gpio_interface/action/detail/gpio__struct.h"

// Struct defined in action/GPIO in the package pi_gpio_interface.
typedef struct pi_gpio_interface__action__GPIO_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  pi_gpio_interface__action__GPIO_Goal goal;
} pi_gpio_interface__action__GPIO_SendGoal_Request;

// Struct for a sequence of pi_gpio_interface__action__GPIO_SendGoal_Request.
typedef struct pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence
{
  pi_gpio_interface__action__GPIO_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/GPIO in the package pi_gpio_interface.
typedef struct pi_gpio_interface__action__GPIO_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} pi_gpio_interface__action__GPIO_SendGoal_Response;

// Struct for a sequence of pi_gpio_interface__action__GPIO_SendGoal_Response.
typedef struct pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence
{
  pi_gpio_interface__action__GPIO_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/GPIO in the package pi_gpio_interface.
typedef struct pi_gpio_interface__action__GPIO_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} pi_gpio_interface__action__GPIO_GetResult_Request;

// Struct for a sequence of pi_gpio_interface__action__GPIO_GetResult_Request.
typedef struct pi_gpio_interface__action__GPIO_GetResult_Request__Sequence
{
  pi_gpio_interface__action__GPIO_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pi_gpio_interface__action__GPIO_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "pi_gpio_interface/action/detail/gpio__struct.h"

// Struct defined in action/GPIO in the package pi_gpio_interface.
typedef struct pi_gpio_interface__action__GPIO_GetResult_Response
{
  int8_t status;
  pi_gpio_interface__action__GPIO_Result result;
} pi_gpio_interface__action__GPIO_GetResult_Response;

// Struct for a sequence of pi_gpio_interface__action__GPIO_GetResult_Response.
typedef struct pi_gpio_interface__action__GPIO_GetResult_Response__Sequence
{
  pi_gpio_interface__action__GPIO_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pi_gpio_interface__action__GPIO_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "pi_gpio_interface/action/detail/gpio__struct.h"

// Struct defined in action/GPIO in the package pi_gpio_interface.
typedef struct pi_gpio_interface__action__GPIO_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  pi_gpio_interface__action__GPIO_Feedback feedback;
} pi_gpio_interface__action__GPIO_FeedbackMessage;

// Struct for a sequence of pi_gpio_interface__action__GPIO_FeedbackMessage.
typedef struct pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence
{
  pi_gpio_interface__action__GPIO_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PI_GPIO_INTERFACE__ACTION__DETAIL__GPIO__STRUCT_H_
