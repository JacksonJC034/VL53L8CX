// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces_demo:msg/BmsInfo.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/bms_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
base_interfaces_demo__msg__BmsInfo__init(base_interfaces_demo__msg__BmsInfo * msg)
{
  if (!msg) {
    return false;
  }
  // cell_num
  // run_time
  // hsoc
  // voltage
  // cur_cadc
  // temp
  // temp1
  // temp2
  // temp3
  // temp4
  // temp5
  // temp6
  // tmax
  // tmin
  // vmax
  // vmin
  // vmaxmin_no
  // rsoc
  // fcc
  // rc
  // cycle_count
  // protect
  // alarm
  // pack_status
  // vcell
  // vcell1
  // state
  // soc
  // status
  // error_code
  return true;
}

void
base_interfaces_demo__msg__BmsInfo__fini(base_interfaces_demo__msg__BmsInfo * msg)
{
  if (!msg) {
    return;
  }
  // cell_num
  // run_time
  // hsoc
  // voltage
  // cur_cadc
  // temp
  // temp1
  // temp2
  // temp3
  // temp4
  // temp5
  // temp6
  // tmax
  // tmin
  // vmax
  // vmin
  // vmaxmin_no
  // rsoc
  // fcc
  // rc
  // cycle_count
  // protect
  // alarm
  // pack_status
  // vcell
  // vcell1
  // state
  // soc
  // status
  // error_code
}

bool
base_interfaces_demo__msg__BmsInfo__are_equal(const base_interfaces_demo__msg__BmsInfo * lhs, const base_interfaces_demo__msg__BmsInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cell_num
  if (lhs->cell_num != rhs->cell_num) {
    return false;
  }
  // run_time
  if (lhs->run_time != rhs->run_time) {
    return false;
  }
  // hsoc
  if (lhs->hsoc != rhs->hsoc) {
    return false;
  }
  // voltage
  if (lhs->voltage != rhs->voltage) {
    return false;
  }
  // cur_cadc
  if (lhs->cur_cadc != rhs->cur_cadc) {
    return false;
  }
  // temp
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->temp[i] != rhs->temp[i]) {
      return false;
    }
  }
  // temp1
  if (lhs->temp1 != rhs->temp1) {
    return false;
  }
  // temp2
  if (lhs->temp2 != rhs->temp2) {
    return false;
  }
  // temp3
  if (lhs->temp3 != rhs->temp3) {
    return false;
  }
  // temp4
  if (lhs->temp4 != rhs->temp4) {
    return false;
  }
  // temp5
  if (lhs->temp5 != rhs->temp5) {
    return false;
  }
  // temp6
  if (lhs->temp6 != rhs->temp6) {
    return false;
  }
  // tmax
  if (lhs->tmax != rhs->tmax) {
    return false;
  }
  // tmin
  if (lhs->tmin != rhs->tmin) {
    return false;
  }
  // vmax
  if (lhs->vmax != rhs->vmax) {
    return false;
  }
  // vmin
  if (lhs->vmin != rhs->vmin) {
    return false;
  }
  // vmaxmin_no
  if (lhs->vmaxmin_no != rhs->vmaxmin_no) {
    return false;
  }
  // rsoc
  if (lhs->rsoc != rhs->rsoc) {
    return false;
  }
  // fcc
  if (lhs->fcc != rhs->fcc) {
    return false;
  }
  // rc
  if (lhs->rc != rhs->rc) {
    return false;
  }
  // cycle_count
  if (lhs->cycle_count != rhs->cycle_count) {
    return false;
  }
  // protect
  if (lhs->protect != rhs->protect) {
    return false;
  }
  // alarm
  if (lhs->alarm != rhs->alarm) {
    return false;
  }
  // pack_status
  if (lhs->pack_status != rhs->pack_status) {
    return false;
  }
  // vcell
  for (size_t i = 0; i < 17; ++i) {
    if (lhs->vcell[i] != rhs->vcell[i]) {
      return false;
    }
  }
  // vcell1
  if (lhs->vcell1 != rhs->vcell1) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // soc
  if (lhs->soc != rhs->soc) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  return true;
}

bool
base_interfaces_demo__msg__BmsInfo__copy(
  const base_interfaces_demo__msg__BmsInfo * input,
  base_interfaces_demo__msg__BmsInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // cell_num
  output->cell_num = input->cell_num;
  // run_time
  output->run_time = input->run_time;
  // hsoc
  output->hsoc = input->hsoc;
  // voltage
  output->voltage = input->voltage;
  // cur_cadc
  output->cur_cadc = input->cur_cadc;
  // temp
  for (size_t i = 0; i < 6; ++i) {
    output->temp[i] = input->temp[i];
  }
  // temp1
  output->temp1 = input->temp1;
  // temp2
  output->temp2 = input->temp2;
  // temp3
  output->temp3 = input->temp3;
  // temp4
  output->temp4 = input->temp4;
  // temp5
  output->temp5 = input->temp5;
  // temp6
  output->temp6 = input->temp6;
  // tmax
  output->tmax = input->tmax;
  // tmin
  output->tmin = input->tmin;
  // vmax
  output->vmax = input->vmax;
  // vmin
  output->vmin = input->vmin;
  // vmaxmin_no
  output->vmaxmin_no = input->vmaxmin_no;
  // rsoc
  output->rsoc = input->rsoc;
  // fcc
  output->fcc = input->fcc;
  // rc
  output->rc = input->rc;
  // cycle_count
  output->cycle_count = input->cycle_count;
  // protect
  output->protect = input->protect;
  // alarm
  output->alarm = input->alarm;
  // pack_status
  output->pack_status = input->pack_status;
  // vcell
  for (size_t i = 0; i < 17; ++i) {
    output->vcell[i] = input->vcell[i];
  }
  // vcell1
  output->vcell1 = input->vcell1;
  // state
  output->state = input->state;
  // soc
  output->soc = input->soc;
  // status
  output->status = input->status;
  // error_code
  output->error_code = input->error_code;
  return true;
}

base_interfaces_demo__msg__BmsInfo *
base_interfaces_demo__msg__BmsInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__BmsInfo * msg = (base_interfaces_demo__msg__BmsInfo *)allocator.allocate(sizeof(base_interfaces_demo__msg__BmsInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__msg__BmsInfo));
  bool success = base_interfaces_demo__msg__BmsInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__msg__BmsInfo__destroy(base_interfaces_demo__msg__BmsInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces_demo__msg__BmsInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces_demo__msg__BmsInfo__Sequence__init(base_interfaces_demo__msg__BmsInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__BmsInfo * data = NULL;

  if (size) {
    data = (base_interfaces_demo__msg__BmsInfo *)allocator.zero_allocate(size, sizeof(base_interfaces_demo__msg__BmsInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__msg__BmsInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__msg__BmsInfo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_interfaces_demo__msg__BmsInfo__Sequence__fini(base_interfaces_demo__msg__BmsInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_interfaces_demo__msg__BmsInfo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_interfaces_demo__msg__BmsInfo__Sequence *
base_interfaces_demo__msg__BmsInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__BmsInfo__Sequence * array = (base_interfaces_demo__msg__BmsInfo__Sequence *)allocator.allocate(sizeof(base_interfaces_demo__msg__BmsInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__msg__BmsInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__msg__BmsInfo__Sequence__destroy(base_interfaces_demo__msg__BmsInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces_demo__msg__BmsInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces_demo__msg__BmsInfo__Sequence__are_equal(const base_interfaces_demo__msg__BmsInfo__Sequence * lhs, const base_interfaces_demo__msg__BmsInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces_demo__msg__BmsInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces_demo__msg__BmsInfo__Sequence__copy(
  const base_interfaces_demo__msg__BmsInfo__Sequence * input,
  base_interfaces_demo__msg__BmsInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces_demo__msg__BmsInfo);
    base_interfaces_demo__msg__BmsInfo * data =
      (base_interfaces_demo__msg__BmsInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces_demo__msg__BmsInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          base_interfaces_demo__msg__BmsInfo__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_interfaces_demo__msg__BmsInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
