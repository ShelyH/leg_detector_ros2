// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from people_msgs:msg/People.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "people_msgs/msg/detail/people__rosidl_typesupport_introspection_c.h"
#include "people_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "people_msgs/msg/detail/people__functions.h"
#include "people_msgs/msg/detail/people__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `people`
#include "people_msgs/msg/person.h"
// Member `people`
#include "people_msgs/msg/detail/person__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void People__rosidl_typesupport_introspection_c__People_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  people_msgs__msg__People__init(message_memory);
}

void People__rosidl_typesupport_introspection_c__People_fini_function(void * message_memory)
{
  people_msgs__msg__People__fini(message_memory);
}

size_t People__rosidl_typesupport_introspection_c__size_function__Person__people(
  const void * untyped_member)
{
  const people_msgs__msg__Person__Sequence * member =
    (const people_msgs__msg__Person__Sequence *)(untyped_member);
  return member->size;
}

const void * People__rosidl_typesupport_introspection_c__get_const_function__Person__people(
  const void * untyped_member, size_t index)
{
  const people_msgs__msg__Person__Sequence * member =
    (const people_msgs__msg__Person__Sequence *)(untyped_member);
  return &member->data[index];
}

void * People__rosidl_typesupport_introspection_c__get_function__Person__people(
  void * untyped_member, size_t index)
{
  people_msgs__msg__Person__Sequence * member =
    (people_msgs__msg__Person__Sequence *)(untyped_member);
  return &member->data[index];
}

bool People__rosidl_typesupport_introspection_c__resize_function__Person__people(
  void * untyped_member, size_t size)
{
  people_msgs__msg__Person__Sequence * member =
    (people_msgs__msg__Person__Sequence *)(untyped_member);
  people_msgs__msg__Person__Sequence__fini(member);
  return people_msgs__msg__Person__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember People__rosidl_typesupport_introspection_c__People_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(people_msgs__msg__People, header),  // bytes offset in struct
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
    offsetof(people_msgs__msg__People, people),  // bytes offset in struct
    NULL,  // default value
    People__rosidl_typesupport_introspection_c__size_function__Person__people,  // size() function pointer
    People__rosidl_typesupport_introspection_c__get_const_function__Person__people,  // get_const(index) function pointer
    People__rosidl_typesupport_introspection_c__get_function__Person__people,  // get(index) function pointer
    People__rosidl_typesupport_introspection_c__resize_function__Person__people  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers People__rosidl_typesupport_introspection_c__People_message_members = {
  "people_msgs__msg",  // message namespace
  "People",  // message name
  2,  // number of fields
  sizeof(people_msgs__msg__People),
  People__rosidl_typesupport_introspection_c__People_message_member_array,  // message members
  People__rosidl_typesupport_introspection_c__People_init_function,  // function to initialize message memory (memory has to be allocated)
  People__rosidl_typesupport_introspection_c__People_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t People__rosidl_typesupport_introspection_c__People_message_type_support_handle = {
  0,
  &People__rosidl_typesupport_introspection_c__People_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_people_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, people_msgs, msg, People)() {
  People__rosidl_typesupport_introspection_c__People_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  People__rosidl_typesupport_introspection_c__People_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, people_msgs, msg, Person)();
  if (!People__rosidl_typesupport_introspection_c__People_message_type_support_handle.typesupport_identifier) {
    People__rosidl_typesupport_introspection_c__People_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &People__rosidl_typesupport_introspection_c__People_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
