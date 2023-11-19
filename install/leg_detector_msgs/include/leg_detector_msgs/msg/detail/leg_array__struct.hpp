// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from leg_detector_msgs:msg/LegArray.idl
// generated code does not contain a copyright notice

#ifndef LEG_DETECTOR_MSGS__MSG__DETAIL__LEG_ARRAY__STRUCT_HPP_
#define LEG_DETECTOR_MSGS__MSG__DETAIL__LEG_ARRAY__STRUCT_HPP_

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
// Member 'legs'
#include "leg_detector_msgs/msg/detail/leg__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__leg_detector_msgs__msg__LegArray __attribute__((deprecated))
#else
# define DEPRECATED__leg_detector_msgs__msg__LegArray __declspec(deprecated)
#endif

namespace leg_detector_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LegArray_
{
  using Type = LegArray_<ContainerAllocator>;

  explicit LegArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit LegArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _legs_type =
    std::vector<leg_detector_msgs::msg::Leg_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<leg_detector_msgs::msg::Leg_<ContainerAllocator>>>;
  _legs_type legs;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__legs(
    const std::vector<leg_detector_msgs::msg::Leg_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<leg_detector_msgs::msg::Leg_<ContainerAllocator>>> & _arg)
  {
    this->legs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    leg_detector_msgs::msg::LegArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const leg_detector_msgs::msg::LegArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<leg_detector_msgs::msg::LegArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<leg_detector_msgs::msg::LegArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      leg_detector_msgs::msg::LegArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<leg_detector_msgs::msg::LegArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      leg_detector_msgs::msg::LegArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<leg_detector_msgs::msg::LegArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<leg_detector_msgs::msg::LegArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<leg_detector_msgs::msg::LegArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__leg_detector_msgs__msg__LegArray
    std::shared_ptr<leg_detector_msgs::msg::LegArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__leg_detector_msgs__msg__LegArray
    std::shared_ptr<leg_detector_msgs::msg::LegArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LegArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->legs != other.legs) {
      return false;
    }
    return true;
  }
  bool operator!=(const LegArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LegArray_

// alias to use template instance with default allocator
using LegArray =
  leg_detector_msgs::msg::LegArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace leg_detector_msgs

#endif  // LEG_DETECTOR_MSGS__MSG__DETAIL__LEG_ARRAY__STRUCT_HPP_
