// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from people_msgs:msg/People.idl
// generated code does not contain a copyright notice
#include "people_msgs/msg/detail/people__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `people`
#include "people_msgs/msg/detail/person__functions.h"

bool
people_msgs__msg__People__init(people_msgs__msg__People * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    people_msgs__msg__People__fini(msg);
    return false;
  }
  // people
  if (!people_msgs__msg__Person__Sequence__init(&msg->people, 0)) {
    people_msgs__msg__People__fini(msg);
    return false;
  }
  return true;
}

void
people_msgs__msg__People__fini(people_msgs__msg__People * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // people
  people_msgs__msg__Person__Sequence__fini(&msg->people);
}

bool
people_msgs__msg__People__are_equal(const people_msgs__msg__People * lhs, const people_msgs__msg__People * rhs)
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
  // people
  if (!people_msgs__msg__Person__Sequence__are_equal(
      &(lhs->people), &(rhs->people)))
  {
    return false;
  }
  return true;
}

bool
people_msgs__msg__People__copy(
  const people_msgs__msg__People * input,
  people_msgs__msg__People * output)
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
  // people
  if (!people_msgs__msg__Person__Sequence__copy(
      &(input->people), &(output->people)))
  {
    return false;
  }
  return true;
}

people_msgs__msg__People *
people_msgs__msg__People__create()
{
  people_msgs__msg__People * msg = (people_msgs__msg__People *)malloc(sizeof(people_msgs__msg__People));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(people_msgs__msg__People));
  bool success = people_msgs__msg__People__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
people_msgs__msg__People__destroy(people_msgs__msg__People * msg)
{
  if (msg) {
    people_msgs__msg__People__fini(msg);
  }
  free(msg);
}


bool
people_msgs__msg__People__Sequence__init(people_msgs__msg__People__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  people_msgs__msg__People * data = NULL;
  if (size) {
    data = (people_msgs__msg__People *)calloc(size, sizeof(people_msgs__msg__People));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = people_msgs__msg__People__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        people_msgs__msg__People__fini(&data[i - 1]);
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
people_msgs__msg__People__Sequence__fini(people_msgs__msg__People__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      people_msgs__msg__People__fini(&array->data[i]);
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

people_msgs__msg__People__Sequence *
people_msgs__msg__People__Sequence__create(size_t size)
{
  people_msgs__msg__People__Sequence * array = (people_msgs__msg__People__Sequence *)malloc(sizeof(people_msgs__msg__People__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = people_msgs__msg__People__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
people_msgs__msg__People__Sequence__destroy(people_msgs__msg__People__Sequence * array)
{
  if (array) {
    people_msgs__msg__People__Sequence__fini(array);
  }
  free(array);
}

bool
people_msgs__msg__People__Sequence__are_equal(const people_msgs__msg__People__Sequence * lhs, const people_msgs__msg__People__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!people_msgs__msg__People__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
people_msgs__msg__People__Sequence__copy(
  const people_msgs__msg__People__Sequence * input,
  people_msgs__msg__People__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(people_msgs__msg__People);
    people_msgs__msg__People * data =
      (people_msgs__msg__People *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!people_msgs__msg__People__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          people_msgs__msg__People__fini(&data[i]);
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
    if (!people_msgs__msg__People__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
