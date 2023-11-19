// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from people_msgs:msg/PositionMeasurementArray.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT_ARRAY__BUILDER_HPP_
#define PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT_ARRAY__BUILDER_HPP_

#include "people_msgs/msg/detail/position_measurement_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace people_msgs
{

namespace msg
{

namespace builder
{

class Init_PositionMeasurementArray_cooccurrence
{
public:
  explicit Init_PositionMeasurementArray_cooccurrence(::people_msgs::msg::PositionMeasurementArray & msg)
  : msg_(msg)
  {}
  ::people_msgs::msg::PositionMeasurementArray cooccurrence(::people_msgs::msg::PositionMeasurementArray::_cooccurrence_type arg)
  {
    msg_.cooccurrence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::people_msgs::msg::PositionMeasurementArray msg_;
};

class Init_PositionMeasurementArray_people
{
public:
  explicit Init_PositionMeasurementArray_people(::people_msgs::msg::PositionMeasurementArray & msg)
  : msg_(msg)
  {}
  Init_PositionMeasurementArray_cooccurrence people(::people_msgs::msg::PositionMeasurementArray::_people_type arg)
  {
    msg_.people = std::move(arg);
    return Init_PositionMeasurementArray_cooccurrence(msg_);
  }

private:
  ::people_msgs::msg::PositionMeasurementArray msg_;
};

class Init_PositionMeasurementArray_header
{
public:
  Init_PositionMeasurementArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionMeasurementArray_people header(::people_msgs::msg::PositionMeasurementArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PositionMeasurementArray_people(msg_);
  }

private:
  ::people_msgs::msg::PositionMeasurementArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::people_msgs::msg::PositionMeasurementArray>()
{
  return people_msgs::msg::builder::Init_PositionMeasurementArray_header();
}

}  // namespace people_msgs

#endif  // PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT_ARRAY__BUILDER_HPP_
