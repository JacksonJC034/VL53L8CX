// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfaces_demo:msg/SeekCmd.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__SEEK_CMD__TRAITS_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__SEEK_CMD__TRAITS_HPP_

#include "base_interfaces_demo/msg/detail/seek_cmd__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces_demo::msg::SeekCmd>()
{
  return "base_interfaces_demo::msg::SeekCmd";
}

template<>
inline const char * name<base_interfaces_demo::msg::SeekCmd>()
{
  return "base_interfaces_demo/msg/SeekCmd";
}

template<>
struct has_fixed_size<base_interfaces_demo::msg::SeekCmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfaces_demo::msg::SeekCmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfaces_demo::msg::SeekCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__SEEK_CMD__TRAITS_HPP_
