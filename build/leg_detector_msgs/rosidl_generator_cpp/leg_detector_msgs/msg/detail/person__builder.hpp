// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leg_detector_msgs:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef LEG_DETECTOR_MSGS__MSG__DETAIL__PERSON__BUILDER_HPP_
#define LEG_DETECTOR_MSGS__MSG__DETAIL__PERSON__BUILDER_HPP_

#include "leg_detector_msgs/msg/detail/person__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace leg_detector_msgs
{

namespace msg
{

namespace builder
{

class Init_Person_id
{
public:
  explicit Init_Person_id(::leg_detector_msgs::msg::Person & msg)
  : msg_(msg)
  {}
  ::leg_detector_msgs::msg::Person id(::leg_detector_msgs::msg::Person::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leg_detector_msgs::msg::Person msg_;
};

class Init_Person_pose
{
public:
  Init_Person_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Person_id pose(::leg_detector_msgs::msg::Person::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Person_id(msg_);
  }

private:
  ::leg_detector_msgs::msg::Person msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::leg_detector_msgs::msg::Person>()
{
  return leg_detector_msgs::msg::builder::Init_Person_pose();
}

}  // namespace leg_detector_msgs

#endif  // LEG_DETECTOR_MSGS__MSG__DETAIL__PERSON__BUILDER_HPP_
