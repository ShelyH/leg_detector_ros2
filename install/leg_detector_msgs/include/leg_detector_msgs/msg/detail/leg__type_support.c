// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from leg_detector_msgs:msg/Leg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "leg_detector_msgs/msg/detail/leg__rosidl_typesupport_introspection_c.h"
#include "leg_detector_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "leg_detector_msgs/msg/detail/leg__functions.h"
#include "leg_detector_msgs/msg/detail/leg__struct.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Leg__rosidl_typesupport_introspection_c__Leg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  leg_detector_msgs__msg__Leg__init(message_memory);
}

void Leg__rosidl_typesupport_introspection_c__Leg_fini_function(void * message_memory)
{
  leg_detector_msgs__msg__Leg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Leg__rosidl_typesupport_introspection_c__Leg_message_member_array[2] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leg_detector_msgs__msg__Leg, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leg_detector_msgs__msg__Leg, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Leg__rosidl_typesupport_introspection_c__Leg_message_members = {
  "leg_detector_msgs__msg",  // message namespace
  "Leg",  // message name
  2,  // number of fields
  sizeof(leg_detector_msgs__msg__Leg),
  Leg__rosidl_typesupport_introspection_c__Leg_message_member_array,  // message members
  Leg__rosidl_typesupport_introspection_c__Leg_init_function,  // function to initialize message memory (memory has to be allocated)
  Leg__rosidl_typesupport_introspection_c__Leg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Leg__rosidl_typesupport_introspection_c__Leg_message_type_support_handle = {
  0,
  &Leg__rosidl_typesupport_introspection_c__Leg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_leg_detector_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, leg_detector_msgs, msg, Leg)() {
  Leg__rosidl_typesupport_introspection_c__Leg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!Leg__rosidl_typesupport_introspection_c__Leg_message_type_support_handle.typesupport_identifier) {
    Leg__rosidl_typesupport_introspection_c__Leg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Leg__rosidl_typesupport_introspection_c__Leg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
