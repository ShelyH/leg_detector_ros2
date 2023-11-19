// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from people_msgs:msg/PositionMeasurementArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "people_msgs/msg/detail/position_measurement_array__rosidl_typesupport_introspection_c.h"
#include "people_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "people_msgs/msg/detail/position_measurement_array__functions.h"
#include "people_msgs/msg/detail/position_measurement_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `people`
#include "people_msgs/msg/position_measurement.h"
// Member `people`
#include "people_msgs/msg/detail/position_measurement__rosidl_typesupport_introspection_c.h"
// Member `cooccurrence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PositionMeasurementArray__rosidl_typesupport_introspection_c__PositionMeasurementArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  people_msgs__msg__PositionMeasurementArray__init(message_memory);
}

void PositionMeasurementArray__rosidl_typesupport_introspection_c__PositionMeasurementArray_fini_function(void * message_memory)
{
  people_msgs__msg__PositionMeasurementArray__fini(message_memory);
}

size_t PositionMeasurementArray__rosidl_typesupport_introspection_c__size_function__PositionMeasurement__people(
  const void * untyped_member)
{
  const people_msgs__msg__PositionMeasurement__Sequence * member =
    (const people_msgs__msg__PositionMeasurement__Sequence *)(untyped_member);
  return member->size;
}

const void * PositionMeasurementArray__rosidl_typesupport_introspection_c__get_const_function__PositionMeasurement__people(
  const void * untyped_member, size_t index)
{
  const people_msgs__msg__PositionMeasurement__Sequence * member =
    (const people_msgs__msg__PositionMeasurement__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PositionMeasurementArray__rosidl_typesupport_introspection_c__get_function__PositionMeasurement__people(
  void * untyped_member, size_t index)
{
  people_msgs__msg__PositionMeasurement__Sequence * member =
    (people_msgs__msg__PositionMeasurement__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PositionMeasurementArray__rosidl_typesupport_introspection_c__resize_function__PositionMeasurement__people(
  void * untyped_member, size_t size)
{
  people_msgs__msg__PositionMeasurement__Sequence * member =
    (people_msgs__msg__PositionMeasurement__Sequence *)(untyped_member);
  people_msgs__msg__PositionMeasurement__Sequence__fini(member);
  return people_msgs__msg__PositionMeasurement__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember PositionMeasurementArray__rosidl_typesupport_introspection_c__PositionMeasurementArray_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(people_msgs__msg__PositionMeasurementArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "people",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(people_msgs__msg__PositionMeasurementArray, people),  // bytes offset in struct
    NULL,  // default value
    PositionMeasurementArray__rosidl_typesupport_introspection_c__size_function__PositionMeasurement__people,  // size() function pointer
    PositionMeasurementArray__rosidl_typesupport_introspection_c__get_const_function__PositionMeasurement__people,  // get_const(index) function pointer
    PositionMeasurementArray__rosidl_typesupport_introspection_c__get_function__PositionMeasurement__people,  // get(index) function pointer
    PositionMeasurementArray__rosidl_typesupport_introspection_c__resize_function__PositionMeasurement__people  // resize(index) function pointer
  },
  {
    "cooccurrence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(people_msgs__msg__PositionMeasurementArray, cooccurrence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PositionMeasurementArray__rosidl_typesupport_introspection_c__PositionMeasurementArray_message_members = {
  "people_msgs__msg",  // message namespace
  "PositionMeasurementArray",  // message name
  3,  // number of fields
  sizeof(people_msgs__msg__PositionMeasurementArray),
  PositionMeasurementArray__rosidl_typesupport_introspection_c__PositionMeasurementArray_message_member_array,  // message members
  PositionMeasurementArray__rosidl_typesupport_introspection_c__PositionMeasurementArray_init_function,  // function to initialize message memory (memory has to be allocated)
  PositionMeasurementArray__rosidl_typesupport_introspection_c__PositionMeasurementArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PositionMeasurementArray__rosidl_typesupport_introspection_c__PositionMeasurementArray_message_type_support_handle = {
  0,
  &PositionMeasurementArray__rosidl_typesupport_introspection_c__PositionMeasurementArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_people_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, people_msgs, msg, PositionMeasurementArray)() {
  PositionMeasurementArray__rosidl_typesupport_introspection_c__PositionMeasurementArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  PositionMeasurementArray__rosidl_typesupport_introspection_c__PositionMeasurementArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, people_msgs, msg, PositionMeasurement)();
  if (!PositionMeasurementArray__rosidl_typesupport_introspection_c__PositionMeasurementArray_message_type_support_handle.typesupport_identifier) {
    PositionMeasurementArray__rosidl_typesupport_introspection_c__PositionMeasurementArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PositionMeasurementArray__rosidl_typesupport_introspection_c__PositionMeasurementArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
