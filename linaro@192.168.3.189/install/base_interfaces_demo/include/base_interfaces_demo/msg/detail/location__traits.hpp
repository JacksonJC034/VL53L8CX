// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfaces_demo:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__LOCATION__TRAITS_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__LOCATION__TRAITS_HPP_

#include "base_interfaces_demo/msg/detail/location__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces_demo::msg::Location>()
{
  return "base_interfaces_demo::msg::Location";
}

template<>
inline const char * name<base_interfaces_demo::msg::Location>()
{
  return "base_interfaces_demo/msg/Location";
}

template<>
struct has_fixed_size<base_interfaces_demo::msg::Location>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfaces_demo::msg::Location>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfaces_demo::msg::Location>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__LOCATION__TRAITS_HPP_
