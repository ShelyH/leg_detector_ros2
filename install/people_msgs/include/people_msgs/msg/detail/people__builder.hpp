// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from people_msgs:msg/People.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_MSGS__MSG__DETAIL__PEOPLE__BUILDER_HPP_
#define PEOPLE_MSGS__MSG__DETAIL__PEOPLE__BUILDER_HPP_

#include "people_msgs/msg/detail/people__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace people_msgs
{

namespace msg
{

namespace builder
{

class Init_People_people
{
public:
  explicit Init_People_people(::people_msgs::msg::People & msg)
  : msg_(msg)
  {}
  ::people_msgs::msg::People people(::people_msgs::msg::People::_people_type arg)
  {
    msg_.people = std::move(arg);
    return std::move(msg_);
  }

private:
  ::people_msgs::msg::People msg_;
};

class Init_People_header
{
public:
  Init_People_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_People_people header(::people_msgs::msg::People::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_People_people(msg_);
  }

private:
  ::people_msgs::msg::People msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::people_msgs::msg::People>()
{
  return people_msgs::msg::builder::Init_People_header();
}

}  // namespace people_msgs

#endif  // PEOPLE_MSGS__MSG__DETAIL__PEOPLE__BUILDER_HPP_
