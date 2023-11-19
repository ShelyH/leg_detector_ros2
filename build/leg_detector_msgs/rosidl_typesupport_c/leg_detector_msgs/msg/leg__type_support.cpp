// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from leg_detector_msgs:msg/Leg.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "leg_detector_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "leg_detector_msgs/msg/detail/leg__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace leg_detector_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Leg_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Leg_type_support_ids_t;

static const _Leg_type_support_ids_t _Leg_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Leg_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Leg_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Leg_type_support_symbol_names_t _Leg_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, leg_detector_msgs, msg, Leg)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, leg_detector_msgs, msg, Leg)),
  }
};

typedef struct _Leg_type_support_data_t
{
  void * data[2];
} _Leg_type_support_data_t;

static _Leg_type_support_data_t _Leg_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Leg_message_typesupport_map = {
  2,
  "leg_detector_msgs",
  &_Leg_message_typesupport_ids.typesupport_identifier[0],
  &_Leg_message_typesupport_symbol_names.symbol_name[0],
  &_Leg_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Leg_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Leg_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace leg_detector_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_leg_detector_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, leg_detector_msgs, msg, Leg)() {
  return &::leg_detector_msgs::msg::rosidl_typesupport_c::Leg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
