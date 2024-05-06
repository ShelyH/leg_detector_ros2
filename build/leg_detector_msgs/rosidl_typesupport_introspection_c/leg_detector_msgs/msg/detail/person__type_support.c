// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from leg_detector_msgs:msg/Person.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "leg_detector_msgs/msg/detail/person__rosidl_typesupport_introspection_c.h"
#include "leg_detector_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "leg_detector_msgs/msg/detail/person__functions.h"
#include "leg_detector_msgs/msg/detail/person__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Person__rosidl_typesupport_introspection_c__Person_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  leg_detector_msgs__msg__Person__init(message_memory);
}

void Person__rosidl_typesupport_introspection_c__Person_fini_function(void * message_memory)
{
  leg_detector_msgs__msg__Person__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Person__rosidl_typesupport_introspection_c__Person_message_member_array[4] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leg_detector_msgs__msg__Person, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leg_detector_msgs__msg__Person, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leg_detector_msgs__msg__Person, vx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leg_detector_msgs__msg__Person, vy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Person__rosidl_typesupport_introspection_c__Person_message_members = {
  "leg_detector_msgs__msg",  // message namespace
  "Person",  // message name
  4,  // number of fields
  sizeof(leg_detector_msgs__msg__Person),
  Person__rosidl_typesupport_introspection_c__Person_message_member_array,  // message members
  Person__rosidl_typesupport_introspection_c__Person_init_function,  // function to initialize message memory (memory has to be allocated)
  Person__rosidl_typesupport_introspection_c__Person_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Person__rosidl_typesupport_introspection_c__Person_message_type_support_handle = {
  0,
  &Person__rosidl_typesupport_introspection_c__Person_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_leg_detector_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, leg_detector_msgs, msg, Person)() {
  Person__rosidl_typesupport_introspection_c__Person_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!Person__rosidl_typesupport_introspection_c__Person_message_type_support_handle.typesupport_identifier) {
    Person__rosidl_typesupport_introspection_c__Person_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Person__rosidl_typesupport_introspection_c__Person_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
