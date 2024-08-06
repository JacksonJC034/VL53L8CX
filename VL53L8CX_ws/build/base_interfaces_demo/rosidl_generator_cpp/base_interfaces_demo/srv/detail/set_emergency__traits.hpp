// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfaces_demo:srv/SetEmergency.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__SRV__DETAIL__SET_EMERGENCY__TRAITS_HPP_
#define BASE_INTERFACES_DEMO__SRV__DETAIL__SET_EMERGENCY__TRAITS_HPP_

#include "base_interfaces_demo/srv/detail/set_emergency__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces_demo::srv::SetEmergency_Request>()
{
  return "base_interfaces_demo::srv::SetEmergency_Request";
}

template<>
inline const char * name<base_interfaces_demo::srv::SetEmergency_Request>()
{
  return "base_interfaces_demo/srv/SetEmergency_Request";
}

template<>
struct has_fixed_size<base_interfaces_demo::srv::SetEmergency_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfaces_demo::srv::SetEmergency_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfaces_demo::srv::SetEmergency_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces_demo::srv::SetEmergency_Response>()
{
  return "base_interfaces_demo::srv::SetEmergency_Response";
}

template<>
inline const char * name<base_interfaces_demo::srv::SetEmergency_Response>()
{
  return "base_interfaces_demo/srv/SetEmergency_Response";
}

template<>
struct has_fixed_size<base_interfaces_demo::srv::SetEmergency_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfaces_demo::srv::SetEmergency_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfaces_demo::srv::SetEmergency_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces_demo::srv::SetEmergency>()
{
  return "base_interfaces_demo::srv::SetEmergency";
}

template<>
inline const char * name<base_interfaces_demo::srv::SetEmergency>()
{
  return "base_interfaces_demo/srv/SetEmergency";
}

template<>
struct has_fixed_size<base_interfaces_demo::srv::SetEmergency>
  : std::integral_constant<
    bool,
    has_fixed_size<base_interfaces_demo::srv::SetEmergency_Request>::value &&
    has_fixed_size<base_interfaces_demo::srv::SetEmergency_Response>::value
  >
{
};

template<>
struct has_bounded_size<base_interfaces_demo::srv::SetEmergency>
  : std::integral_constant<
    bool,
    has_bounded_size<base_interfaces_demo::srv::SetEmergency_Request>::value &&
    has_bounded_size<base_interfaces_demo::srv::SetEmergency_Response>::value
  >
{
};

template<>
struct is_service<base_interfaces_demo::srv::SetEmergency>
  : std::true_type
{
};

template<>
struct is_service_request<base_interfaces_demo::srv::SetEmergency_Request>
  : std::true_type
{
};

template<>
struct is_service_response<base_interfaces_demo::srv::SetEmergency_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BASE_INTERFACES_DEMO__SRV__DETAIL__SET_EMERGENCY__TRAITS_HPP_
