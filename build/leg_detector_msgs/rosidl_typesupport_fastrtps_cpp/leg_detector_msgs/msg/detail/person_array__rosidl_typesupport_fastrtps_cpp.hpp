// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from leg_detector_msgs:msg/PersonArray.idl
// generated code does not contain a copyright notice

#ifndef LEG_DETECTOR_MSGS__MSG__DETAIL__PERSON_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define LEG_DETECTOR_MSGS__MSG__DETAIL__PERSON_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "leg_detector_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "leg_detector_msgs/msg/detail/person_array__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace leg_detector_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leg_detector_msgs
cdr_serialize(
  const leg_detector_msgs::msg::PersonArray & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leg_detector_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  leg_detector_msgs::msg::PersonArray & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leg_detector_msgs
get_serialized_size(
  const leg_detector_msgs::msg::PersonArray & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leg_detector_msgs
max_serialized_size_PersonArray(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace leg_detector_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leg_detector_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, leg_detector_msgs, msg, PersonArray)();

#ifdef __cplusplus
}
#endif

#endif  // LEG_DETECTOR_MSGS__MSG__DETAIL__PERSON_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
