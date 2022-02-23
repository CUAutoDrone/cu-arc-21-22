// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pi_gpio_interface:action/GPIO.idl
// generated code does not contain a copyright notice
#include "pi_gpio_interface/action/detail/gpio__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `gpio`
#include "rosidl_runtime_c/string_functions.h"

bool
pi_gpio_interface__action__GPIO_Goal__init(pi_gpio_interface__action__GPIO_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // gpio
  if (!rosidl_runtime_c__String__init(&msg->gpio)) {
    pi_gpio_interface__action__GPIO_Goal__fini(msg);
    return false;
  }
  return true;
}

void
pi_gpio_interface__action__GPIO_Goal__fini(pi_gpio_interface__action__GPIO_Goal * msg)
{
  if (!msg) {
    return;
  }
  // gpio
  rosidl_runtime_c__String__fini(&msg->gpio);
}

pi_gpio_interface__action__GPIO_Goal *
pi_gpio_interface__action__GPIO_Goal__create()
{
  pi_gpio_interface__action__GPIO_Goal * msg = (pi_gpio_interface__action__GPIO_Goal *)malloc(sizeof(pi_gpio_interface__action__GPIO_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pi_gpio_interface__action__GPIO_Goal));
  bool success = pi_gpio_interface__action__GPIO_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pi_gpio_interface__action__GPIO_Goal__destroy(pi_gpio_interface__action__GPIO_Goal * msg)
{
  if (msg) {
    pi_gpio_interface__action__GPIO_Goal__fini(msg);
  }
  free(msg);
}


bool
pi_gpio_interface__action__GPIO_Goal__Sequence__init(pi_gpio_interface__action__GPIO_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pi_gpio_interface__action__GPIO_Goal * data = NULL;
  if (size) {
    data = (pi_gpio_interface__action__GPIO_Goal *)calloc(size, sizeof(pi_gpio_interface__action__GPIO_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pi_gpio_interface__action__GPIO_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pi_gpio_interface__action__GPIO_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pi_gpio_interface__action__GPIO_Goal__Sequence__fini(pi_gpio_interface__action__GPIO_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pi_gpio_interface__action__GPIO_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pi_gpio_interface__action__GPIO_Goal__Sequence *
pi_gpio_interface__action__GPIO_Goal__Sequence__create(size_t size)
{
  pi_gpio_interface__action__GPIO_Goal__Sequence * array = (pi_gpio_interface__action__GPIO_Goal__Sequence *)malloc(sizeof(pi_gpio_interface__action__GPIO_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pi_gpio_interface__action__GPIO_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pi_gpio_interface__action__GPIO_Goal__Sequence__destroy(pi_gpio_interface__action__GPIO_Goal__Sequence * array)
{
  if (array) {
    pi_gpio_interface__action__GPIO_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
pi_gpio_interface__action__GPIO_Result__init(pi_gpio_interface__action__GPIO_Result * msg)
{
  if (!msg) {
    return false;
  }
  // value
  return true;
}

void
pi_gpio_interface__action__GPIO_Result__fini(pi_gpio_interface__action__GPIO_Result * msg)
{
  if (!msg) {
    return;
  }
  // value
}

pi_gpio_interface__action__GPIO_Result *
pi_gpio_interface__action__GPIO_Result__create()
{
  pi_gpio_interface__action__GPIO_Result * msg = (pi_gpio_interface__action__GPIO_Result *)malloc(sizeof(pi_gpio_interface__action__GPIO_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pi_gpio_interface__action__GPIO_Result));
  bool success = pi_gpio_interface__action__GPIO_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pi_gpio_interface__action__GPIO_Result__destroy(pi_gpio_interface__action__GPIO_Result * msg)
{
  if (msg) {
    pi_gpio_interface__action__GPIO_Result__fini(msg);
  }
  free(msg);
}


bool
pi_gpio_interface__action__GPIO_Result__Sequence__init(pi_gpio_interface__action__GPIO_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pi_gpio_interface__action__GPIO_Result * data = NULL;
  if (size) {
    data = (pi_gpio_interface__action__GPIO_Result *)calloc(size, sizeof(pi_gpio_interface__action__GPIO_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pi_gpio_interface__action__GPIO_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pi_gpio_interface__action__GPIO_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pi_gpio_interface__action__GPIO_Result__Sequence__fini(pi_gpio_interface__action__GPIO_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pi_gpio_interface__action__GPIO_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pi_gpio_interface__action__GPIO_Result__Sequence *
pi_gpio_interface__action__GPIO_Result__Sequence__create(size_t size)
{
  pi_gpio_interface__action__GPIO_Result__Sequence * array = (pi_gpio_interface__action__GPIO_Result__Sequence *)malloc(sizeof(pi_gpio_interface__action__GPIO_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pi_gpio_interface__action__GPIO_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pi_gpio_interface__action__GPIO_Result__Sequence__destroy(pi_gpio_interface__action__GPIO_Result__Sequence * array)
{
  if (array) {
    pi_gpio_interface__action__GPIO_Result__Sequence__fini(array);
  }
  free(array);
}


bool
pi_gpio_interface__action__GPIO_Feedback__init(pi_gpio_interface__action__GPIO_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  return true;
}

void
pi_gpio_interface__action__GPIO_Feedback__fini(pi_gpio_interface__action__GPIO_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback
}

pi_gpio_interface__action__GPIO_Feedback *
pi_gpio_interface__action__GPIO_Feedback__create()
{
  pi_gpio_interface__action__GPIO_Feedback * msg = (pi_gpio_interface__action__GPIO_Feedback *)malloc(sizeof(pi_gpio_interface__action__GPIO_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pi_gpio_interface__action__GPIO_Feedback));
  bool success = pi_gpio_interface__action__GPIO_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pi_gpio_interface__action__GPIO_Feedback__destroy(pi_gpio_interface__action__GPIO_Feedback * msg)
{
  if (msg) {
    pi_gpio_interface__action__GPIO_Feedback__fini(msg);
  }
  free(msg);
}


bool
pi_gpio_interface__action__GPIO_Feedback__Sequence__init(pi_gpio_interface__action__GPIO_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pi_gpio_interface__action__GPIO_Feedback * data = NULL;
  if (size) {
    data = (pi_gpio_interface__action__GPIO_Feedback *)calloc(size, sizeof(pi_gpio_interface__action__GPIO_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pi_gpio_interface__action__GPIO_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pi_gpio_interface__action__GPIO_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pi_gpio_interface__action__GPIO_Feedback__Sequence__fini(pi_gpio_interface__action__GPIO_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pi_gpio_interface__action__GPIO_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pi_gpio_interface__action__GPIO_Feedback__Sequence *
pi_gpio_interface__action__GPIO_Feedback__Sequence__create(size_t size)
{
  pi_gpio_interface__action__GPIO_Feedback__Sequence * array = (pi_gpio_interface__action__GPIO_Feedback__Sequence *)malloc(sizeof(pi_gpio_interface__action__GPIO_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pi_gpio_interface__action__GPIO_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pi_gpio_interface__action__GPIO_Feedback__Sequence__destroy(pi_gpio_interface__action__GPIO_Feedback__Sequence * array)
{
  if (array) {
    pi_gpio_interface__action__GPIO_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "pi_gpio_interface/action/detail/gpio__functions.h"

bool
pi_gpio_interface__action__GPIO_SendGoal_Request__init(pi_gpio_interface__action__GPIO_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pi_gpio_interface__action__GPIO_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!pi_gpio_interface__action__GPIO_Goal__init(&msg->goal)) {
    pi_gpio_interface__action__GPIO_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
pi_gpio_interface__action__GPIO_SendGoal_Request__fini(pi_gpio_interface__action__GPIO_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  pi_gpio_interface__action__GPIO_Goal__fini(&msg->goal);
}

pi_gpio_interface__action__GPIO_SendGoal_Request *
pi_gpio_interface__action__GPIO_SendGoal_Request__create()
{
  pi_gpio_interface__action__GPIO_SendGoal_Request * msg = (pi_gpio_interface__action__GPIO_SendGoal_Request *)malloc(sizeof(pi_gpio_interface__action__GPIO_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pi_gpio_interface__action__GPIO_SendGoal_Request));
  bool success = pi_gpio_interface__action__GPIO_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pi_gpio_interface__action__GPIO_SendGoal_Request__destroy(pi_gpio_interface__action__GPIO_SendGoal_Request * msg)
{
  if (msg) {
    pi_gpio_interface__action__GPIO_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence__init(pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pi_gpio_interface__action__GPIO_SendGoal_Request * data = NULL;
  if (size) {
    data = (pi_gpio_interface__action__GPIO_SendGoal_Request *)calloc(size, sizeof(pi_gpio_interface__action__GPIO_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pi_gpio_interface__action__GPIO_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pi_gpio_interface__action__GPIO_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence__fini(pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pi_gpio_interface__action__GPIO_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence *
pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence__create(size_t size)
{
  pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence * array = (pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence *)malloc(sizeof(pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence__destroy(pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence * array)
{
  if (array) {
    pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
pi_gpio_interface__action__GPIO_SendGoal_Response__init(pi_gpio_interface__action__GPIO_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    pi_gpio_interface__action__GPIO_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
pi_gpio_interface__action__GPIO_SendGoal_Response__fini(pi_gpio_interface__action__GPIO_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

pi_gpio_interface__action__GPIO_SendGoal_Response *
pi_gpio_interface__action__GPIO_SendGoal_Response__create()
{
  pi_gpio_interface__action__GPIO_SendGoal_Response * msg = (pi_gpio_interface__action__GPIO_SendGoal_Response *)malloc(sizeof(pi_gpio_interface__action__GPIO_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pi_gpio_interface__action__GPIO_SendGoal_Response));
  bool success = pi_gpio_interface__action__GPIO_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pi_gpio_interface__action__GPIO_SendGoal_Response__destroy(pi_gpio_interface__action__GPIO_SendGoal_Response * msg)
{
  if (msg) {
    pi_gpio_interface__action__GPIO_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence__init(pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pi_gpio_interface__action__GPIO_SendGoal_Response * data = NULL;
  if (size) {
    data = (pi_gpio_interface__action__GPIO_SendGoal_Response *)calloc(size, sizeof(pi_gpio_interface__action__GPIO_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pi_gpio_interface__action__GPIO_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pi_gpio_interface__action__GPIO_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence__fini(pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pi_gpio_interface__action__GPIO_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence *
pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence__create(size_t size)
{
  pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence * array = (pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence *)malloc(sizeof(pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence__destroy(pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence * array)
{
  if (array) {
    pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
pi_gpio_interface__action__GPIO_GetResult_Request__init(pi_gpio_interface__action__GPIO_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pi_gpio_interface__action__GPIO_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
pi_gpio_interface__action__GPIO_GetResult_Request__fini(pi_gpio_interface__action__GPIO_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

pi_gpio_interface__action__GPIO_GetResult_Request *
pi_gpio_interface__action__GPIO_GetResult_Request__create()
{
  pi_gpio_interface__action__GPIO_GetResult_Request * msg = (pi_gpio_interface__action__GPIO_GetResult_Request *)malloc(sizeof(pi_gpio_interface__action__GPIO_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pi_gpio_interface__action__GPIO_GetResult_Request));
  bool success = pi_gpio_interface__action__GPIO_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pi_gpio_interface__action__GPIO_GetResult_Request__destroy(pi_gpio_interface__action__GPIO_GetResult_Request * msg)
{
  if (msg) {
    pi_gpio_interface__action__GPIO_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
pi_gpio_interface__action__GPIO_GetResult_Request__Sequence__init(pi_gpio_interface__action__GPIO_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pi_gpio_interface__action__GPIO_GetResult_Request * data = NULL;
  if (size) {
    data = (pi_gpio_interface__action__GPIO_GetResult_Request *)calloc(size, sizeof(pi_gpio_interface__action__GPIO_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pi_gpio_interface__action__GPIO_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pi_gpio_interface__action__GPIO_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pi_gpio_interface__action__GPIO_GetResult_Request__Sequence__fini(pi_gpio_interface__action__GPIO_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pi_gpio_interface__action__GPIO_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pi_gpio_interface__action__GPIO_GetResult_Request__Sequence *
pi_gpio_interface__action__GPIO_GetResult_Request__Sequence__create(size_t size)
{
  pi_gpio_interface__action__GPIO_GetResult_Request__Sequence * array = (pi_gpio_interface__action__GPIO_GetResult_Request__Sequence *)malloc(sizeof(pi_gpio_interface__action__GPIO_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pi_gpio_interface__action__GPIO_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pi_gpio_interface__action__GPIO_GetResult_Request__Sequence__destroy(pi_gpio_interface__action__GPIO_GetResult_Request__Sequence * array)
{
  if (array) {
    pi_gpio_interface__action__GPIO_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "pi_gpio_interface/action/detail/gpio__functions.h"

bool
pi_gpio_interface__action__GPIO_GetResult_Response__init(pi_gpio_interface__action__GPIO_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!pi_gpio_interface__action__GPIO_Result__init(&msg->result)) {
    pi_gpio_interface__action__GPIO_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
pi_gpio_interface__action__GPIO_GetResult_Response__fini(pi_gpio_interface__action__GPIO_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  pi_gpio_interface__action__GPIO_Result__fini(&msg->result);
}

pi_gpio_interface__action__GPIO_GetResult_Response *
pi_gpio_interface__action__GPIO_GetResult_Response__create()
{
  pi_gpio_interface__action__GPIO_GetResult_Response * msg = (pi_gpio_interface__action__GPIO_GetResult_Response *)malloc(sizeof(pi_gpio_interface__action__GPIO_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pi_gpio_interface__action__GPIO_GetResult_Response));
  bool success = pi_gpio_interface__action__GPIO_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pi_gpio_interface__action__GPIO_GetResult_Response__destroy(pi_gpio_interface__action__GPIO_GetResult_Response * msg)
{
  if (msg) {
    pi_gpio_interface__action__GPIO_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
pi_gpio_interface__action__GPIO_GetResult_Response__Sequence__init(pi_gpio_interface__action__GPIO_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pi_gpio_interface__action__GPIO_GetResult_Response * data = NULL;
  if (size) {
    data = (pi_gpio_interface__action__GPIO_GetResult_Response *)calloc(size, sizeof(pi_gpio_interface__action__GPIO_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pi_gpio_interface__action__GPIO_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pi_gpio_interface__action__GPIO_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pi_gpio_interface__action__GPIO_GetResult_Response__Sequence__fini(pi_gpio_interface__action__GPIO_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pi_gpio_interface__action__GPIO_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pi_gpio_interface__action__GPIO_GetResult_Response__Sequence *
pi_gpio_interface__action__GPIO_GetResult_Response__Sequence__create(size_t size)
{
  pi_gpio_interface__action__GPIO_GetResult_Response__Sequence * array = (pi_gpio_interface__action__GPIO_GetResult_Response__Sequence *)malloc(sizeof(pi_gpio_interface__action__GPIO_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pi_gpio_interface__action__GPIO_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pi_gpio_interface__action__GPIO_GetResult_Response__Sequence__destroy(pi_gpio_interface__action__GPIO_GetResult_Response__Sequence * array)
{
  if (array) {
    pi_gpio_interface__action__GPIO_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "pi_gpio_interface/action/detail/gpio__functions.h"

bool
pi_gpio_interface__action__GPIO_FeedbackMessage__init(pi_gpio_interface__action__GPIO_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pi_gpio_interface__action__GPIO_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!pi_gpio_interface__action__GPIO_Feedback__init(&msg->feedback)) {
    pi_gpio_interface__action__GPIO_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
pi_gpio_interface__action__GPIO_FeedbackMessage__fini(pi_gpio_interface__action__GPIO_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  pi_gpio_interface__action__GPIO_Feedback__fini(&msg->feedback);
}

pi_gpio_interface__action__GPIO_FeedbackMessage *
pi_gpio_interface__action__GPIO_FeedbackMessage__create()
{
  pi_gpio_interface__action__GPIO_FeedbackMessage * msg = (pi_gpio_interface__action__GPIO_FeedbackMessage *)malloc(sizeof(pi_gpio_interface__action__GPIO_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pi_gpio_interface__action__GPIO_FeedbackMessage));
  bool success = pi_gpio_interface__action__GPIO_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pi_gpio_interface__action__GPIO_FeedbackMessage__destroy(pi_gpio_interface__action__GPIO_FeedbackMessage * msg)
{
  if (msg) {
    pi_gpio_interface__action__GPIO_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence__init(pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pi_gpio_interface__action__GPIO_FeedbackMessage * data = NULL;
  if (size) {
    data = (pi_gpio_interface__action__GPIO_FeedbackMessage *)calloc(size, sizeof(pi_gpio_interface__action__GPIO_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pi_gpio_interface__action__GPIO_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pi_gpio_interface__action__GPIO_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence__fini(pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pi_gpio_interface__action__GPIO_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence *
pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence__create(size_t size)
{
  pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence * array = (pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence *)malloc(sizeof(pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence__destroy(pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence * array)
{
  if (array) {
    pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
