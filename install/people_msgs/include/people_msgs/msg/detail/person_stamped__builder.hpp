// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from people_msgs:msg/PersonStamped.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_MSGS__MSG__DETAIL__PERSON_STAMPED__BUILDER_HPP_
#define PEOPLE_MSGS__MSG__DETAIL__PERSON_STAMPED__BUILDER_HPP_

#include "people_msgs/msg/detail/person_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace people_msgs
{

namespace msg
{

namespace builder
{

class Init_PersonStamped_person
{
public:
  explicit Init_PersonStamped_person(::people_msgs::msg::PersonStamped & msg)
  : msg_(msg)
  {}
  ::people_msgs::msg::PersonStamped person(::people_msgs::msg::PersonStamped::_person_type arg)
  {
    msg_.person = std::move(arg);
    return std::move(msg_);
  }

private:
  ::people_msgs::msg::PersonStamped msg_;
};

class Init_PersonStamped_header
{
public:
  Init_PersonStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PersonStamped_person header(::people_msgs::msg::PersonStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PersonStamped_person(msg_);
  }

private:
  ::people_msgs::msg::PersonStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::people_msgs::msg::PersonStamped>()
{
  return people_msgs::msg::builder::Init_PersonStamped_header();
}

}  // namespace people_msgs

#endif  // PEOPLE_MSGS__MSG__DETAIL__PERSON_STAMPED__BUILDER_HPP_
