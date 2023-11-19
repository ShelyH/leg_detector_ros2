// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from people_msgs:msg/PositionMeasurement.idl
// generated code does not contain a copyright notice
#include "people_msgs/msg/detail/position_measurement__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `name`
// Member `object_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `pos`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
people_msgs__msg__PositionMeasurement__init(people_msgs__msg__PositionMeasurement * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    people_msgs__msg__PositionMeasurement__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    people_msgs__msg__PositionMeasurement__fini(msg);
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__init(&msg->object_id)) {
    people_msgs__msg__PositionMeasurement__fini(msg);
    return false;
  }
  // pos
  if (!geometry_msgs__msg__Point__init(&msg->pos)) {
    people_msgs__msg__PositionMeasurement__fini(msg);
    return false;
  }
  // reliability
  // covariance
  // initialization
  return true;
}

void
people_msgs__msg__PositionMeasurement__fini(people_msgs__msg__PositionMeasurement * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // object_id
  rosidl_runtime_c__String__fini(&msg->object_id);
  // pos
  geometry_msgs__msg__Point__fini(&msg->pos);
  // reliability
  // covariance
  // initialization
}

bool
people_msgs__msg__PositionMeasurement__are_equal(const people_msgs__msg__PositionMeasurement * lhs, const people_msgs__msg__PositionMeasurement * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_id), &(rhs->object_id)))
  {
    return false;
  }
  // pos
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->pos), &(rhs->pos)))
  {
    return false;
  }
  // reliability
  if (lhs->reliability != rhs->reliability) {
    return false;
  }
  // covariance
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->covariance[i] != rhs->covariance[i]) {
      return false;
    }
  }
  // initialization
  if (lhs->initialization != rhs->initialization) {
    return false;
  }
  return true;
}

bool
people_msgs__msg__PositionMeasurement__copy(
  const people_msgs__msg__PositionMeasurement * input,
  people_msgs__msg__PositionMeasurement * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__copy(
      &(input->object_id), &(output->object_id)))
  {
    return false;
  }
  // pos
  if (!geometry_msgs__msg__Point__copy(
      &(input->pos), &(output->pos)))
  {
    return false;
  }
  // reliability
  output->reliability = input->reliability;
  // covariance
  for (size_t i = 0; i < 9; ++i) {
    output->covariance[i] = input->covariance[i];
  }
  // initialization
  output->initialization = input->initialization;
  return true;
}

people_msgs__msg__PositionMeasurement *
people_msgs__msg__PositionMeasurement__create()
{
  people_msgs__msg__PositionMeasurement * msg = (people_msgs__msg__PositionMeasurement *)malloc(sizeof(people_msgs__msg__PositionMeasurement));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(people_msgs__msg__PositionMeasurement));
  bool success = people_msgs__msg__PositionMeasurement__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
people_msgs__msg__PositionMeasurement__destroy(people_msgs__msg__PositionMeasurement * msg)
{
  if (msg) {
    people_msgs__msg__PositionMeasurement__fini(msg);
  }
  free(msg);
}


bool
people_msgs__msg__PositionMeasurement__Sequence__init(people_msgs__msg__PositionMeasurement__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  people_msgs__msg__PositionMeasurement * data = NULL;
  if (size) {
    data = (people_msgs__msg__PositionMeasurement *)calloc(size, sizeof(people_msgs__msg__PositionMeasurement));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = people_msgs__msg__PositionMeasurement__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        people_msgs__msg__PositionMeasurement__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
people_msgs__msg__PositionMeasurement__Sequence__fini(people_msgs__msg__PositionMeasurement__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      people_msgs__msg__PositionMeasurement__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

people_msgs__msg__PositionMeasurement__Sequence *
people_msgs__msg__PositionMeasurement__Sequence__create(size_t size)
{
  people_msgs__msg__PositionMeasurement__Sequence * array = (people_msgs__msg__PositionMeasurement__Sequence *)malloc(sizeof(people_msgs__msg__PositionMeasurement__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = people_msgs__msg__PositionMeasurement__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
people_msgs__msg__PositionMeasurement__Sequence__destroy(people_msgs__msg__PositionMeasurement__Sequence * array)
{
  if (array) {
    people_msgs__msg__PositionMeasurement__Sequence__fini(array);
  }
  free(array);
}

bool
people_msgs__msg__PositionMeasurement__Sequence__are_equal(const people_msgs__msg__PositionMeasurement__Sequence * lhs, const people_msgs__msg__PositionMeasurement__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!people_msgs__msg__PositionMeasurement__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
people_msgs__msg__PositionMeasurement__Sequence__copy(
  const people_msgs__msg__PositionMeasurement__Sequence * input,
  people_msgs__msg__PositionMeasurement__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(people_msgs__msg__PositionMeasurement);
    people_msgs__msg__PositionMeasurement * data =
      (people_msgs__msg__PositionMeasurement *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!people_msgs__msg__PositionMeasurement__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          people_msgs__msg__PositionMeasurement__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!people_msgs__msg__PositionMeasurement__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
