// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from leg_detector_msgs:msg/Leg.idl
// generated code does not contain a copyright notice

#ifndef LEG_DETECTOR_MSGS__MSG__DETAIL__LEG__STRUCT_HPP_
#define LEG_DETECTOR_MSGS__MSG__DETAIL__LEG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__leg_detector_msgs__msg__Leg __attribute__((deprecated))
#else
# define DEPRECATED__leg_detector_msgs__msg__Leg __declspec(deprecated)
#endif

namespace leg_detector_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Leg_
{
  using Type = Leg_<ContainerAllocator>;

  explicit Leg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence = 0.0f;
    }
  }

  explicit Leg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _confidence_type =
    float;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    leg_detector_msgs::msg::Leg_<ContainerAllocator> *;
  using ConstRawPtr =
    const leg_detector_msgs::msg::Leg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<leg_detector_msgs::msg::Leg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<leg_detector_msgs::msg::Leg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      leg_detector_msgs::msg::Leg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<leg_detector_msgs::msg::Leg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      leg_detector_msgs::msg::Leg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<leg_detector_msgs::msg::Leg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<leg_detector_msgs::msg::Leg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<leg_detector_msgs::msg::Leg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__leg_detector_msgs__msg__Leg
    std::shared_ptr<leg_detector_msgs::msg::Leg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__leg_detector_msgs__msg__Leg
    std::shared_ptr<leg_detector_msgs::msg::Leg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Leg_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const Leg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Leg_

// alias to use template instance with default allocator
using Leg =
  leg_detector_msgs::msg::Leg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace leg_detector_msgs

#endif  // LEG_DETECTOR_MSGS__MSG__DETAIL__LEG__STRUCT_HPP_
