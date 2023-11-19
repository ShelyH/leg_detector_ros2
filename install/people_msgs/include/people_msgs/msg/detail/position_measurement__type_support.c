// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from people_msgs:msg/PositionMeasurement.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "people_msgs/msg/detail/position_measurement__rosidl_typesupport_introspection_c.h"
#include "people_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "people_msgs/msg/detail/position_measurement__functions.h"
#include "people_msgs/msg/detail/position_measurement__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `name`
// Member `object_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `pos`
#include "geometry_msgs/msg/point.h"
// Member `pos`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PositionMeasurement__rosidl_typesupport_introspection_c__PositionMeasurement_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  people_msgs__msg__PositionMeasurement__init(message_memory);
}

void PositionMeasurement__rosidl_typesupport_introspection_c__PositionMeasurement_fini_function(void * message_memory)
{
  people_msgs__msg__PositionMeasurement__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PositionMeasurement__rosidl_typesupport_introspection_c__PositionMeasurement_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(people_msgs__msg__PositionMeasurement, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(people_msgs__msg__PositionMeasurement, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(people_msgs__msg__PositionMeasurement, object_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(people_msgs__msg__PositionMeasurement, pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reliability",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(people_msgs__msg__PositionMeasurement, reliability),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(people_msgs__msg__PositionMeasurement, covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "initialization",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(people_msgs__msg__PositionMeasurement, initialization),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PositionMeasurement__rosidl_typesupport_introspection_c__PositionMeasurement_message_members = {
  "people_msgs__msg",  // message namespace
  "PositionMeasurement",  // message name
  7,  // number of fields
  sizeof(people_msgs__msg__PositionMeasurement),
  PositionMeasurement__rosidl_typesupport_introspection_c__PositionMeasurement_message_member_array,  // message members
  PositionMeasurement__rosidl_typesupport_introspection_c__PositionMeasurement_init_function,  // function to initialize message memory (memory has to be allocated)
  PositionMeasurement__rosidl_typesupport_introspection_c__PositionMeasurement_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PositionMeasurement__rosidl_typesupport_introspection_c__PositionMeasurement_message_type_support_handle = {
  0,
  &PositionMeasurement__rosidl_typesupport_introspection_c__PositionMeasurement_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_people_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, people_msgs, msg, PositionMeasurement)() {
  PositionMeasurement__rosidl_typesupport_introspection_c__PositionMeasurement_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  PositionMeasurement__rosidl_typesupport_introspection_c__PositionMeasurement_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!PositionMeasurement__rosidl_typesupport_introspection_c__PositionMeasurement_message_type_support_handle.typesupport_identifier) {
    PositionMeasurement__rosidl_typesupport_introspection_c__PositionMeasurement_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PositionMeasurement__rosidl_typesupport_introspection_c__PositionMeasurement_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
