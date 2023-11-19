// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from people_msgs:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_MSGS__MSG__DETAIL__PERSON__TRAITS_HPP_
#define PEOPLE_MSGS__MSG__DETAIL__PERSON__TRAITS_HPP_

#include "people_msgs/msg/detail/person__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'position'
// Member 'velocity'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const people_msgs::msg::Person & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_yaml(msg.position, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_yaml(msg.velocity, out, indentation + 2);
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

  // member: tagnames
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tagnames.size() == 0) {
      out << "tagnames: []\n";
    } else {
      out << "tagnames:\n";
      for (auto item : msg.tagnames) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tags.size() == 0) {
      out << "tags: []\n";
    } else {
      out << "tags:\n";
      for (auto item : msg.tags) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const people_msgs::msg::Person & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<people_msgs::msg::Person>()
{
  return "people_msgs::msg::Person";
}

template<>
inline const char * name<people_msgs::msg::Person>()
{
  return "people_msgs/msg/Person";
}

template<>
struct has_fixed_size<people_msgs::msg::Person>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<people_msgs::msg::Person>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<people_msgs::msg::Person>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PEOPLE_MSGS__MSG__DETAIL__PERSON__TRAITS_HPP_
