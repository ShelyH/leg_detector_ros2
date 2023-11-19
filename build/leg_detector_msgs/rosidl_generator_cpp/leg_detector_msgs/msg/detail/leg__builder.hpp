// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leg_detector_msgs:msg/Leg.idl
// generated code does not contain a copyright notice

#ifndef LEG_DETECTOR_MSGS__MSG__DETAIL__LEG__BUILDER_HPP_
#define LEG_DETECTOR_MSGS__MSG__DETAIL__LEG__BUILDER_HPP_

#include "leg_detector_msgs/msg/detail/leg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace leg_detector_msgs
{

namespace msg
{

namespace builder
{

class Init_Leg_confidence
{
public:
  explicit Init_Leg_confidence(::leg_detector_msgs::msg::Leg & msg)
  : msg_(msg)
  {}
  ::leg_detector_msgs::msg::Leg confidence(::leg_detector_msgs::msg::Leg::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leg_detector_msgs::msg::Leg msg_;
};

class Init_Leg_position
{
public:
  Init_Leg_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Leg_confidence position(::leg_detector_msgs::msg::Leg::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Leg_confidence(msg_);
  }

private:
  ::leg_detector_msgs::msg::Leg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::leg_detector_msgs::msg::Leg>()
{
  return leg_detector_msgs::msg::builder::Init_Leg_position();
}

}  // namespace leg_detector_msgs

#endif  // LEG_DETECTOR_MSGS__MSG__DETAIL__LEG__BUILDER_HPP_
