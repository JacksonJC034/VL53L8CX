// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from base_interfaces_demo:msg/HallInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__HALL_INFO__FUNCTIONS_H_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__HALL_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "base_interfaces_demo/msg/rosidl_generator_c__visibility_control.h"

#include "base_interfaces_demo/msg/detail/hall_info__struct.h"

/// Initialize msg/HallInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_interfaces_demo__msg__HallInfo
 * )) before or use
 * base_interfaces_demo__msg__HallInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__msg__HallInfo__init(base_interfaces_demo__msg__HallInfo * msg);

/// Finalize msg/HallInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__msg__HallInfo__fini(base_interfaces_demo__msg__HallInfo * msg);

/// Create msg/HallInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_interfaces_demo__msg__HallInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__msg__HallInfo *
base_interfaces_demo__msg__HallInfo__create();

/// Destroy msg/HallInfo message.
/**
 * It calls
 * base_interfaces_demo__msg__HallInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__msg__HallInfo__destroy(base_interfaces_demo__msg__HallInfo * msg);

/// Check for msg/HallInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__msg__HallInfo__are_equal(const base_interfaces_demo__msg__HallInfo * lhs, const base_interfaces_demo__msg__HallInfo * rhs);

/// Copy a msg/HallInfo message.
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
base_interfaces_demo__msg__HallInfo__copy(
  const base_interfaces_demo__msg__HallInfo * input,
  base_interfaces_demo__msg__HallInfo * output);

/// Initialize array of msg/HallInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_interfaces_demo__msg__HallInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__msg__HallInfo__Sequence__init(base_interfaces_demo__msg__HallInfo__Sequence * array, size_t size);

/// Finalize array of msg/HallInfo messages.
/**
 * It calls
 * base_interfaces_demo__msg__HallInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__msg__HallInfo__Sequence__fini(base_interfaces_demo__msg__HallInfo__Sequence * array);

/// Create array of msg/HallInfo messages.
/**
 * It allocates the memory for the array and calls
 * base_interfaces_demo__msg__HallInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__msg__HallInfo__Sequence *
base_interfaces_demo__msg__HallInfo__Sequence__create(size_t size);

/// Destroy array of msg/HallInfo messages.
/**
 * It calls
 * base_interfaces_demo__msg__HallInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__msg__HallInfo__Sequence__destroy(base_interfaces_demo__msg__HallInfo__Sequence * array);

/// Check for msg/HallInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__msg__HallInfo__Sequence__are_equal(const base_interfaces_demo__msg__HallInfo__Sequence * lhs, const base_interfaces_demo__msg__HallInfo__Sequence * rhs);

/// Copy an array of msg/HallInfo messages.
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
base_interfaces_demo__msg__HallInfo__Sequence__copy(
  const base_interfaces_demo__msg__HallInfo__Sequence * input,
  base_interfaces_demo__msg__HallInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__HALL_INFO__FUNCTIONS_H_
