// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from leg_detector_msgs:msg/Leg.idl
// generated code does not contain a copyright notice

#ifndef LEG_DETECTOR_MSGS__MSG__DETAIL__LEG__STRUCT_H_
#define LEG_DETECTOR_MSGS__MSG__DETAIL__LEG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in msg/Leg in the package leg_detector_msgs.
typedef struct leg_detector_msgs__msg__Leg
{
  geometry_msgs__msg__Point position;
  float confidence;
} leg_detector_msgs__msg__Leg;

// Struct for a sequence of leg_detector_msgs__msg__Leg.
typedef struct leg_detector_msgs__msg__Leg__Sequence
{
  leg_detector_msgs__msg__Leg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leg_detector_msgs__msg__Leg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEG_DETECTOR_MSGS__MSG__DETAIL__LEG__STRUCT_H_
