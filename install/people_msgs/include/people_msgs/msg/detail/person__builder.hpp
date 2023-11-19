// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from people_msgs:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_MSGS__MSG__DETAIL__PERSON__BUILDER_HPP_
#define PEOPLE_MSGS__MSG__DETAIL__PERSON__BUILDER_HPP_

#include "people_msgs/msg/detail/person__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace people_msgs
{

namespace msg
{

namespace builder
{

class Init_Person_tags
{
public:
  explicit Init_Person_tags(::people_msgs::msg::Person & msg)
  : msg_(msg)
  {}
  ::people_msgs::msg::Person tags(::people_msgs::msg::Person::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::people_msgs::msg::Person msg_;
};

class Init_Person_tagnames
{
public:
  explicit Init_Person_tagnames(::people_msgs::msg::Person & msg)
  : msg_(msg)
  {}
  Init_Person_tags tagnames(::people_msgs::msg::Person::_tagnames_type arg)
  {
    msg_.tagnames = std::move(arg);
    return Init_Person_tags(msg_);
  }

private:
  ::people_msgs::msg::Person msg_;
};

class Init_Person_reliability
{
public:
  explicit Init_Person_reliability(::people_msgs::msg::Person & msg)
  : msg_(msg)
  {}
  Init_Person_tagnames reliability(::people_msgs::msg::Person::_reliability_type arg)
  {
    msg_.reliability = std::move(arg);
    return Init_Person_tagnames(msg_);
  }

private:
  ::people_msgs::msg::Person msg_;
};

class Init_Person_velocity
{
public:
  explicit Init_Person_velocity(::people_msgs::msg::Person & msg)
  : msg_(msg)
  {}
  Init_Person_reliability velocity(::people_msgs::msg::Person::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_Person_reliability(msg_);
  }

private:
  ::people_msgs::msg::Person msg_;
};

class Init_Person_position
{
public:
  explicit Init_Person_position(::people_msgs::msg::Person & msg)
  : msg_(msg)
  {}
  Init_Person_velocity position(::people_msgs::msg::Person::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Person_velocity(msg_);
  }

private:
  ::people_msgs::msg::Person msg_;
};

class Init_Person_name
{
public:
  Init_Person_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Person_position name(::people_msgs::msg::Person::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Person_position(msg_);
  }

private:
  ::people_msgs::msg::Person msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::people_msgs::msg::Person>()
{
  return people_msgs::msg::builder::Init_Person_name();
}

}  // namespace people_msgs

#endif  // PEOPLE_MSGS__MSG__DETAIL__PERSON__BUILDER_HPP_
