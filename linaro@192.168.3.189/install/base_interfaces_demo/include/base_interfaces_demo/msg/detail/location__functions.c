// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces_demo:msg/Location.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/location__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
base_interfaces_demo__msg__Location__init(base_interfaces_demo__msg__Location * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // error
  // status
  // distance
  // hall_location
  // lift_son_loc_cali
  // lift_current_loc
  // lift_horseshoe_en
  // state_motor_or_son
  // state_lift_down_or_up
  return true;
}

void
base_interfaces_demo__msg__Location__fini(base_interfaces_demo__msg__Location * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // error
  // status
  // distance
  // hall_location
  // lift_son_loc_cali
  // lift_current_loc
  // lift_horseshoe_en
  // state_motor_or_son
  // state_lift_down_or_up
}

bool
base_interfaces_demo__msg__Location__are_equal(const base_interfaces_demo__msg__Location * lhs, const base_interfaces_demo__msg__Location * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // error
  if (lhs->error != rhs->error) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // hall_location
  if (lhs->hall_location != rhs->hall_location) {
    return false;
  }
  // lift_son_loc_cali
  if (lhs->lift_son_loc_cali != rhs->lift_son_loc_cali) {
    return false;
  }
  // lift_current_loc
  if (lhs->lift_current_loc != rhs->lift_current_loc) {
    return false;
  }
  // lift_horseshoe_en
  if (lhs->lift_horseshoe_en != rhs->lift_horseshoe_en) {
    return false;
  }
  // state_motor_or_son
  if (lhs->state_motor_or_son != rhs->state_motor_or_son) {
    return false;
  }
  // state_lift_down_or_up
  if (lhs->state_lift_down_or_up != rhs->state_lift_down_or_up) {
    return false;
  }
  return true;
}

bool
base_interfaces_demo__msg__Location__copy(
  const base_interfaces_demo__msg__Location * input,
  base_interfaces_demo__msg__Location * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // error
  output->error = input->error;
  // status
  output->status = input->status;
  // distance
  output->distance = input->distance;
  // hall_location
  output->hall_location = input->hall_location;
  // lift_son_loc_cali
  output->lift_son_loc_cali = input->lift_son_loc_cali;
  // lift_current_loc
  output->lift_current_loc = input->lift_current_loc;
  // lift_horseshoe_en
  output->lift_horseshoe_en = input->lift_horseshoe_en;
  // state_motor_or_son
  output->state_motor_or_son = input->state_motor_or_son;
  // state_lift_down_or_up
  output->state_lift_down_or_up = input->state_lift_down_or_up;
  return true;
}

base_interfaces_demo__msg__Location *
base_interfaces_demo__msg__Location__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__Location * msg = (base_interfaces_demo__msg__Location *)allocator.allocate(sizeof(base_interfaces_demo__msg__Location), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__msg__Location));
  bool success = base_interfaces_demo__msg__Location__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__msg__Location__destroy(base_interfaces_demo__msg__Location * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces_demo__msg__Location__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces_demo__msg__Location__Sequence__init(base_interfaces_demo__msg__Location__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__Location * data = NULL;

  if (size) {
    data = (base_interfaces_demo__msg__Location *)allocator.zero_allocate(size, sizeof(base_interfaces_demo__msg__Location), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__msg__Location__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__msg__Location__fini(&data[i - 1]);
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
base_interfaces_demo__msg__Location__Sequence__fini(base_interfaces_demo__msg__Location__Sequence * array)
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
      base_interfaces_demo__msg__Location__fini(&array->data[i]);
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

base_interfaces_demo__msg__Location__Sequence *
base_interfaces_demo__msg__Location__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__Location__Sequence * array = (base_interfaces_demo__msg__Location__Sequence *)allocator.allocate(sizeof(base_interfaces_demo__msg__Location__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__msg__Location__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__msg__Location__Sequence__destroy(base_interfaces_demo__msg__Location__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces_demo__msg__Location__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces_demo__msg__Location__Sequence__are_equal(const base_interfaces_demo__msg__Location__Sequence * lhs, const base_interfaces_demo__msg__Location__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces_demo__msg__Location__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces_demo__msg__Location__Sequence__copy(
  const base_interfaces_demo__msg__Location__Sequence * input,
  base_interfaces_demo__msg__Location__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces_demo__msg__Location);
    base_interfaces_demo__msg__Location * data =
      (base_interfaces_demo__msg__Location *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces_demo__msg__Location__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          base_interfaces_demo__msg__Location__fini(&data[i]);
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
    if (!base_interfaces_demo__msg__Location__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
