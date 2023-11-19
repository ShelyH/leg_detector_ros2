// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from leg_detector_msgs:msg/LegArray.idl
// generated code does not contain a copyright notice

#ifndef LEG_DETECTOR_MSGS__MSG__DETAIL__LEG_ARRAY__TRAITS_HPP_
#define LEG_DETECTOR_MSGS__MSG__DETAIL__LEG_ARRAY__TRAITS_HPP_

#include "leg_detector_msgs/msg/detail/leg_array__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'legs'
#include "leg_detector_msgs/msg/detail/leg__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const leg_detector_msgs::msg::LegArray & msg,
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

  // member: legs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.legs.size() == 0) {
      out << "legs: []\n";
    } else {
      out << "legs:\n";
      for (auto item : msg.legs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const leg_detector_msgs::msg::LegArray & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<leg_detector_msgs::msg::LegArray>()
{
  return "leg_detector_msgs::msg::LegArray";
}

template<>
inline const char * name<leg_detector_msgs::msg::LegArray>()
{
  return "leg_detector_msgs/msg/LegArray";
}

template<>
struct has_fixed_size<leg_detector_msgs::msg::LegArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<leg_detector_msgs::msg::LegArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<leg_detector_msgs::msg::LegArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LEG_DETECTOR_MSGS__MSG__DETAIL__LEG_ARRAY__TRAITS_HPP_
