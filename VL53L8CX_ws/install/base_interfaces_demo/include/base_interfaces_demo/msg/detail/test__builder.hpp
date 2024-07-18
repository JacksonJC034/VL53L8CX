// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__TEST__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__TEST__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/test__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_Test_test
{
public:
  Init_Test_test()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces_demo::msg::Test test(::base_interfaces_demo::msg::Test::_test_type arg)
  {
    msg_.test = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::Test msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::Test>()
{
  return base_interfaces_demo::msg::builder::Init_Test_test();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__TEST__BUILDER_HPP_
