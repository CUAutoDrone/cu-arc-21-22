// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pi_gpio_interface:action/GPIO.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pi_gpio_interface/action/detail/gpio__rosidl_typesupport_introspection_c.h"
#include "pi_gpio_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pi_gpio_interface/action/detail/gpio__functions.h"
#include "pi_gpio_interface/action/detail/gpio__struct.h"


// Include directives for member types
// Member `gpio`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GPIO_Goal__rosidl_typesupport_introspection_c__GPIO_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pi_gpio_interface__action__GPIO_Goal__init(message_memory);
}

void GPIO_Goal__rosidl_typesupport_introspection_c__GPIO_Goal_fini_function(void * message_memory)
{
  pi_gpio_interface__action__GPIO_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GPIO_Goal__rosidl_typesupport_introspection_c__GPIO_Goal_message_member_array[1] = {
  {
    "gpio",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi_gpio_interface__action__GPIO_Goal, gpio),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GPIO_Goal__rosidl_typesupport_introspection_c__GPIO_Goal_message_members = {
  "pi_gpio_interface__action",  // message namespace
  "GPIO_Goal",  // message name
  1,  // number of fields
  sizeof(pi_gpio_interface__action__GPIO_Goal),
  GPIO_Goal__rosidl_typesupport_introspection_c__GPIO_Goal_message_member_array,  // message members
  GPIO_Goal__rosidl_typesupport_introspection_c__GPIO_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  GPIO_Goal__rosidl_typesupport_introspection_c__GPIO_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GPIO_Goal__rosidl_typesupport_introspection_c__GPIO_Goal_message_type_support_handle = {
  0,
  &GPIO_Goal__rosidl_typesupport_introspection_c__GPIO_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pi_gpio_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_gpio_interface, action, GPIO_Goal)() {
  if (!GPIO_Goal__rosidl_typesupport_introspection_c__GPIO_Goal_message_type_support_handle.typesupport_identifier) {
    GPIO_Goal__rosidl_typesupport_introspection_c__GPIO_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GPIO_Goal__rosidl_typesupport_introspection_c__GPIO_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pi_gpio_interface/action/detail/gpio__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pi_gpio_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__functions.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GPIO_Result__rosidl_typesupport_introspection_c__GPIO_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pi_gpio_interface__action__GPIO_Result__init(message_memory);
}

void GPIO_Result__rosidl_typesupport_introspection_c__GPIO_Result_fini_function(void * message_memory)
{
  pi_gpio_interface__action__GPIO_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GPIO_Result__rosidl_typesupport_introspection_c__GPIO_Result_message_member_array[1] = {
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi_gpio_interface__action__GPIO_Result, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GPIO_Result__rosidl_typesupport_introspection_c__GPIO_Result_message_members = {
  "pi_gpio_interface__action",  // message namespace
  "GPIO_Result",  // message name
  1,  // number of fields
  sizeof(pi_gpio_interface__action__GPIO_Result),
  GPIO_Result__rosidl_typesupport_introspection_c__GPIO_Result_message_member_array,  // message members
  GPIO_Result__rosidl_typesupport_introspection_c__GPIO_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  GPIO_Result__rosidl_typesupport_introspection_c__GPIO_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GPIO_Result__rosidl_typesupport_introspection_c__GPIO_Result_message_type_support_handle = {
  0,
  &GPIO_Result__rosidl_typesupport_introspection_c__GPIO_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pi_gpio_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_gpio_interface, action, GPIO_Result)() {
  if (!GPIO_Result__rosidl_typesupport_introspection_c__GPIO_Result_message_type_support_handle.typesupport_identifier) {
    GPIO_Result__rosidl_typesupport_introspection_c__GPIO_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GPIO_Result__rosidl_typesupport_introspection_c__GPIO_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pi_gpio_interface/action/detail/gpio__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pi_gpio_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__functions.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GPIO_Feedback__rosidl_typesupport_introspection_c__GPIO_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pi_gpio_interface__action__GPIO_Feedback__init(message_memory);
}

void GPIO_Feedback__rosidl_typesupport_introspection_c__GPIO_Feedback_fini_function(void * message_memory)
{
  pi_gpio_interface__action__GPIO_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GPIO_Feedback__rosidl_typesupport_introspection_c__GPIO_Feedback_message_member_array[1] = {
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi_gpio_interface__action__GPIO_Feedback, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GPIO_Feedback__rosidl_typesupport_introspection_c__GPIO_Feedback_message_members = {
  "pi_gpio_interface__action",  // message namespace
  "GPIO_Feedback",  // message name
  1,  // number of fields
  sizeof(pi_gpio_interface__action__GPIO_Feedback),
  GPIO_Feedback__rosidl_typesupport_introspection_c__GPIO_Feedback_message_member_array,  // message members
  GPIO_Feedback__rosidl_typesupport_introspection_c__GPIO_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  GPIO_Feedback__rosidl_typesupport_introspection_c__GPIO_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GPIO_Feedback__rosidl_typesupport_introspection_c__GPIO_Feedback_message_type_support_handle = {
  0,
  &GPIO_Feedback__rosidl_typesupport_introspection_c__GPIO_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pi_gpio_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_gpio_interface, action, GPIO_Feedback)() {
  if (!GPIO_Feedback__rosidl_typesupport_introspection_c__GPIO_Feedback_message_type_support_handle.typesupport_identifier) {
    GPIO_Feedback__rosidl_typesupport_introspection_c__GPIO_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GPIO_Feedback__rosidl_typesupport_introspection_c__GPIO_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pi_gpio_interface/action/detail/gpio__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pi_gpio_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__functions.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "pi_gpio_interface/action/gpio.h"
// Member `goal`
// already included above
// #include "pi_gpio_interface/action/detail/gpio__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GPIO_SendGoal_Request__rosidl_typesupport_introspection_c__GPIO_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pi_gpio_interface__action__GPIO_SendGoal_Request__init(message_memory);
}

void GPIO_SendGoal_Request__rosidl_typesupport_introspection_c__GPIO_SendGoal_Request_fini_function(void * message_memory)
{
  pi_gpio_interface__action__GPIO_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GPIO_SendGoal_Request__rosidl_typesupport_introspection_c__GPIO_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi_gpio_interface__action__GPIO_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi_gpio_interface__action__GPIO_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GPIO_SendGoal_Request__rosidl_typesupport_introspection_c__GPIO_SendGoal_Request_message_members = {
  "pi_gpio_interface__action",  // message namespace
  "GPIO_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(pi_gpio_interface__action__GPIO_SendGoal_Request),
  GPIO_SendGoal_Request__rosidl_typesupport_introspection_c__GPIO_SendGoal_Request_message_member_array,  // message members
  GPIO_SendGoal_Request__rosidl_typesupport_introspection_c__GPIO_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GPIO_SendGoal_Request__rosidl_typesupport_introspection_c__GPIO_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GPIO_SendGoal_Request__rosidl_typesupport_introspection_c__GPIO_SendGoal_Request_message_type_support_handle = {
  0,
  &GPIO_SendGoal_Request__rosidl_typesupport_introspection_c__GPIO_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pi_gpio_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_gpio_interface, action, GPIO_SendGoal_Request)() {
  GPIO_SendGoal_Request__rosidl_typesupport_introspection_c__GPIO_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  GPIO_SendGoal_Request__rosidl_typesupport_introspection_c__GPIO_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_gpio_interface, action, GPIO_Goal)();
  if (!GPIO_SendGoal_Request__rosidl_typesupport_introspection_c__GPIO_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    GPIO_SendGoal_Request__rosidl_typesupport_introspection_c__GPIO_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GPIO_SendGoal_Request__rosidl_typesupport_introspection_c__GPIO_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pi_gpio_interface/action/detail/gpio__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pi_gpio_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__functions.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GPIO_SendGoal_Response__rosidl_typesupport_introspection_c__GPIO_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pi_gpio_interface__action__GPIO_SendGoal_Response__init(message_memory);
}

void GPIO_SendGoal_Response__rosidl_typesupport_introspection_c__GPIO_SendGoal_Response_fini_function(void * message_memory)
{
  pi_gpio_interface__action__GPIO_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GPIO_SendGoal_Response__rosidl_typesupport_introspection_c__GPIO_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi_gpio_interface__action__GPIO_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi_gpio_interface__action__GPIO_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GPIO_SendGoal_Response__rosidl_typesupport_introspection_c__GPIO_SendGoal_Response_message_members = {
  "pi_gpio_interface__action",  // message namespace
  "GPIO_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(pi_gpio_interface__action__GPIO_SendGoal_Response),
  GPIO_SendGoal_Response__rosidl_typesupport_introspection_c__GPIO_SendGoal_Response_message_member_array,  // message members
  GPIO_SendGoal_Response__rosidl_typesupport_introspection_c__GPIO_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GPIO_SendGoal_Response__rosidl_typesupport_introspection_c__GPIO_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GPIO_SendGoal_Response__rosidl_typesupport_introspection_c__GPIO_SendGoal_Response_message_type_support_handle = {
  0,
  &GPIO_SendGoal_Response__rosidl_typesupport_introspection_c__GPIO_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pi_gpio_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_gpio_interface, action, GPIO_SendGoal_Response)() {
  GPIO_SendGoal_Response__rosidl_typesupport_introspection_c__GPIO_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!GPIO_SendGoal_Response__rosidl_typesupport_introspection_c__GPIO_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    GPIO_SendGoal_Response__rosidl_typesupport_introspection_c__GPIO_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GPIO_SendGoal_Response__rosidl_typesupport_introspection_c__GPIO_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pi_gpio_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pi_gpio_interface__action__detail__gpio__rosidl_typesupport_introspection_c__GPIO_SendGoal_service_members = {
  "pi_gpio_interface__action",  // service namespace
  "GPIO_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // pi_gpio_interface__action__detail__gpio__rosidl_typesupport_introspection_c__GPIO_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // pi_gpio_interface__action__detail__gpio__rosidl_typesupport_introspection_c__GPIO_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t pi_gpio_interface__action__detail__gpio__rosidl_typesupport_introspection_c__GPIO_SendGoal_service_type_support_handle = {
  0,
  &pi_gpio_interface__action__detail__gpio__rosidl_typesupport_introspection_c__GPIO_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_gpio_interface, action, GPIO_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_gpio_interface, action, GPIO_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pi_gpio_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_gpio_interface, action, GPIO_SendGoal)() {
  if (!pi_gpio_interface__action__detail__gpio__rosidl_typesupport_introspection_c__GPIO_SendGoal_service_type_support_handle.typesupport_identifier) {
    pi_gpio_interface__action__detail__gpio__rosidl_typesupport_introspection_c__GPIO_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pi_gpio_interface__action__detail__gpio__rosidl_typesupport_introspection_c__GPIO_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_gpio_interface, action, GPIO_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_gpio_interface, action, GPIO_SendGoal_Response)()->data;
  }

  return &pi_gpio_interface__action__detail__gpio__rosidl_typesupport_introspection_c__GPIO_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "pi_gpio_interface/action/detail/gpio__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pi_gpio_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__functions.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GPIO_GetResult_Request__rosidl_typesupport_introspection_c__GPIO_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pi_gpio_interface__action__GPIO_GetResult_Request__init(message_memory);
}

void GPIO_GetResult_Request__rosidl_typesupport_introspection_c__GPIO_GetResult_Request_fini_function(void * message_memory)
{
  pi_gpio_interface__action__GPIO_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GPIO_GetResult_Request__rosidl_typesupport_introspection_c__GPIO_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi_gpio_interface__action__GPIO_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GPIO_GetResult_Request__rosidl_typesupport_introspection_c__GPIO_GetResult_Request_message_members = {
  "pi_gpio_interface__action",  // message namespace
  "GPIO_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(pi_gpio_interface__action__GPIO_GetResult_Request),
  GPIO_GetResult_Request__rosidl_typesupport_introspection_c__GPIO_GetResult_Request_message_member_array,  // message members
  GPIO_GetResult_Request__rosidl_typesupport_introspection_c__GPIO_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GPIO_GetResult_Request__rosidl_typesupport_introspection_c__GPIO_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GPIO_GetResult_Request__rosidl_typesupport_introspection_c__GPIO_GetResult_Request_message_type_support_handle = {
  0,
  &GPIO_GetResult_Request__rosidl_typesupport_introspection_c__GPIO_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pi_gpio_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_gpio_interface, action, GPIO_GetResult_Request)() {
  GPIO_GetResult_Request__rosidl_typesupport_introspection_c__GPIO_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!GPIO_GetResult_Request__rosidl_typesupport_introspection_c__GPIO_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    GPIO_GetResult_Request__rosidl_typesupport_introspection_c__GPIO_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GPIO_GetResult_Request__rosidl_typesupport_introspection_c__GPIO_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pi_gpio_interface/action/detail/gpio__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pi_gpio_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__functions.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "pi_gpio_interface/action/gpio.h"
// Member `result`
// already included above
// #include "pi_gpio_interface/action/detail/gpio__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GPIO_GetResult_Response__rosidl_typesupport_introspection_c__GPIO_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pi_gpio_interface__action__GPIO_GetResult_Response__init(message_memory);
}

void GPIO_GetResult_Response__rosidl_typesupport_introspection_c__GPIO_GetResult_Response_fini_function(void * message_memory)
{
  pi_gpio_interface__action__GPIO_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GPIO_GetResult_Response__rosidl_typesupport_introspection_c__GPIO_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi_gpio_interface__action__GPIO_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi_gpio_interface__action__GPIO_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GPIO_GetResult_Response__rosidl_typesupport_introspection_c__GPIO_GetResult_Response_message_members = {
  "pi_gpio_interface__action",  // message namespace
  "GPIO_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(pi_gpio_interface__action__GPIO_GetResult_Response),
  GPIO_GetResult_Response__rosidl_typesupport_introspection_c__GPIO_GetResult_Response_message_member_array,  // message members
  GPIO_GetResult_Response__rosidl_typesupport_introspection_c__GPIO_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GPIO_GetResult_Response__rosidl_typesupport_introspection_c__GPIO_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GPIO_GetResult_Response__rosidl_typesupport_introspection_c__GPIO_GetResult_Response_message_type_support_handle = {
  0,
  &GPIO_GetResult_Response__rosidl_typesupport_introspection_c__GPIO_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pi_gpio_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_gpio_interface, action, GPIO_GetResult_Response)() {
  GPIO_GetResult_Response__rosidl_typesupport_introspection_c__GPIO_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_gpio_interface, action, GPIO_Result)();
  if (!GPIO_GetResult_Response__rosidl_typesupport_introspection_c__GPIO_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    GPIO_GetResult_Response__rosidl_typesupport_introspection_c__GPIO_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GPIO_GetResult_Response__rosidl_typesupport_introspection_c__GPIO_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pi_gpio_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pi_gpio_interface__action__detail__gpio__rosidl_typesupport_introspection_c__GPIO_GetResult_service_members = {
  "pi_gpio_interface__action",  // service namespace
  "GPIO_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // pi_gpio_interface__action__detail__gpio__rosidl_typesupport_introspection_c__GPIO_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // pi_gpio_interface__action__detail__gpio__rosidl_typesupport_introspection_c__GPIO_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t pi_gpio_interface__action__detail__gpio__rosidl_typesupport_introspection_c__GPIO_GetResult_service_type_support_handle = {
  0,
  &pi_gpio_interface__action__detail__gpio__rosidl_typesupport_introspection_c__GPIO_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_gpio_interface, action, GPIO_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_gpio_interface, action, GPIO_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pi_gpio_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_gpio_interface, action, GPIO_GetResult)() {
  if (!pi_gpio_interface__action__detail__gpio__rosidl_typesupport_introspection_c__GPIO_GetResult_service_type_support_handle.typesupport_identifier) {
    pi_gpio_interface__action__detail__gpio__rosidl_typesupport_introspection_c__GPIO_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pi_gpio_interface__action__detail__gpio__rosidl_typesupport_introspection_c__GPIO_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_gpio_interface, action, GPIO_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_gpio_interface, action, GPIO_GetResult_Response)()->data;
  }

  return &pi_gpio_interface__action__detail__gpio__rosidl_typesupport_introspection_c__GPIO_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "pi_gpio_interface/action/detail/gpio__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pi_gpio_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__functions.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "pi_gpio_interface/action/gpio.h"
// Member `feedback`
// already included above
// #include "pi_gpio_interface/action/detail/gpio__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GPIO_FeedbackMessage__rosidl_typesupport_introspection_c__GPIO_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pi_gpio_interface__action__GPIO_FeedbackMessage__init(message_memory);
}

void GPIO_FeedbackMessage__rosidl_typesupport_introspection_c__GPIO_FeedbackMessage_fini_function(void * message_memory)
{
  pi_gpio_interface__action__GPIO_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GPIO_FeedbackMessage__rosidl_typesupport_introspection_c__GPIO_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi_gpio_interface__action__GPIO_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi_gpio_interface__action__GPIO_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GPIO_FeedbackMessage__rosidl_typesupport_introspection_c__GPIO_FeedbackMessage_message_members = {
  "pi_gpio_interface__action",  // message namespace
  "GPIO_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(pi_gpio_interface__action__GPIO_FeedbackMessage),
  GPIO_FeedbackMessage__rosidl_typesupport_introspection_c__GPIO_FeedbackMessage_message_member_array,  // message members
  GPIO_FeedbackMessage__rosidl_typesupport_introspection_c__GPIO_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  GPIO_FeedbackMessage__rosidl_typesupport_introspection_c__GPIO_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GPIO_FeedbackMessage__rosidl_typesupport_introspection_c__GPIO_FeedbackMessage_message_type_support_handle = {
  0,
  &GPIO_FeedbackMessage__rosidl_typesupport_introspection_c__GPIO_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pi_gpio_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_gpio_interface, action, GPIO_FeedbackMessage)() {
  GPIO_FeedbackMessage__rosidl_typesupport_introspection_c__GPIO_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  GPIO_FeedbackMessage__rosidl_typesupport_introspection_c__GPIO_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_gpio_interface, action, GPIO_Feedback)();
  if (!GPIO_FeedbackMessage__rosidl_typesupport_introspection_c__GPIO_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    GPIO_FeedbackMessage__rosidl_typesupport_introspection_c__GPIO_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GPIO_FeedbackMessage__rosidl_typesupport_introspection_c__GPIO_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
