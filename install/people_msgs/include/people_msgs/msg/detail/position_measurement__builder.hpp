// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from people_msgs:msg/PositionMeasurement.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT__BUILDER_HPP_
#define PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT__BUILDER_HPP_

#include "people_msgs/msg/detail/position_measurement__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace people_msgs
{

namespace msg
{

namespace builder
{

class Init_PositionMeasurement_initialization
{
public:
  explicit Init_PositionMeasurement_initialization(::people_msgs::msg::PositionMeasurement & msg)
  : msg_(msg)
  {}
  ::people_msgs::msg::PositionMeasurement initialization(::people_msgs::msg::PositionMeasurement::_initialization_type arg)
  {
    msg_.initialization = std::move(arg);
    return std::move(msg_);
  }

private:
  ::people_msgs::msg::PositionMeasurement msg_;
};

class Init_PositionMeasurement_covariance
{
public:
  explicit Init_PositionMeasurement_covariance(::people_msgs::msg::PositionMeasurement & msg)
  : msg_(msg)
  {}
  Init_PositionMeasurement_initialization covariance(::people_msgs::msg::PositionMeasurement::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return Init_PositionMeasurement_initialization(msg_);
  }

private:
  ::people_msgs::msg::PositionMeasurement msg_;
};

class Init_PositionMeasurement_reliability
{
public:
  explicit Init_PositionMeasurement_reliability(::people_msgs::msg::PositionMeasurement & msg)
  : msg_(msg)
  {}
  Init_PositionMeasurement_covariance reliability(::people_msgs::msg::PositionMeasurement::_reliability_type arg)
  {
    msg_.reliability = std::move(arg);
    return Init_PositionMeasurement_covariance(msg_);
  }

private:
  ::people_msgs::msg::PositionMeasurement msg_;
};

class Init_PositionMeasurement_pos
{
public:
  explicit Init_PositionMeasurement_pos(::people_msgs::msg::PositionMeasurement & msg)
  : msg_(msg)
  {}
  Init_PositionMeasurement_reliability pos(::people_msgs::msg::PositionMeasurement::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_PositionMeasurement_reliability(msg_);
  }

private:
  ::people_msgs::msg::PositionMeasurement msg_;
};

class Init_PositionMeasurement_object_id
{
public:
  explicit Init_PositionMeasurement_object_id(::people_msgs::msg::PositionMeasurement & msg)
  : msg_(msg)
  {}
  Init_PositionMeasurement_pos object_id(::people_msgs::msg::PositionMeasurement::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_PositionMeasurement_pos(msg_);
  }

private:
  ::people_msgs::msg::PositionMeasurement msg_;
};

class Init_PositionMeasurement_name
{
public:
  explicit Init_PositionMeasurement_name(::people_msgs::msg::PositionMeasurement & msg)
  : msg_(msg)
  {}
  Init_PositionMeasurement_object_id name(::people_msgs::msg::PositionMeasurement::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_PositionMeasurement_object_id(msg_);
  }

private:
  ::people_msgs::msg::PositionMeasurement msg_;
};

class Init_PositionMeasurement_header
{
public:
  Init_PositionMeasurement_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionMeasurement_name header(::people_msgs::msg::PositionMeasurement::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PositionMeasurement_name(msg_);
  }

private:
  ::people_msgs::msg::PositionMeasurement msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::people_msgs::msg::PositionMeasurement>()
{
  return people_msgs::msg::builder::Init_PositionMeasurement_header();
}

}  // namespace people_msgs

#endif  // PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT__BUILDER_HPP_
