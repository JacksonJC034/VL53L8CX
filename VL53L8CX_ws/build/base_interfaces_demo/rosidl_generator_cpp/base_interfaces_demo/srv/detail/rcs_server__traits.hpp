// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfaces_demo:srv/RcsServer.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__SRV__DETAIL__RCS_SERVER__TRAITS_HPP_
#define BASE_INTERFACES_DEMO__SRV__DETAIL__RCS_SERVER__TRAITS_HPP_

#include "base_interfaces_demo/srv/detail/rcs_server__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces_demo::srv::RcsServer_Request>()
{
  return "base_interfaces_demo::srv::RcsServer_Request";
}

template<>
inline const char * name<base_interfaces_demo::srv::RcsServer_Request>()
{
  return "base_interfaces_demo/srv/RcsServer_Request";
}

template<>
struct has_fixed_size<base_interfaces_demo::srv::RcsServer_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<base_interfaces_demo::srv::RcsServer_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<base_interfaces_demo::srv::RcsServer_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces_demo::srv::RcsServer_Response>()
{
  return "base_interfaces_demo::srv::RcsServer_Response";
}

template<>
inline const char * name<base_interfaces_demo::srv::RcsServer_Response>()
{
  return "base_interfaces_demo/srv/RcsServer_Response";
}

template<>
struct has_fixed_size<base_interfaces_demo::srv::RcsServer_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfaces_demo::srv::RcsServer_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfaces_demo::srv::RcsServer_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces_demo::srv::RcsServer>()
{
  return "base_interfaces_demo::srv::RcsServer";
}

template<>
inline const char * name<base_interfaces_demo::srv::RcsServer>()
{
  return "base_interfaces_demo/srv/RcsServer";
}

template<>
struct has_fixed_size<base_interfaces_demo::srv::RcsServer>
  : std::integral_constant<
    bool,
    has_fixed_size<base_interfaces_demo::srv::RcsServer_Request>::value &&
    has_fixed_size<base_interfaces_demo::srv::RcsServer_Response>::value
  >
{
};

template<>
struct has_bounded_size<base_interfaces_demo::srv::RcsServer>
  : std::integral_constant<
    bool,
    has_bounded_size<base_interfaces_demo::srv::RcsServer_Request>::value &&
    has_bounded_size<base_interfaces_demo::srv::RcsServer_Response>::value
  >
{
};

template<>
struct is_service<base_interfaces_demo::srv::RcsServer>
  : std::true_type
{
};

template<>
struct is_service_request<base_interfaces_demo::srv::RcsServer_Request>
  : std::true_type
{
};

template<>
struct is_service_response<base_interfaces_demo::srv::RcsServer_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BASE_INTERFACES_DEMO__SRV__DETAIL__RCS_SERVER__TRAITS_HPP_
