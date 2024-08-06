// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from base_interfaces_demo:srv/CheckEmergency.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__SRV__DETAIL__CHECK_EMERGENCY__FUNCTIONS_H_
#define BASE_INTERFACES_DEMO__SRV__DETAIL__CHECK_EMERGENCY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "base_interfaces_demo/msg/rosidl_generator_c__visibility_control.h"

#include "base_interfaces_demo/srv/detail/check_emergency__struct.h"

/// Initialize srv/CheckEmergency message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_interfaces_demo__srv__CheckEmergency_Request
 * )) before or use
 * base_interfaces_demo__srv__CheckEmergency_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__CheckEmergency_Request__init(base_interfaces_demo__srv__CheckEmergency_Request * msg);

/// Finalize srv/CheckEmergency message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__srv__CheckEmergency_Request__fini(base_interfaces_demo__srv__CheckEmergency_Request * msg);

/// Create srv/CheckEmergency message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_interfaces_demo__srv__CheckEmergency_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__srv__CheckEmergency_Request *
base_interfaces_demo__srv__CheckEmergency_Request__create();

/// Destroy srv/CheckEmergency message.
/**
 * It calls
 * base_interfaces_demo__srv__CheckEmergency_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__srv__CheckEmergency_Request__destroy(base_interfaces_demo__srv__CheckEmergency_Request * msg);

/// Check for srv/CheckEmergency message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__CheckEmergency_Request__are_equal(const base_interfaces_demo__srv__CheckEmergency_Request * lhs, const base_interfaces_demo__srv__CheckEmergency_Request * rhs);

/// Copy a srv/CheckEmergency message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__CheckEmergency_Request__copy(
  const base_interfaces_demo__srv__CheckEmergency_Request * input,
  base_interfaces_demo__srv__CheckEmergency_Request * output);

/// Initialize array of srv/CheckEmergency messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_interfaces_demo__srv__CheckEmergency_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__CheckEmergency_Request__Sequence__init(base_interfaces_demo__srv__CheckEmergency_Request__Sequence * array, size_t size);

/// Finalize array of srv/CheckEmergency messages.
/**
 * It calls
 * base_interfaces_demo__srv__CheckEmergency_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__srv__CheckEmergency_Request__Sequence__fini(base_interfaces_demo__srv__CheckEmergency_Request__Sequence * array);

/// Create array of srv/CheckEmergency messages.
/**
 * It allocates the memory for the array and calls
 * base_interfaces_demo__srv__CheckEmergency_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__srv__CheckEmergency_Request__Sequence *
base_interfaces_demo__srv__CheckEmergency_Request__Sequence__create(size_t size);

/// Destroy array of srv/CheckEmergency messages.
/**
 * It calls
 * base_interfaces_demo__srv__CheckEmergency_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__srv__CheckEmergency_Request__Sequence__destroy(base_interfaces_demo__srv__CheckEmergency_Request__Sequence * array);

/// Check for srv/CheckEmergency message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__CheckEmergency_Request__Sequence__are_equal(const base_interfaces_demo__srv__CheckEmergency_Request__Sequence * lhs, const base_interfaces_demo__srv__CheckEmergency_Request__Sequence * rhs);

/// Copy an array of srv/CheckEmergency messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__CheckEmergency_Request__Sequence__copy(
  const base_interfaces_demo__srv__CheckEmergency_Request__Sequence * input,
  base_interfaces_demo__srv__CheckEmergency_Request__Sequence * output);

/// Initialize srv/CheckEmergency message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_interfaces_demo__srv__CheckEmergency_Response
 * )) before or use
 * base_interfaces_demo__srv__CheckEmergency_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__CheckEmergency_Response__init(base_interfaces_demo__srv__CheckEmergency_Response * msg);

/// Finalize srv/CheckEmergency message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__srv__CheckEmergency_Response__fini(base_interfaces_demo__srv__CheckEmergency_Response * msg);

/// Create srv/CheckEmergency message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_interfaces_demo__srv__CheckEmergency_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__srv__CheckEmergency_Response *
base_interfaces_demo__srv__CheckEmergency_Response__create();

/// Destroy srv/CheckEmergency message.
/**
 * It calls
 * base_interfaces_demo__srv__CheckEmergency_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__srv__CheckEmergency_Response__destroy(base_interfaces_demo__srv__CheckEmergency_Response * msg);

/// Check for srv/CheckEmergency message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__CheckEmergency_Response__are_equal(const base_interfaces_demo__srv__CheckEmergency_Response * lhs, const base_interfaces_demo__srv__CheckEmergency_Response * rhs);

/// Copy a srv/CheckEmergency message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__CheckEmergency_Response__copy(
  const base_interfaces_demo__srv__CheckEmergency_Response * input,
  base_interfaces_demo__srv__CheckEmergency_Response * output);

/// Initialize array of srv/CheckEmergency messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_interfaces_demo__srv__CheckEmergency_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__CheckEmergency_Response__Sequence__init(base_interfaces_demo__srv__CheckEmergency_Response__Sequence * array, size_t size);

/// Finalize array of srv/CheckEmergency messages.
/**
 * It calls
 * base_interfaces_demo__srv__CheckEmergency_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__srv__CheckEmergency_Response__Sequence__fini(base_interfaces_demo__srv__CheckEmergency_Response__Sequence * array);

/// Create array of srv/CheckEmergency messages.
/**
 * It allocates the memory for the array and calls
 * base_interfaces_demo__srv__CheckEmergency_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__srv__CheckEmergency_Response__Sequence *
base_interfaces_demo__srv__CheckEmergency_Response__Sequence__create(size_t size);

/// Destroy array of srv/CheckEmergency messages.
/**
 * It calls
 * base_interfaces_demo__srv__CheckEmergency_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__srv__CheckEmergency_Response__Sequence__destroy(base_interfaces_demo__srv__CheckEmergency_Response__Sequence * array);

/// Check for srv/CheckEmergency message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__CheckEmergency_Response__Sequence__are_equal(const base_interfaces_demo__srv__CheckEmergency_Response__Sequence * lhs, const base_interfaces_demo__srv__CheckEmergency_Response__Sequence * rhs);

/// Copy an array of srv/CheckEmergency messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__CheckEmergency_Response__Sequence__copy(
  const base_interfaces_demo__srv__CheckEmergency_Response__Sequence * input,
  base_interfaces_demo__srv__CheckEmergency_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__SRV__DETAIL__CHECK_EMERGENCY__FUNCTIONS_H_
