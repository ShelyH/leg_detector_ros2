// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from people_msgs:msg/People.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_MSGS__MSG__DETAIL__PEOPLE__TRAITS_HPP_
#define PEOPLE_MSGS__MSG__DETAIL__PEOPLE__TRAITS_HPP_

#include "people_msgs/msg/detail/people__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'people'
#include "people_msgs/msg/detail/person__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const people_msgs::msg::People & msg,
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

  // member: people
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.people.size() == 0) {
      out << "people: []\n";
    } else {
      out << "people:\n";
      for (auto item : msg.people) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const people_msgs::msg::People & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<people_msgs::msg::People>()
{
  return "people_msgs::msg::People";
}

template<>
inline const char * name<people_msgs::msg::People>()
{
  return "people_msgs/msg/People";
}

template<>
struct has_fixed_size<people_msgs::msg::People>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<people_msgs::msg::People>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<people_msgs::msg::People>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PEOPLE_MSGS__MSG__DETAIL__PEOPLE__TRAITS_HPP_
