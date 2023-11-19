// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from people_msgs:msg/PersonStamped.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_MSGS__MSG__DETAIL__PERSON_STAMPED__STRUCT_HPP_
#define PEOPLE_MSGS__MSG__DETAIL__PERSON_STAMPED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'person'
#include "people_msgs/msg/detail/person__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__people_msgs__msg__PersonStamped __attribute__((deprecated))
#else
# define DEPRECATED__people_msgs__msg__PersonStamped __declspec(deprecated)
#endif

namespace people_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PersonStamped_
{
  using Type = PersonStamped_<ContainerAllocator>;

  explicit PersonStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    person(_init)
  {
    (void)_init;
  }

  explicit PersonStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    person(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _person_type =
    people_msgs::msg::Person_<ContainerAllocator>;
  _person_type person;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__person(
    const people_msgs::msg::Person_<ContainerAllocator> & _arg)
  {
    this->person = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    people_msgs::msg::PersonStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const people_msgs::msg::PersonStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<people_msgs::msg::PersonStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<people_msgs::msg::PersonStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      people_msgs::msg::PersonStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<people_msgs::msg::PersonStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      people_msgs::msg::PersonStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<people_msgs::msg::PersonStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<people_msgs::msg::PersonStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<people_msgs::msg::PersonStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__people_msgs__msg__PersonStamped
    std::shared_ptr<people_msgs::msg::PersonStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__people_msgs__msg__PersonStamped
    std::shared_ptr<people_msgs::msg::PersonStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PersonStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->person != other.person) {
      return false;
    }
    return true;
  }
  bool operator!=(const PersonStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PersonStamped_

// alias to use template instance with default allocator
using PersonStamped =
  people_msgs::msg::PersonStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace people_msgs

#endif  // PEOPLE_MSGS__MSG__DETAIL__PERSON_STAMPED__STRUCT_HPP_
