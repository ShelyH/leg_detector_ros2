// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from leg_detector_msgs:msg/LegArray.idl
// generated code does not contain a copyright notice
#include "leg_detector_msgs/msg/detail/leg_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `legs`
#include "leg_detector_msgs/msg/detail/leg__functions.h"

bool
leg_detector_msgs__msg__LegArray__init(leg_detector_msgs__msg__LegArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    leg_detector_msgs__msg__LegArray__fini(msg);
    return false;
  }
  // legs
  if (!leg_detector_msgs__msg__Leg__Sequence__init(&msg->legs, 0)) {
    leg_detector_msgs__msg__LegArray__fini(msg);
    return false;
  }
  return true;
}

void
leg_detector_msgs__msg__LegArray__fini(leg_detector_msgs__msg__LegArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // legs
  leg_detector_msgs__msg__Leg__Sequence__fini(&msg->legs);
}

bool
leg_detector_msgs__msg__LegArray__are_equal(const leg_detector_msgs__msg__LegArray * lhs, const leg_detector_msgs__msg__LegArray * rhs)
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
  // legs
  if (!leg_detector_msgs__msg__Leg__Sequence__are_equal(
      &(lhs->legs), &(rhs->legs)))
  {
    return false;
  }
  return true;
}

bool
leg_detector_msgs__msg__LegArray__copy(
  const leg_detector_msgs__msg__LegArray * input,
  leg_detector_msgs__msg__LegArray * output)
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
  // legs
  if (!leg_detector_msgs__msg__Leg__Sequence__copy(
      &(input->legs), &(output->legs)))
  {
    return false;
  }
  return true;
}

leg_detector_msgs__msg__LegArray *
leg_detector_msgs__msg__LegArray__create()
{
  leg_detector_msgs__msg__LegArray * msg = (leg_detector_msgs__msg__LegArray *)malloc(sizeof(leg_detector_msgs__msg__LegArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(leg_detector_msgs__msg__LegArray));
  bool success = leg_detector_msgs__msg__LegArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
leg_detector_msgs__msg__LegArray__destroy(leg_detector_msgs__msg__LegArray * msg)
{
  if (msg) {
    leg_detector_msgs__msg__LegArray__fini(msg);
  }
  free(msg);
}


bool
leg_detector_msgs__msg__LegArray__Sequence__init(leg_detector_msgs__msg__LegArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  leg_detector_msgs__msg__LegArray * data = NULL;
  if (size) {
    data = (leg_detector_msgs__msg__LegArray *)calloc(size, sizeof(leg_detector_msgs__msg__LegArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = leg_detector_msgs__msg__LegArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        leg_detector_msgs__msg__LegArray__fini(&data[i - 1]);
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
leg_detector_msgs__msg__LegArray__Sequence__fini(leg_detector_msgs__msg__LegArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      leg_detector_msgs__msg__LegArray__fini(&array->data[i]);
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

leg_detector_msgs__msg__LegArray__Sequence *
leg_detector_msgs__msg__LegArray__Sequence__create(size_t size)
{
  leg_detector_msgs__msg__LegArray__Sequence * array = (leg_detector_msgs__msg__LegArray__Sequence *)malloc(sizeof(leg_detector_msgs__msg__LegArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = leg_detector_msgs__msg__LegArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
leg_detector_msgs__msg__LegArray__Sequence__destroy(leg_detector_msgs__msg__LegArray__Sequence * array)
{
  if (array) {
    leg_detector_msgs__msg__LegArray__Sequence__fini(array);
  }
  free(array);
}

bool
leg_detector_msgs__msg__LegArray__Sequence__are_equal(const leg_detector_msgs__msg__LegArray__Sequence * lhs, const leg_detector_msgs__msg__LegArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!leg_detector_msgs__msg__LegArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
leg_detector_msgs__msg__LegArray__Sequence__copy(
  const leg_detector_msgs__msg__LegArray__Sequence * input,
  leg_detector_msgs__msg__LegArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(leg_detector_msgs__msg__LegArray);
    leg_detector_msgs__msg__LegArray * data =
      (leg_detector_msgs__msg__LegArray *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!leg_detector_msgs__msg__LegArray__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          leg_detector_msgs__msg__LegArray__fini(&data[i]);
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
    if (!leg_detector_msgs__msg__LegArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
