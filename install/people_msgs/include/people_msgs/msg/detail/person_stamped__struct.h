// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from people_msgs:msg/PersonStamped.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_MSGS__MSG__DETAIL__PERSON_STAMPED__STRUCT_H_
#define PEOPLE_MSGS__MSG__DETAIL__PERSON_STAMPED__STRUCT_H_

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
// Member 'person'
#include "people_msgs/msg/detail/person__struct.h"

// Struct defined in msg/PersonStamped in the package people_msgs.
typedef struct people_msgs__msg__PersonStamped
{
  std_msgs__msg__Header header;
  people_msgs__msg__Person person;
} people_msgs__msg__PersonStamped;

// Struct for a sequence of people_msgs__msg__PersonStamped.
typedef struct people_msgs__msg__PersonStamped__Sequence
{
  people_msgs__msg__PersonStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} people_msgs__msg__PersonStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PEOPLE_MSGS__MSG__DETAIL__PERSON_STAMPED__STRUCT_H_
