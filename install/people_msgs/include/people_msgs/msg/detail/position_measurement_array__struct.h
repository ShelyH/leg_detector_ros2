// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from people_msgs:msg/PositionMeasurementArray.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT_ARRAY__STRUCT_H_
#define PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT_ARRAY__STRUCT_H_

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
// Member 'people'
#include "people_msgs/msg/detail/position_measurement__struct.h"
// Member 'cooccurrence'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/PositionMeasurementArray in the package people_msgs.
typedef struct people_msgs__msg__PositionMeasurementArray
{
  std_msgs__msg__Header header;
  people_msgs__msg__PositionMeasurement__Sequence people;
  rosidl_runtime_c__float__Sequence cooccurrence;
} people_msgs__msg__PositionMeasurementArray;

// Struct for a sequence of people_msgs__msg__PositionMeasurementArray.
typedef struct people_msgs__msg__PositionMeasurementArray__Sequence
{
  people_msgs__msg__PositionMeasurementArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} people_msgs__msg__PositionMeasurementArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT_ARRAY__STRUCT_H_
