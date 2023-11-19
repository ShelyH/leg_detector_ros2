// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leg_detector_msgs:msg/PersonArray.idl
// generated code does not contain a copyright notice

#ifndef LEG_DETECTOR_MSGS__MSG__DETAIL__PERSON_ARRAY__BUILDER_HPP_
#define LEG_DETECTOR_MSGS__MSG__DETAIL__PERSON_ARRAY__BUILDER_HPP_

#include "leg_detector_msgs/msg/detail/person_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace leg_detector_msgs
{

namespace msg
{

namespace builder
{

class Init_PersonArray_people
{
public:
  explicit Init_PersonArray_people(::leg_detector_msgs::msg::PersonArray & msg)
  : msg_(msg)
  {}
  ::leg_detector_msgs::msg::PersonArray people(::leg_detector_msgs::msg::PersonArray::_people_type arg)
  {
    msg_.people = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leg_detector_msgs::msg::PersonArray msg_;
};

class Init_PersonArray_header
{
public:
  Init_PersonArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PersonArray_people header(::leg_detector_msgs::msg::PersonArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PersonArray_people(msg_);
  }

private:
  ::leg_detector_msgs::msg::PersonArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::leg_detector_msgs::msg::PersonArray>()
{
  return leg_detector_msgs::msg::builder::Init_PersonArray_header();
}

}  // namespace leg_detector_msgs

#endif  // LEG_DETECTOR_MSGS__MSG__DETAIL__PERSON_ARRAY__BUILDER_HPP_
