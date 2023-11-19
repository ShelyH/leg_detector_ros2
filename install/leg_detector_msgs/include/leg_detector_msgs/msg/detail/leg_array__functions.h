// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from leg_detector_msgs:msg/LegArray.idl
// generated code does not contain a copyright notice

#ifndef LEG_DETECTOR_MSGS__MSG__DETAIL__LEG_ARRAY__FUNCTIONS_H_
#define LEG_DETECTOR_MSGS__MSG__DETAIL__LEG_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "leg_detector_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "leg_detector_msgs/msg/detail/leg_array__struct.h"

/// Initialize msg/LegArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * leg_detector_msgs__msg__LegArray
 * )) before or use
 * leg_detector_msgs__msg__LegArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_leg_detector_msgs
bool
leg_detector_msgs__msg__LegArray__init(leg_detector_msgs__msg__LegArray * msg);

/// Finalize msg/LegArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leg_detector_msgs
void
leg_detector_msgs__msg__LegArray__fini(leg_detector_msgs__msg__LegArray * msg);

/// Create msg/LegArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * leg_detector_msgs__msg__LegArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_leg_detector_msgs
leg_detector_msgs__msg__LegArray *
leg_detector_msgs__msg__LegArray__create();

/// Destroy msg/LegArray message.
/**
 * It calls
 * leg_detector_msgs__msg__LegArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leg_detector_msgs
void
leg_detector_msgs__msg__LegArray__destroy(leg_detector_msgs__msg__LegArray * msg);

/// Check for msg/LegArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_leg_detector_msgs
bool
leg_detector_msgs__msg__LegArray__are_equal(const leg_detector_msgs__msg__LegArray * lhs, const leg_detector_msgs__msg__LegArray * rhs);

/// Copy a msg/LegArray message.
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
ROSIDL_GENERATOR_C_PUBLIC_leg_detector_msgs
bool
leg_detector_msgs__msg__LegArray__copy(
  const leg_detector_msgs__msg__LegArray * input,
  leg_detector_msgs__msg__LegArray * output);

/// Initialize array of msg/LegArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * leg_detector_msgs__msg__LegArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_leg_detector_msgs
bool
leg_detector_msgs__msg__LegArray__Sequence__init(leg_detector_msgs__msg__LegArray__Sequence * array, size_t size);

/// Finalize array of msg/LegArray messages.
/**
 * It calls
 * leg_detector_msgs__msg__LegArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leg_detector_msgs
void
leg_detector_msgs__msg__LegArray__Sequence__fini(leg_detector_msgs__msg__LegArray__Sequence * array);

/// Create array of msg/LegArray messages.
/**
 * It allocates the memory for the array and calls
 * leg_detector_msgs__msg__LegArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_leg_detector_msgs
leg_detector_msgs__msg__LegArray__Sequence *
leg_detector_msgs__msg__LegArray__Sequence__create(size_t size);

/// Destroy array of msg/LegArray messages.
/**
 * It calls
 * leg_detector_msgs__msg__LegArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leg_detector_msgs
void
leg_detector_msgs__msg__LegArray__Sequence__destroy(leg_detector_msgs__msg__LegArray__Sequence * array);

/// Check for msg/LegArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_leg_detector_msgs
bool
leg_detector_msgs__msg__LegArray__Sequence__are_equal(const leg_detector_msgs__msg__LegArray__Sequence * lhs, const leg_detector_msgs__msg__LegArray__Sequence * rhs);

/// Copy an array of msg/LegArray messages.
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
ROSIDL_GENERATOR_C_PUBLIC_leg_detector_msgs
bool
leg_detector_msgs__msg__LegArray__Sequence__copy(
  const leg_detector_msgs__msg__LegArray__Sequence * input,
  leg_detector_msgs__msg__LegArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LEG_DETECTOR_MSGS__MSG__DETAIL__LEG_ARRAY__FUNCTIONS_H_
