// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pi_gpio_interface:action/GPIO.idl
// generated code does not contain a copyright notice

#ifndef PI_GPIO_INTERFACE__ACTION__DETAIL__GPIO__FUNCTIONS_H_
#define PI_GPIO_INTERFACE__ACTION__DETAIL__GPIO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pi_gpio_interface/msg/rosidl_generator_c__visibility_control.h"

#include "pi_gpio_interface/action/detail/gpio__struct.h"

/// Initialize action/GPIO message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pi_gpio_interface__action__GPIO_Goal
 * )) before or use
 * pi_gpio_interface__action__GPIO_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
bool
pi_gpio_interface__action__GPIO_Goal__init(pi_gpio_interface__action__GPIO_Goal * msg);

/// Finalize action/GPIO message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_Goal__fini(pi_gpio_interface__action__GPIO_Goal * msg);

/// Create action/GPIO message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pi_gpio_interface__action__GPIO_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
pi_gpio_interface__action__GPIO_Goal *
pi_gpio_interface__action__GPIO_Goal__create();

/// Destroy action/GPIO message.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_Goal__destroy(pi_gpio_interface__action__GPIO_Goal * msg);


/// Initialize array of action/GPIO messages.
/**
 * It allocates the memory for the number of elements and calls
 * pi_gpio_interface__action__GPIO_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
bool
pi_gpio_interface__action__GPIO_Goal__Sequence__init(pi_gpio_interface__action__GPIO_Goal__Sequence * array, size_t size);

/// Finalize array of action/GPIO messages.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_Goal__Sequence__fini(pi_gpio_interface__action__GPIO_Goal__Sequence * array);

/// Create array of action/GPIO messages.
/**
 * It allocates the memory for the array and calls
 * pi_gpio_interface__action__GPIO_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
pi_gpio_interface__action__GPIO_Goal__Sequence *
pi_gpio_interface__action__GPIO_Goal__Sequence__create(size_t size);

/// Destroy array of action/GPIO messages.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_Goal__Sequence__destroy(pi_gpio_interface__action__GPIO_Goal__Sequence * array);

/// Initialize action/GPIO message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pi_gpio_interface__action__GPIO_Result
 * )) before or use
 * pi_gpio_interface__action__GPIO_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
bool
pi_gpio_interface__action__GPIO_Result__init(pi_gpio_interface__action__GPIO_Result * msg);

/// Finalize action/GPIO message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_Result__fini(pi_gpio_interface__action__GPIO_Result * msg);

/// Create action/GPIO message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pi_gpio_interface__action__GPIO_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
pi_gpio_interface__action__GPIO_Result *
pi_gpio_interface__action__GPIO_Result__create();

/// Destroy action/GPIO message.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_Result__destroy(pi_gpio_interface__action__GPIO_Result * msg);


/// Initialize array of action/GPIO messages.
/**
 * It allocates the memory for the number of elements and calls
 * pi_gpio_interface__action__GPIO_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
bool
pi_gpio_interface__action__GPIO_Result__Sequence__init(pi_gpio_interface__action__GPIO_Result__Sequence * array, size_t size);

/// Finalize array of action/GPIO messages.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_Result__Sequence__fini(pi_gpio_interface__action__GPIO_Result__Sequence * array);

/// Create array of action/GPIO messages.
/**
 * It allocates the memory for the array and calls
 * pi_gpio_interface__action__GPIO_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
pi_gpio_interface__action__GPIO_Result__Sequence *
pi_gpio_interface__action__GPIO_Result__Sequence__create(size_t size);

/// Destroy array of action/GPIO messages.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_Result__Sequence__destroy(pi_gpio_interface__action__GPIO_Result__Sequence * array);

/// Initialize action/GPIO message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pi_gpio_interface__action__GPIO_Feedback
 * )) before or use
 * pi_gpio_interface__action__GPIO_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
bool
pi_gpio_interface__action__GPIO_Feedback__init(pi_gpio_interface__action__GPIO_Feedback * msg);

/// Finalize action/GPIO message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_Feedback__fini(pi_gpio_interface__action__GPIO_Feedback * msg);

/// Create action/GPIO message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pi_gpio_interface__action__GPIO_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
pi_gpio_interface__action__GPIO_Feedback *
pi_gpio_interface__action__GPIO_Feedback__create();

/// Destroy action/GPIO message.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_Feedback__destroy(pi_gpio_interface__action__GPIO_Feedback * msg);


/// Initialize array of action/GPIO messages.
/**
 * It allocates the memory for the number of elements and calls
 * pi_gpio_interface__action__GPIO_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
bool
pi_gpio_interface__action__GPIO_Feedback__Sequence__init(pi_gpio_interface__action__GPIO_Feedback__Sequence * array, size_t size);

/// Finalize array of action/GPIO messages.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_Feedback__Sequence__fini(pi_gpio_interface__action__GPIO_Feedback__Sequence * array);

/// Create array of action/GPIO messages.
/**
 * It allocates the memory for the array and calls
 * pi_gpio_interface__action__GPIO_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
pi_gpio_interface__action__GPIO_Feedback__Sequence *
pi_gpio_interface__action__GPIO_Feedback__Sequence__create(size_t size);

/// Destroy array of action/GPIO messages.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_Feedback__Sequence__destroy(pi_gpio_interface__action__GPIO_Feedback__Sequence * array);

/// Initialize action/GPIO message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pi_gpio_interface__action__GPIO_SendGoal_Request
 * )) before or use
 * pi_gpio_interface__action__GPIO_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
bool
pi_gpio_interface__action__GPIO_SendGoal_Request__init(pi_gpio_interface__action__GPIO_SendGoal_Request * msg);

/// Finalize action/GPIO message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_SendGoal_Request__fini(pi_gpio_interface__action__GPIO_SendGoal_Request * msg);

/// Create action/GPIO message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pi_gpio_interface__action__GPIO_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
pi_gpio_interface__action__GPIO_SendGoal_Request *
pi_gpio_interface__action__GPIO_SendGoal_Request__create();

/// Destroy action/GPIO message.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_SendGoal_Request__destroy(pi_gpio_interface__action__GPIO_SendGoal_Request * msg);


/// Initialize array of action/GPIO messages.
/**
 * It allocates the memory for the number of elements and calls
 * pi_gpio_interface__action__GPIO_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
bool
pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence__init(pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/GPIO messages.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence__fini(pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence * array);

/// Create array of action/GPIO messages.
/**
 * It allocates the memory for the array and calls
 * pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence *
pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/GPIO messages.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence__destroy(pi_gpio_interface__action__GPIO_SendGoal_Request__Sequence * array);

/// Initialize action/GPIO message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pi_gpio_interface__action__GPIO_SendGoal_Response
 * )) before or use
 * pi_gpio_interface__action__GPIO_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
bool
pi_gpio_interface__action__GPIO_SendGoal_Response__init(pi_gpio_interface__action__GPIO_SendGoal_Response * msg);

/// Finalize action/GPIO message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_SendGoal_Response__fini(pi_gpio_interface__action__GPIO_SendGoal_Response * msg);

/// Create action/GPIO message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pi_gpio_interface__action__GPIO_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
pi_gpio_interface__action__GPIO_SendGoal_Response *
pi_gpio_interface__action__GPIO_SendGoal_Response__create();

/// Destroy action/GPIO message.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_SendGoal_Response__destroy(pi_gpio_interface__action__GPIO_SendGoal_Response * msg);


/// Initialize array of action/GPIO messages.
/**
 * It allocates the memory for the number of elements and calls
 * pi_gpio_interface__action__GPIO_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
bool
pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence__init(pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/GPIO messages.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence__fini(pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence * array);

/// Create array of action/GPIO messages.
/**
 * It allocates the memory for the array and calls
 * pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence *
pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/GPIO messages.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence__destroy(pi_gpio_interface__action__GPIO_SendGoal_Response__Sequence * array);

/// Initialize action/GPIO message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pi_gpio_interface__action__GPIO_GetResult_Request
 * )) before or use
 * pi_gpio_interface__action__GPIO_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
bool
pi_gpio_interface__action__GPIO_GetResult_Request__init(pi_gpio_interface__action__GPIO_GetResult_Request * msg);

/// Finalize action/GPIO message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_GetResult_Request__fini(pi_gpio_interface__action__GPIO_GetResult_Request * msg);

/// Create action/GPIO message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pi_gpio_interface__action__GPIO_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
pi_gpio_interface__action__GPIO_GetResult_Request *
pi_gpio_interface__action__GPIO_GetResult_Request__create();

/// Destroy action/GPIO message.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_GetResult_Request__destroy(pi_gpio_interface__action__GPIO_GetResult_Request * msg);


/// Initialize array of action/GPIO messages.
/**
 * It allocates the memory for the number of elements and calls
 * pi_gpio_interface__action__GPIO_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
bool
pi_gpio_interface__action__GPIO_GetResult_Request__Sequence__init(pi_gpio_interface__action__GPIO_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/GPIO messages.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_GetResult_Request__Sequence__fini(pi_gpio_interface__action__GPIO_GetResult_Request__Sequence * array);

/// Create array of action/GPIO messages.
/**
 * It allocates the memory for the array and calls
 * pi_gpio_interface__action__GPIO_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
pi_gpio_interface__action__GPIO_GetResult_Request__Sequence *
pi_gpio_interface__action__GPIO_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/GPIO messages.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_GetResult_Request__Sequence__destroy(pi_gpio_interface__action__GPIO_GetResult_Request__Sequence * array);

/// Initialize action/GPIO message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pi_gpio_interface__action__GPIO_GetResult_Response
 * )) before or use
 * pi_gpio_interface__action__GPIO_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
bool
pi_gpio_interface__action__GPIO_GetResult_Response__init(pi_gpio_interface__action__GPIO_GetResult_Response * msg);

/// Finalize action/GPIO message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_GetResult_Response__fini(pi_gpio_interface__action__GPIO_GetResult_Response * msg);

/// Create action/GPIO message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pi_gpio_interface__action__GPIO_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
pi_gpio_interface__action__GPIO_GetResult_Response *
pi_gpio_interface__action__GPIO_GetResult_Response__create();

/// Destroy action/GPIO message.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_GetResult_Response__destroy(pi_gpio_interface__action__GPIO_GetResult_Response * msg);


/// Initialize array of action/GPIO messages.
/**
 * It allocates the memory for the number of elements and calls
 * pi_gpio_interface__action__GPIO_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
bool
pi_gpio_interface__action__GPIO_GetResult_Response__Sequence__init(pi_gpio_interface__action__GPIO_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/GPIO messages.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_GetResult_Response__Sequence__fini(pi_gpio_interface__action__GPIO_GetResult_Response__Sequence * array);

/// Create array of action/GPIO messages.
/**
 * It allocates the memory for the array and calls
 * pi_gpio_interface__action__GPIO_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
pi_gpio_interface__action__GPIO_GetResult_Response__Sequence *
pi_gpio_interface__action__GPIO_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/GPIO messages.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_GetResult_Response__Sequence__destroy(pi_gpio_interface__action__GPIO_GetResult_Response__Sequence * array);

/// Initialize action/GPIO message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pi_gpio_interface__action__GPIO_FeedbackMessage
 * )) before or use
 * pi_gpio_interface__action__GPIO_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
bool
pi_gpio_interface__action__GPIO_FeedbackMessage__init(pi_gpio_interface__action__GPIO_FeedbackMessage * msg);

/// Finalize action/GPIO message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_FeedbackMessage__fini(pi_gpio_interface__action__GPIO_FeedbackMessage * msg);

/// Create action/GPIO message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pi_gpio_interface__action__GPIO_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
pi_gpio_interface__action__GPIO_FeedbackMessage *
pi_gpio_interface__action__GPIO_FeedbackMessage__create();

/// Destroy action/GPIO message.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_FeedbackMessage__destroy(pi_gpio_interface__action__GPIO_FeedbackMessage * msg);


/// Initialize array of action/GPIO messages.
/**
 * It allocates the memory for the number of elements and calls
 * pi_gpio_interface__action__GPIO_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
bool
pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence__init(pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/GPIO messages.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence__fini(pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence * array);

/// Create array of action/GPIO messages.
/**
 * It allocates the memory for the array and calls
 * pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence *
pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/GPIO messages.
/**
 * It calls
 * pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi_gpio_interface
void
pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence__destroy(pi_gpio_interface__action__GPIO_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // PI_GPIO_INTERFACE__ACTION__DETAIL__GPIO__FUNCTIONS_H_
