// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from leg_detector_msgs:msg/PersonArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "leg_detector_msgs/msg/detail/person_array__rosidl_typesupport_introspection_c.h"
#include "leg_detector_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "leg_detector_msgs/msg/detail/person_array__functions.h"
#include "leg_detector_msgs/msg/detail/person_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `people`
#include "leg_detector_msgs/msg/person.h"
// Member `people`
#include "leg_detector_msgs/msg/detail/person__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PersonArray__rosidl_typesupport_introspection_c__PersonArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  leg_detector_msgs__msg__PersonArray__init(message_memory);
}

void PersonArray__rosidl_typesupport_introspection_c__PersonArray_fini_function(void * message_memory)
{
  leg_detector_msgs__msg__PersonArray__fini(message_memory);
}

size_t PersonArray__rosidl_typesupport_introspection_c__size_function__Person__people(
  const void * untyped_member)
{
  const leg_detector_msgs__msg__Person__Sequence * member =
    (const leg_detector_msgs__msg__Person__Sequence *)(untyped_member);
  return member->size;
}

const void * PersonArray__rosidl_typesupport_introspection_c__get_const_function__Person__people(
  const void * untyped_member, size_t index)
{
  const leg_detector_msgs__msg__Person__Sequence * member =
    (const leg_detector_msgs__msg__Person__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PersonArray__rosidl_typesupport_introspection_c__get_function__Person__people(
  void * untyped_member, size_t index)
{
  leg_detector_msgs__msg__Person__Sequence * member =
    (leg_detector_msgs__msg__Person__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PersonArray__rosidl_typesupport_introspection_c__resize_function__Person__people(
  void * untyped_member, size_t size)
{
  leg_detector_msgs__msg__Person__Sequence * member =
    (leg_detector_msgs__msg__Person__Sequence *)(untyped_member);
  leg_detector_msgs__msg__Person__Sequence__fini(member);
  return leg_detector_msgs__msg__Person__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember PersonArray__rosidl_typesupport_introspection_c__PersonArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leg_detector_msgs__msg__PersonArray, header),  // bytes offset in struct
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
    offsetof(leg_detector_msgs__msg__PersonArray, people),  // bytes offset in struct
    NULL,  // default value
    PersonArray__rosidl_typesupport_introspection_c__size_function__Person__people,  // size() function pointer
    PersonArray__rosidl_typesupport_introspection_c__get_const_function__Person__people,  // get_const(index) function pointer
    PersonArray__rosidl_typesupport_introspection_c__get_function__Person__people,  // get(index) function pointer
    PersonArray__rosidl_typesupport_introspection_c__resize_function__Person__people  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PersonArray__rosidl_typesupport_introspection_c__PersonArray_message_members = {
  "leg_detector_msgs__msg",  // message namespace
  "PersonArray",  // message name
  2,  // number of fields
  sizeof(leg_detector_msgs__msg__PersonArray),
  PersonArray__rosidl_typesupport_introspection_c__PersonArray_message_member_array,  // message members
  PersonArray__rosidl_typesupport_introspection_c__PersonArray_init_function,  // function to initialize message memory (memory has to be allocated)
  PersonArray__rosidl_typesupport_introspection_c__PersonArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PersonArray__rosidl_typesupport_introspection_c__PersonArray_message_type_support_handle = {
  0,
  &PersonArray__rosidl_typesupport_introspection_c__PersonArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_leg_detector_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, leg_detector_msgs, msg, PersonArray)() {
  PersonArray__rosidl_typesupport_introspection_c__PersonArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  PersonArray__rosidl_typesupport_introspection_c__PersonArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, leg_detector_msgs, msg, Person)();
  if (!PersonArray__rosidl_typesupport_introspection_c__PersonArray_message_type_support_handle.typesupport_identifier) {
    PersonArray__rosidl_typesupport_introspection_c__PersonArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PersonArray__rosidl_typesupport_introspection_c__PersonArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
