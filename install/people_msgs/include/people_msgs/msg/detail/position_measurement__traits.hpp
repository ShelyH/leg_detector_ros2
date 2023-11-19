// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from people_msgs:msg/PositionMeasurement.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT__TRAITS_HPP_
#define PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT__TRAITS_HPP_

#include "people_msgs/msg/detail/position_measurement__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pos'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const people_msgs::msg::PositionMeasurement & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_id: ";
    value_to_yaml(msg.object_id, out);
    out << "\n";
  }

  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos:\n";
    to_yaml(msg.pos, out, indentation + 2);
  }

  // member: reliability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reliability: ";
    value_to_yaml(msg.reliability, out);
    out << "\n";
  }

  // member: covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.covariance.size() == 0) {
      out << "covariance: []\n";
    } else {
      out << "covariance:\n";
      for (auto item : msg.covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: initialization
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initialization: ";
    character_value_to_yaml(msg.initialization, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const people_msgs::msg::PositionMeasurement & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<people_msgs::msg::PositionMeasurement>()
{
  return "people_msgs::msg::PositionMeasurement";
}

template<>
inline const char * name<people_msgs::msg::PositionMeasurement>()
{
  return "people_msgs/msg/PositionMeasurement";
}

template<>
struct has_fixed_size<people_msgs::msg::PositionMeasurement>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<people_msgs::msg::PositionMeasurement>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<people_msgs::msg::PositionMeasurement>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT__TRAITS_HPP_
