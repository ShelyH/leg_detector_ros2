// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leg_detector_msgs:msg/LegArray.idl
// generated code does not contain a copyright notice

#ifndef LEG_DETECTOR_MSGS__MSG__DETAIL__LEG_ARRAY__BUILDER_HPP_
#define LEG_DETECTOR_MSGS__MSG__DETAIL__LEG_ARRAY__BUILDER_HPP_

#include "leg_detector_msgs/msg/detail/leg_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace leg_detector_msgs
{

namespace msg
{

namespace builder
{

class Init_LegArray_legs
{
public:
  explicit Init_LegArray_legs(::leg_detector_msgs::msg::LegArray & msg)
  : msg_(msg)
  {}
  ::leg_detector_msgs::msg::LegArray legs(::leg_detector_msgs::msg::LegArray::_legs_type arg)
  {
    msg_.legs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leg_detector_msgs::msg::LegArray msg_;
};

class Init_LegArray_header
{
public:
  Init_LegArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LegArray_legs header(::leg_detector_msgs::msg::LegArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LegArray_legs(msg_);
  }

private:
  ::leg_detector_msgs::msg::LegArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::leg_detector_msgs::msg::LegArray>()
{
  return leg_detector_msgs::msg::builder::Init_LegArray_header();
}

}  // namespace leg_detector_msgs

#endif  // LEG_DETECTOR_MSGS__MSG__DETAIL__LEG_ARRAY__BUILDER_HPP_
