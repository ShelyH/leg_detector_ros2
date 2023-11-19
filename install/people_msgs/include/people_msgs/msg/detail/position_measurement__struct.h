// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from people_msgs:msg/PositionMeasurement.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT__STRUCT_H_
#define PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT__STRUCT_H_

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
// Member 'name'
// Member 'object_id'
#include "rosidl_runtime_c/string.h"
// Member 'pos'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in msg/PositionMeasurement in the package people_msgs.
typedef struct people_msgs__msg__PositionMeasurement
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String object_id;
  geometry_msgs__msg__Point pos;
  double reliability;
  double covariance[9];
  uint8_t initialization;
} people_msgs__msg__PositionMeasurement;

// Struct for a sequence of people_msgs__msg__PositionMeasurement.
typedef struct people_msgs__msg__PositionMeasurement__Sequence
{
  people_msgs__msg__PositionMeasurement * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} people_msgs__msg__PositionMeasurement__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT__STRUCT_H_
