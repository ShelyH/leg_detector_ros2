// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from people_msgs:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_MSGS__MSG__DETAIL__PERSON__STRUCT_H_
#define PEOPLE_MSGS__MSG__DETAIL__PERSON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'tagnames'
// Member 'tags'
#include "rosidl_runtime_c/string.h"
// Member 'position'
// Member 'velocity'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in msg/Person in the package people_msgs.
typedef struct people_msgs__msg__Person
{
  rosidl_runtime_c__String name;
  geometry_msgs__msg__Point position;
  geometry_msgs__msg__Point velocity;
  double reliability;
  rosidl_runtime_c__String__Sequence tagnames;
  rosidl_runtime_c__String__Sequence tags;
} people_msgs__msg__Person;

// Struct for a sequence of people_msgs__msg__Person.
typedef struct people_msgs__msg__Person__Sequence
{
  people_msgs__msg__Person * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} people_msgs__msg__Person__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PEOPLE_MSGS__MSG__DETAIL__PERSON__STRUCT_H_
