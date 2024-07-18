// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from base_interfaces_demo:msg/PalletInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__PALLET_INFO__FUNCTIONS_H_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__PALLET_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "base_interfaces_demo/msg/rosidl_generator_c__visibility_control.h"

#include "base_interfaces_demo/msg/detail/pallet_info__struct.h"

/// Initialize msg/PalletInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_interfaces_demo__msg__PalletInfo
 * )) before or use
 * base_interfaces_demo__msg__PalletInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__msg__PalletInfo__init(base_interfaces_demo__msg__PalletInfo * msg);

/// Finalize msg/PalletInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__msg__PalletInfo__fini(base_interfaces_demo__msg__PalletInfo * msg);

/// Create msg/PalletInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_interfaces_demo__msg__PalletInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__msg__PalletInfo *
base_interfaces_demo__msg__PalletInfo__create();

/// Destroy msg/PalletInfo message.
/**
 * It calls
 * base_interfaces_demo__msg__PalletInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__msg__PalletInfo__destroy(base_interfaces_demo__msg__PalletInfo * msg);

/// Check for msg/PalletInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__msg__PalletInfo__are_equal(const base_interfaces_demo__msg__PalletInfo * lhs, const base_interfaces_demo__msg__PalletInfo * rhs);

/// Copy a msg/PalletInfo message.
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
base_interfaces_demo__msg__PalletInfo__copy(
  const base_interfaces_demo__msg__PalletInfo * input,
  base_interfaces_demo__msg__PalletInfo * output);

/// Initialize array of msg/PalletInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_interfaces_demo__msg__PalletInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__msg__PalletInfo__Sequence__init(base_interfaces_demo__msg__PalletInfo__Sequence * array, size_t size);

/// Finalize array of msg/PalletInfo messages.
/**
 * It calls
 * base_interfaces_demo__msg__PalletInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__msg__PalletInfo__Sequence__fini(base_interfaces_demo__msg__PalletInfo__Sequence * array);

/// Create array of msg/PalletInfo messages.
/**
 * It allocates the memory for the array and calls
 * base_interfaces_demo__msg__PalletInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__msg__PalletInfo__Sequence *
base_interfaces_demo__msg__PalletInfo__Sequence__create(size_t size);

/// Destroy array of msg/PalletInfo messages.
/**
 * It calls
 * base_interfaces_demo__msg__PalletInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__msg__PalletInfo__Sequence__destroy(base_interfaces_demo__msg__PalletInfo__Sequence * array);

/// Check for msg/PalletInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__msg__PalletInfo__Sequence__are_equal(const base_interfaces_demo__msg__PalletInfo__Sequence * lhs, const base_interfaces_demo__msg__PalletInfo__Sequence * rhs);

/// Copy an array of msg/PalletInfo messages.
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
base_interfaces_demo__msg__PalletInfo__Sequence__copy(
  const base_interfaces_demo__msg__PalletInfo__Sequence * input,
  base_interfaces_demo__msg__PalletInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__PALLET_INFO__FUNCTIONS_H_
