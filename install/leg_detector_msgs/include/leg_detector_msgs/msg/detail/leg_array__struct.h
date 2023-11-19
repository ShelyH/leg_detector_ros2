// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from leg_detector_msgs:msg/LegArray.idl
// generated code does not contain a copyright notice

#ifndef LEG_DETECTOR_MSGS__MSG__DETAIL__LEG_ARRAY__STRUCT_H_
#define LEG_DETECTOR_MSGS__MSG__DETAIL__LEG_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'legs'
#include "leg_detector_msgs/msg/detail/leg__struct.h"

// Struct defined in msg/LegArray in the package leg_detector_msgs.
typedef struct leg_detector_msgs__msg__LegArray
{
  std_msgs__msg__Header header;
  leg_detector_msgs__msg__Leg__Sequence legs;
} leg_detector_msgs__msg__LegArray;

// Struct for a sequence of leg_detector_msgs__msg__LegArray.
typedef struct leg_detector_msgs__msg__LegArray__Sequence
{
  leg_detector_msgs__msg__LegArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leg_detector_msgs__msg__LegArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEG_DETECTOR_MSGS__MSG__DETAIL__LEG_ARRAY__STRUCT_H_
