// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from leg_detector_msgs:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef LEG_DETECTOR_MSGS__MSG__DETAIL__PERSON__TRAITS_HPP_
#define LEG_DETECTOR_MSGS__MSG__DETAIL__PERSON__TRAITS_HPP_

#include "leg_detector_msgs/msg/detail/person__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const leg_detector_msgs::msg::Person & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_yaml(msg.pose, out, indentation + 2);
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const leg_detector_msgs::msg::Person & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<leg_detector_msgs::msg::Person>()
{
  return "leg_detector_msgs::msg::Person";
}

template<>
inline const char * name<leg_detector_msgs::msg::Person>()
{
  return "leg_detector_msgs/msg/Person";
}

template<>
struct has_fixed_size<leg_detector_msgs::msg::Person>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<leg_detector_msgs::msg::Person>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<leg_detector_msgs::msg::Person>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LEG_DETECTOR_MSGS__MSG__DETAIL__PERSON__TRAITS_HPP_
