// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:msg/BmsInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__BMS_INFO__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__BMS_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__msg__BmsInfo __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__msg__BmsInfo __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BmsInfo_
{
  using Type = BmsInfo_<ContainerAllocator>;

  explicit BmsInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cell_num = 0ul;
      this->run_time = 0ul;
      this->hsoc = 0ul;
      this->voltage = 0.0;
      this->cur_cadc = 0ul;
      std::fill<typename std::array<double, 6>::iterator, double>(this->temp.begin(), this->temp.end(), 0.0);
      this->temp1 = 0ul;
      this->temp2 = 0ul;
      this->temp3 = 0ul;
      this->temp4 = 0ul;
      this->temp5 = 0ul;
      this->temp6 = 0ul;
      this->tmax = 0.0;
      this->tmin = 0.0;
      this->vmax = 0ul;
      this->vmin = 0ul;
      this->vmaxmin_no = 0ul;
      this->rsoc = 0ul;
      this->fcc = 0.0;
      this->rc = 0.0;
      this->cycle_count = 0ul;
      this->protect = 0ul;
      this->alarm = 0ul;
      this->pack_status = 0ul;
      std::fill<typename std::array<uint32_t, 17>::iterator, uint32_t>(this->vcell.begin(), this->vcell.end(), 0ul);
      this->vcell1 = 0ul;
      this->state = 0l;
      this->soc = 0ul;
      this->status = 0l;
      this->error_code = 0ll;
    }
  }

  explicit BmsInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : temp(_alloc),
    vcell(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cell_num = 0ul;
      this->run_time = 0ul;
      this->hsoc = 0ul;
      this->voltage = 0.0;
      this->cur_cadc = 0ul;
      std::fill<typename std::array<double, 6>::iterator, double>(this->temp.begin(), this->temp.end(), 0.0);
      this->temp1 = 0ul;
      this->temp2 = 0ul;
      this->temp3 = 0ul;
      this->temp4 = 0ul;
      this->temp5 = 0ul;
      this->temp6 = 0ul;
      this->tmax = 0.0;
      this->tmin = 0.0;
      this->vmax = 0ul;
      this->vmin = 0ul;
      this->vmaxmin_no = 0ul;
      this->rsoc = 0ul;
      this->fcc = 0.0;
      this->rc = 0.0;
      this->cycle_count = 0ul;
      this->protect = 0ul;
      this->alarm = 0ul;
      this->pack_status = 0ul;
      std::fill<typename std::array<uint32_t, 17>::iterator, uint32_t>(this->vcell.begin(), this->vcell.end(), 0ul);
      this->vcell1 = 0ul;
      this->state = 0l;
      this->soc = 0ul;
      this->status = 0l;
      this->error_code = 0ll;
    }
  }

  // field types and members
  using _cell_num_type =
    uint32_t;
  _cell_num_type cell_num;
  using _run_time_type =
    uint32_t;
  _run_time_type run_time;
  using _hsoc_type =
    uint32_t;
  _hsoc_type hsoc;
  using _voltage_type =
    double;
  _voltage_type voltage;
  using _cur_cadc_type =
    uint32_t;
  _cur_cadc_type cur_cadc;
  using _temp_type =
    std::array<double, 6>;
  _temp_type temp;
  using _temp1_type =
    uint32_t;
  _temp1_type temp1;
  using _temp2_type =
    uint32_t;
  _temp2_type temp2;
  using _temp3_type =
    uint32_t;
  _temp3_type temp3;
  using _temp4_type =
    uint32_t;
  _temp4_type temp4;
  using _temp5_type =
    uint32_t;
  _temp5_type temp5;
  using _temp6_type =
    uint32_t;
  _temp6_type temp6;
  using _tmax_type =
    double;
  _tmax_type tmax;
  using _tmin_type =
    double;
  _tmin_type tmin;
  using _vmax_type =
    uint32_t;
  _vmax_type vmax;
  using _vmin_type =
    uint32_t;
  _vmin_type vmin;
  using _vmaxmin_no_type =
    uint32_t;
  _vmaxmin_no_type vmaxmin_no;
  using _rsoc_type =
    uint32_t;
  _rsoc_type rsoc;
  using _fcc_type =
    double;
  _fcc_type fcc;
  using _rc_type =
    double;
  _rc_type rc;
  using _cycle_count_type =
    uint32_t;
  _cycle_count_type cycle_count;
  using _protect_type =
    uint32_t;
  _protect_type protect;
  using _alarm_type =
    uint32_t;
  _alarm_type alarm;
  using _pack_status_type =
    uint32_t;
  _pack_status_type pack_status;
  using _vcell_type =
    std::array<uint32_t, 17>;
  _vcell_type vcell;
  using _vcell1_type =
    uint32_t;
  _vcell1_type vcell1;
  using _state_type =
    int32_t;
  _state_type state;
  using _soc_type =
    uint32_t;
  _soc_type soc;
  using _status_type =
    int32_t;
  _status_type status;
  using _error_code_type =
    int64_t;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__cell_num(
    const uint32_t & _arg)
  {
    this->cell_num = _arg;
    return *this;
  }
  Type & set__run_time(
    const uint32_t & _arg)
  {
    this->run_time = _arg;
    return *this;
  }
  Type & set__hsoc(
    const uint32_t & _arg)
  {
    this->hsoc = _arg;
    return *this;
  }
  Type & set__voltage(
    const double & _arg)
  {
    this->voltage = _arg;
    return *this;
  }
  Type & set__cur_cadc(
    const uint32_t & _arg)
  {
    this->cur_cadc = _arg;
    return *this;
  }
  Type & set__temp(
    const std::array<double, 6> & _arg)
  {
    this->temp = _arg;
    return *this;
  }
  Type & set__temp1(
    const uint32_t & _arg)
  {
    this->temp1 = _arg;
    return *this;
  }
  Type & set__temp2(
    const uint32_t & _arg)
  {
    this->temp2 = _arg;
    return *this;
  }
  Type & set__temp3(
    const uint32_t & _arg)
  {
    this->temp3 = _arg;
    return *this;
  }
  Type & set__temp4(
    const uint32_t & _arg)
  {
    this->temp4 = _arg;
    return *this;
  }
  Type & set__temp5(
    const uint32_t & _arg)
  {
    this->temp5 = _arg;
    return *this;
  }
  Type & set__temp6(
    const uint32_t & _arg)
  {
    this->temp6 = _arg;
    return *this;
  }
  Type & set__tmax(
    const double & _arg)
  {
    this->tmax = _arg;
    return *this;
  }
  Type & set__tmin(
    const double & _arg)
  {
    this->tmin = _arg;
    return *this;
  }
  Type & set__vmax(
    const uint32_t & _arg)
  {
    this->vmax = _arg;
    return *this;
  }
  Type & set__vmin(
    const uint32_t & _arg)
  {
    this->vmin = _arg;
    return *this;
  }
  Type & set__vmaxmin_no(
    const uint32_t & _arg)
  {
    this->vmaxmin_no = _arg;
    return *this;
  }
  Type & set__rsoc(
    const uint32_t & _arg)
  {
    this->rsoc = _arg;
    return *this;
  }
  Type & set__fcc(
    const double & _arg)
  {
    this->fcc = _arg;
    return *this;
  }
  Type & set__rc(
    const double & _arg)
  {
    this->rc = _arg;
    return *this;
  }
  Type & set__cycle_count(
    const uint32_t & _arg)
  {
    this->cycle_count = _arg;
    return *this;
  }
  Type & set__protect(
    const uint32_t & _arg)
  {
    this->protect = _arg;
    return *this;
  }
  Type & set__alarm(
    const uint32_t & _arg)
  {
    this->alarm = _arg;
    return *this;
  }
  Type & set__pack_status(
    const uint32_t & _arg)
  {
    this->pack_status = _arg;
    return *this;
  }
  Type & set__vcell(
    const std::array<uint32_t, 17> & _arg)
  {
    this->vcell = _arg;
    return *this;
  }
  Type & set__vcell1(
    const uint32_t & _arg)
  {
    this->vcell1 = _arg;
    return *this;
  }
  Type & set__state(
    const int32_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__soc(
    const uint32_t & _arg)
  {
    this->soc = _arg;
    return *this;
  }
  Type & set__status(
    const int32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__error_code(
    const int64_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::msg::BmsInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::msg::BmsInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::BmsInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::BmsInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::BmsInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::BmsInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::BmsInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::BmsInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::BmsInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::BmsInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__msg__BmsInfo
    std::shared_ptr<base_interfaces_demo::msg::BmsInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__msg__BmsInfo
    std::shared_ptr<base_interfaces_demo::msg::BmsInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BmsInfo_ & other) const
  {
    if (this->cell_num != other.cell_num) {
      return false;
    }
    if (this->run_time != other.run_time) {
      return false;
    }
    if (this->hsoc != other.hsoc) {
      return false;
    }
    if (this->voltage != other.voltage) {
      return false;
    }
    if (this->cur_cadc != other.cur_cadc) {
      return false;
    }
    if (this->temp != other.temp) {
      return false;
    }
    if (this->temp1 != other.temp1) {
      return false;
    }
    if (this->temp2 != other.temp2) {
      return false;
    }
    if (this->temp3 != other.temp3) {
      return false;
    }
    if (this->temp4 != other.temp4) {
      return false;
    }
    if (this->temp5 != other.temp5) {
      return false;
    }
    if (this->temp6 != other.temp6) {
      return false;
    }
    if (this->tmax != other.tmax) {
      return false;
    }
    if (this->tmin != other.tmin) {
      return false;
    }
    if (this->vmax != other.vmax) {
      return false;
    }
    if (this->vmin != other.vmin) {
      return false;
    }
    if (this->vmaxmin_no != other.vmaxmin_no) {
      return false;
    }
    if (this->rsoc != other.rsoc) {
      return false;
    }
    if (this->fcc != other.fcc) {
      return false;
    }
    if (this->rc != other.rc) {
      return false;
    }
    if (this->cycle_count != other.cycle_count) {
      return false;
    }
    if (this->protect != other.protect) {
      return false;
    }
    if (this->alarm != other.alarm) {
      return false;
    }
    if (this->pack_status != other.pack_status) {
      return false;
    }
    if (this->vcell != other.vcell) {
      return false;
    }
    if (this->vcell1 != other.vcell1) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->soc != other.soc) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const BmsInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BmsInfo_

// alias to use template instance with default allocator
using BmsInfo =
  base_interfaces_demo::msg::BmsInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__BMS_INFO__STRUCT_HPP_
