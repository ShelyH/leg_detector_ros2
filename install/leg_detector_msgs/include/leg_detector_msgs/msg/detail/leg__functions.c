// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from leg_detector_msgs:msg/Leg.idl
// generated code does not contain a copyright notice
#include "leg_detector_msgs/msg/detail/leg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
leg_detector_msgs__msg__Leg__init(leg_detector_msgs__msg__Leg * msg)
{
  if (!msg) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    leg_detector_msgs__msg__Leg__fini(msg);
    return false;
  }
  // confidence
  return true;
}

void
leg_detector_msgs__msg__Leg__fini(leg_detector_msgs__msg__Leg * msg)
{
  if (!msg) {
    return;
  }
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // confidence
}

bool
leg_detector_msgs__msg__Leg__are_equal(const leg_detector_msgs__msg__Leg * lhs, const leg_detector_msgs__msg__Leg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  return true;
}

bool
leg_detector_msgs__msg__Leg__copy(
  const leg_detector_msgs__msg__Leg * input,
  leg_detector_msgs__msg__Leg * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  return true;
}

leg_detector_msgs__msg__Leg *
leg_detector_msgs__msg__Leg__create()
{
  leg_detector_msgs__msg__Leg * msg = (leg_detector_msgs__msg__Leg *)malloc(sizeof(leg_detector_msgs__msg__Leg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(leg_detector_msgs__msg__Leg));
  bool success = leg_detector_msgs__msg__Leg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
leg_detector_msgs__msg__Leg__destroy(leg_detector_msgs__msg__Leg * msg)
{
  if (msg) {
    leg_detector_msgs__msg__Leg__fini(msg);
  }
  free(msg);
}


bool
leg_detector_msgs__msg__Leg__Sequence__init(leg_detector_msgs__msg__Leg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  leg_detector_msgs__msg__Leg * data = NULL;
  if (size) {
    data = (leg_detector_msgs__msg__Leg *)calloc(size, sizeof(leg_detector_msgs__msg__Leg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = leg_detector_msgs__msg__Leg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        leg_detector_msgs__msg__Leg__fini(&data[i - 1]);
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
leg_detector_msgs__msg__Leg__Sequence__fini(leg_detector_msgs__msg__Leg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      leg_detector_msgs__msg__Leg__fini(&array->data[i]);
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

leg_detector_msgs__msg__Leg__Sequence *
leg_detector_msgs__msg__Leg__Sequence__create(size_t size)
{
  leg_detector_msgs__msg__Leg__Sequence * array = (leg_detector_msgs__msg__Leg__Sequence *)malloc(sizeof(leg_detector_msgs__msg__Leg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = leg_detector_msgs__msg__Leg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
leg_detector_msgs__msg__Leg__Sequence__destroy(leg_detector_msgs__msg__Leg__Sequence * array)
{
  if (array) {
    leg_detector_msgs__msg__Leg__Sequence__fini(array);
  }
  free(array);
}

bool
leg_detector_msgs__msg__Leg__Sequence__are_equal(const leg_detector_msgs__msg__Leg__Sequence * lhs, const leg_detector_msgs__msg__Leg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!leg_detector_msgs__msg__Leg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
leg_detector_msgs__msg__Leg__Sequence__copy(
  const leg_detector_msgs__msg__Leg__Sequence * input,
  leg_detector_msgs__msg__Leg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(leg_detector_msgs__msg__Leg);
    leg_detector_msgs__msg__Leg * data =
      (leg_detector_msgs__msg__Leg *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!leg_detector_msgs__msg__Leg__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          leg_detector_msgs__msg__Leg__fini(&data[i]);
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
    if (!leg_detector_msgs__msg__Leg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
