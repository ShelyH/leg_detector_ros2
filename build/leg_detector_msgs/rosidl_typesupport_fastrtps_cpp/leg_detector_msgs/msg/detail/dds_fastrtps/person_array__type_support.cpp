// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from leg_detector_msgs:msg/PersonArray.idl
// generated code does not contain a copyright notice
#include "leg_detector_msgs/msg/detail/person_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "leg_detector_msgs/msg/detail/person_array__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace leg_detector_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const leg_detector_msgs::msg::Person &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  leg_detector_msgs::msg::Person &);
size_t get_serialized_size(
  const leg_detector_msgs::msg::Person &,
  size_t current_alignment);
size_t
max_serialized_size_Person(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace leg_detector_msgs


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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: people
  {
    size_t size = ros_message.people.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      leg_detector_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.people[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leg_detector_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  leg_detector_msgs::msg::PersonArray & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: people
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.people.resize(size);
    for (size_t i = 0; i < size; i++) {
      leg_detector_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.people[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leg_detector_msgs
get_serialized_size(
  const leg_detector_msgs::msg::PersonArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: people
  {
    size_t array_size = ros_message.people.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        leg_detector_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.people[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leg_detector_msgs
max_serialized_size_PersonArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: people
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        leg_detector_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Person(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PersonArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const leg_detector_msgs::msg::PersonArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PersonArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<leg_detector_msgs::msg::PersonArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PersonArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const leg_detector_msgs::msg::PersonArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PersonArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PersonArray(full_bounded, 0);
}

static message_type_support_callbacks_t _PersonArray__callbacks = {
  "leg_detector_msgs::msg",
  "PersonArray",
  _PersonArray__cdr_serialize,
  _PersonArray__cdr_deserialize,
  _PersonArray__get_serialized_size,
  _PersonArray__max_serialized_size
};

static rosidl_message_type_support_t _PersonArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PersonArray__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace leg_detector_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_leg_detector_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<leg_detector_msgs::msg::PersonArray>()
{
  return &leg_detector_msgs::msg::typesupport_fastrtps_cpp::_PersonArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, leg_detector_msgs, msg, PersonArray)() {
  return &leg_detector_msgs::msg::typesupport_fastrtps_cpp::_PersonArray__handle;
}

#ifdef __cplusplus
}
#endif
