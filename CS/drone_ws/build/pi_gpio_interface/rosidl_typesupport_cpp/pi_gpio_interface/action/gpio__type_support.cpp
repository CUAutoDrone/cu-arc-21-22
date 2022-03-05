// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from pi_gpio_interface:action/GPIO.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "pi_gpio_interface/action/detail/gpio__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace pi_gpio_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GPIO_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GPIO_Goal_type_support_ids_t;

static const _GPIO_Goal_type_support_ids_t _GPIO_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GPIO_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GPIO_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GPIO_Goal_type_support_symbol_names_t _GPIO_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pi_gpio_interface, action, GPIO_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pi_gpio_interface, action, GPIO_Goal)),
  }
};

typedef struct _GPIO_Goal_type_support_data_t
{
  void * data[2];
} _GPIO_Goal_type_support_data_t;

static _GPIO_Goal_type_support_data_t _GPIO_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GPIO_Goal_message_typesupport_map = {
  2,
  "pi_gpio_interface",
  &_GPIO_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_GPIO_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_GPIO_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GPIO_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GPIO_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pi_gpio_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pi_gpio_interface::action::GPIO_Goal>()
{
  return &::pi_gpio_interface::action::rosidl_typesupport_cpp::GPIO_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pi_gpio_interface, action, GPIO_Goal)() {
  return get_message_type_support_handle<pi_gpio_interface::action::GPIO_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pi_gpio_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GPIO_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GPIO_Result_type_support_ids_t;

static const _GPIO_Result_type_support_ids_t _GPIO_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GPIO_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GPIO_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GPIO_Result_type_support_symbol_names_t _GPIO_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pi_gpio_interface, action, GPIO_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pi_gpio_interface, action, GPIO_Result)),
  }
};

typedef struct _GPIO_Result_type_support_data_t
{
  void * data[2];
} _GPIO_Result_type_support_data_t;

static _GPIO_Result_type_support_data_t _GPIO_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GPIO_Result_message_typesupport_map = {
  2,
  "pi_gpio_interface",
  &_GPIO_Result_message_typesupport_ids.typesupport_identifier[0],
  &_GPIO_Result_message_typesupport_symbol_names.symbol_name[0],
  &_GPIO_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GPIO_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GPIO_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pi_gpio_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pi_gpio_interface::action::GPIO_Result>()
{
  return &::pi_gpio_interface::action::rosidl_typesupport_cpp::GPIO_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pi_gpio_interface, action, GPIO_Result)() {
  return get_message_type_support_handle<pi_gpio_interface::action::GPIO_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pi_gpio_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GPIO_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GPIO_Feedback_type_support_ids_t;

static const _GPIO_Feedback_type_support_ids_t _GPIO_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GPIO_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GPIO_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GPIO_Feedback_type_support_symbol_names_t _GPIO_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pi_gpio_interface, action, GPIO_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pi_gpio_interface, action, GPIO_Feedback)),
  }
};

typedef struct _GPIO_Feedback_type_support_data_t
{
  void * data[2];
} _GPIO_Feedback_type_support_data_t;

static _GPIO_Feedback_type_support_data_t _GPIO_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GPIO_Feedback_message_typesupport_map = {
  2,
  "pi_gpio_interface",
  &_GPIO_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_GPIO_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_GPIO_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GPIO_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GPIO_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pi_gpio_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pi_gpio_interface::action::GPIO_Feedback>()
{
  return &::pi_gpio_interface::action::rosidl_typesupport_cpp::GPIO_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pi_gpio_interface, action, GPIO_Feedback)() {
  return get_message_type_support_handle<pi_gpio_interface::action::GPIO_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pi_gpio_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GPIO_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GPIO_SendGoal_Request_type_support_ids_t;

static const _GPIO_SendGoal_Request_type_support_ids_t _GPIO_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GPIO_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GPIO_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GPIO_SendGoal_Request_type_support_symbol_names_t _GPIO_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pi_gpio_interface, action, GPIO_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pi_gpio_interface, action, GPIO_SendGoal_Request)),
  }
};

typedef struct _GPIO_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _GPIO_SendGoal_Request_type_support_data_t;

static _GPIO_SendGoal_Request_type_support_data_t _GPIO_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GPIO_SendGoal_Request_message_typesupport_map = {
  2,
  "pi_gpio_interface",
  &_GPIO_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GPIO_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GPIO_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GPIO_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GPIO_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pi_gpio_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pi_gpio_interface::action::GPIO_SendGoal_Request>()
{
  return &::pi_gpio_interface::action::rosidl_typesupport_cpp::GPIO_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pi_gpio_interface, action, GPIO_SendGoal_Request)() {
  return get_message_type_support_handle<pi_gpio_interface::action::GPIO_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pi_gpio_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GPIO_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GPIO_SendGoal_Response_type_support_ids_t;

static const _GPIO_SendGoal_Response_type_support_ids_t _GPIO_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GPIO_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GPIO_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GPIO_SendGoal_Response_type_support_symbol_names_t _GPIO_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pi_gpio_interface, action, GPIO_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pi_gpio_interface, action, GPIO_SendGoal_Response)),
  }
};

typedef struct _GPIO_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _GPIO_SendGoal_Response_type_support_data_t;

static _GPIO_SendGoal_Response_type_support_data_t _GPIO_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GPIO_SendGoal_Response_message_typesupport_map = {
  2,
  "pi_gpio_interface",
  &_GPIO_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GPIO_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GPIO_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GPIO_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GPIO_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pi_gpio_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pi_gpio_interface::action::GPIO_SendGoal_Response>()
{
  return &::pi_gpio_interface::action::rosidl_typesupport_cpp::GPIO_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pi_gpio_interface, action, GPIO_SendGoal_Response)() {
  return get_message_type_support_handle<pi_gpio_interface::action::GPIO_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pi_gpio_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GPIO_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GPIO_SendGoal_type_support_ids_t;

static const _GPIO_SendGoal_type_support_ids_t _GPIO_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GPIO_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GPIO_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GPIO_SendGoal_type_support_symbol_names_t _GPIO_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pi_gpio_interface, action, GPIO_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pi_gpio_interface, action, GPIO_SendGoal)),
  }
};

typedef struct _GPIO_SendGoal_type_support_data_t
{
  void * data[2];
} _GPIO_SendGoal_type_support_data_t;

static _GPIO_SendGoal_type_support_data_t _GPIO_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GPIO_SendGoal_service_typesupport_map = {
  2,
  "pi_gpio_interface",
  &_GPIO_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_GPIO_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_GPIO_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GPIO_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GPIO_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pi_gpio_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<pi_gpio_interface::action::GPIO_SendGoal>()
{
  return &::pi_gpio_interface::action::rosidl_typesupport_cpp::GPIO_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pi_gpio_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GPIO_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GPIO_GetResult_Request_type_support_ids_t;

static const _GPIO_GetResult_Request_type_support_ids_t _GPIO_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GPIO_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GPIO_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GPIO_GetResult_Request_type_support_symbol_names_t _GPIO_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pi_gpio_interface, action, GPIO_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pi_gpio_interface, action, GPIO_GetResult_Request)),
  }
};

typedef struct _GPIO_GetResult_Request_type_support_data_t
{
  void * data[2];
} _GPIO_GetResult_Request_type_support_data_t;

static _GPIO_GetResult_Request_type_support_data_t _GPIO_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GPIO_GetResult_Request_message_typesupport_map = {
  2,
  "pi_gpio_interface",
  &_GPIO_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GPIO_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GPIO_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GPIO_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GPIO_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pi_gpio_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pi_gpio_interface::action::GPIO_GetResult_Request>()
{
  return &::pi_gpio_interface::action::rosidl_typesupport_cpp::GPIO_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pi_gpio_interface, action, GPIO_GetResult_Request)() {
  return get_message_type_support_handle<pi_gpio_interface::action::GPIO_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pi_gpio_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GPIO_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GPIO_GetResult_Response_type_support_ids_t;

static const _GPIO_GetResult_Response_type_support_ids_t _GPIO_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GPIO_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GPIO_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GPIO_GetResult_Response_type_support_symbol_names_t _GPIO_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pi_gpio_interface, action, GPIO_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pi_gpio_interface, action, GPIO_GetResult_Response)),
  }
};

typedef struct _GPIO_GetResult_Response_type_support_data_t
{
  void * data[2];
} _GPIO_GetResult_Response_type_support_data_t;

static _GPIO_GetResult_Response_type_support_data_t _GPIO_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GPIO_GetResult_Response_message_typesupport_map = {
  2,
  "pi_gpio_interface",
  &_GPIO_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GPIO_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GPIO_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GPIO_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GPIO_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pi_gpio_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pi_gpio_interface::action::GPIO_GetResult_Response>()
{
  return &::pi_gpio_interface::action::rosidl_typesupport_cpp::GPIO_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pi_gpio_interface, action, GPIO_GetResult_Response)() {
  return get_message_type_support_handle<pi_gpio_interface::action::GPIO_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pi_gpio_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GPIO_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GPIO_GetResult_type_support_ids_t;

static const _GPIO_GetResult_type_support_ids_t _GPIO_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GPIO_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GPIO_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GPIO_GetResult_type_support_symbol_names_t _GPIO_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pi_gpio_interface, action, GPIO_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pi_gpio_interface, action, GPIO_GetResult)),
  }
};

typedef struct _GPIO_GetResult_type_support_data_t
{
  void * data[2];
} _GPIO_GetResult_type_support_data_t;

static _GPIO_GetResult_type_support_data_t _GPIO_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GPIO_GetResult_service_typesupport_map = {
  2,
  "pi_gpio_interface",
  &_GPIO_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_GPIO_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_GPIO_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GPIO_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GPIO_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pi_gpio_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<pi_gpio_interface::action::GPIO_GetResult>()
{
  return &::pi_gpio_interface::action::rosidl_typesupport_cpp::GPIO_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pi_gpio_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GPIO_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GPIO_FeedbackMessage_type_support_ids_t;

static const _GPIO_FeedbackMessage_type_support_ids_t _GPIO_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GPIO_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GPIO_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GPIO_FeedbackMessage_type_support_symbol_names_t _GPIO_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pi_gpio_interface, action, GPIO_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pi_gpio_interface, action, GPIO_FeedbackMessage)),
  }
};

typedef struct _GPIO_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _GPIO_FeedbackMessage_type_support_data_t;

static _GPIO_FeedbackMessage_type_support_data_t _GPIO_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GPIO_FeedbackMessage_message_typesupport_map = {
  2,
  "pi_gpio_interface",
  &_GPIO_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_GPIO_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_GPIO_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GPIO_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GPIO_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pi_gpio_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pi_gpio_interface::action::GPIO_FeedbackMessage>()
{
  return &::pi_gpio_interface::action::rosidl_typesupport_cpp::GPIO_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pi_gpio_interface, action, GPIO_FeedbackMessage)() {
  return get_message_type_support_handle<pi_gpio_interface::action::GPIO_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "pi_gpio_interface/action/detail/gpio__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace pi_gpio_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t GPIO_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pi_gpio_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<pi_gpio_interface::action::GPIO>()
{
  using ::pi_gpio_interface::action::rosidl_typesupport_cpp::GPIO_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  GPIO_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::pi_gpio_interface::action::GPIO::Impl::SendGoalService>();
  GPIO_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::pi_gpio_interface::action::GPIO::Impl::GetResultService>();
  GPIO_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::pi_gpio_interface::action::GPIO::Impl::CancelGoalService>();
  GPIO_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::pi_gpio_interface::action::GPIO::Impl::FeedbackMessage>();
  GPIO_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::pi_gpio_interface::action::GPIO::Impl::GoalStatusMessage>();
  return &GPIO_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
