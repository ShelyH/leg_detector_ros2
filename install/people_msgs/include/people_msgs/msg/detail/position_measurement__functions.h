// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from people_msgs:msg/PositionMeasurement.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT__FUNCTIONS_H_
#define PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "people_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "people_msgs/msg/detail/position_measurement__struct.h"

/// Initialize msg/PositionMeasurement message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * people_msgs__msg__PositionMeasurement
 * )) before or use
 * people_msgs__msg__PositionMeasurement__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_people_msgs
bool
people_msgs__msg__PositionMeasurement__init(people_msgs__msg__PositionMeasurement * msg);

/// Finalize msg/PositionMeasurement message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_people_msgs
void
people_msgs__msg__PositionMeasurement__fini(people_msgs__msg__PositionMeasurement * msg);

/// Create msg/PositionMeasurement message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * people_msgs__msg__PositionMeasurement__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_people_msgs
people_msgs__msg__PositionMeasurement *
people_msgs__msg__PositionMeasurement__create();

/// Destroy msg/PositionMeasurement message.
/**
 * It calls
 * people_msgs__msg__PositionMeasurement__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_people_msgs
void
people_msgs__msg__PositionMeasurement__destroy(people_msgs__msg__PositionMeasurement * msg);

/// Check for msg/PositionMeasurement message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_people_msgs
bool
people_msgs__msg__PositionMeasurement__are_equal(const people_msgs__msg__PositionMeasurement * lhs, const people_msgs__msg__PositionMeasurement * rhs);

/// Copy a msg/PositionMeasurement message.
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
ROSIDL_GENERATOR_C_PUBLIC_people_msgs
bool
people_msgs__msg__PositionMeasurement__copy(
  const people_msgs__msg__PositionMeasurement * input,
  people_msgs__msg__PositionMeasurement * output);

/// Initialize array of msg/PositionMeasurement messages.
/**
 * It allocates the memory for the number of elements and calls
 * people_msgs__msg__PositionMeasurement__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_people_msgs
bool
people_msgs__msg__PositionMeasurement__Sequence__init(people_msgs__msg__PositionMeasurement__Sequence * array, size_t size);

/// Finalize array of msg/PositionMeasurement messages.
/**
 * It calls
 * people_msgs__msg__PositionMeasurement__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_people_msgs
void
people_msgs__msg__PositionMeasurement__Sequence__fini(people_msgs__msg__PositionMeasurement__Sequence * array);

/// Create array of msg/PositionMeasurement messages.
/**
 * It allocates the memory for the array and calls
 * people_msgs__msg__PositionMeasurement__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_people_msgs
people_msgs__msg__PositionMeasurement__Sequence *
people_msgs__msg__PositionMeasurement__Sequence__create(size_t size);

/// Destroy array of msg/PositionMeasurement messages.
/**
 * It calls
 * people_msgs__msg__PositionMeasurement__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_people_msgs
void
people_msgs__msg__PositionMeasurement__Sequence__destroy(people_msgs__msg__PositionMeasurement__Sequence * array);

/// Check for msg/PositionMeasurement message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_people_msgs
bool
people_msgs__msg__PositionMeasurement__Sequence__are_equal(const people_msgs__msg__PositionMeasurement__Sequence * lhs, const people_msgs__msg__PositionMeasurement__Sequence * rhs);

/// Copy an array of msg/PositionMeasurement messages.
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
ROSIDL_GENERATOR_C_PUBLIC_people_msgs
bool
people_msgs__msg__PositionMeasurement__Sequence__copy(
  const people_msgs__msg__PositionMeasurement__Sequence * input,
  people_msgs__msg__PositionMeasurement__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT__FUNCTIONS_H_
