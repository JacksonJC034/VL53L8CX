// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces_demo:msg/HallInfo.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/hall_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
base_interfaces_demo__msg__HallInfo__init(base_interfaces_demo__msg__HallInfo * msg)
{
  if (!msg) {
    return false;
  }
  // uid7
  // uid6
  // uid5
  // uid4
  // uid3
  // uid2
  // uid1
  // uid0
  // f1
  // f2
  // f3
  // f4
  // b1
  // b2
  // b3
  // b4
  // l1
  // l2
  // l3
  // l4
  // r1
  // r2
  // r3
  // r4
  // state
  return true;
}

void
base_interfaces_demo__msg__HallInfo__fini(base_interfaces_demo__msg__HallInfo * msg)
{
  if (!msg) {
    return;
  }
  // uid7
  // uid6
  // uid5
  // uid4
  // uid3
  // uid2
  // uid1
  // uid0
  // f1
  // f2
  // f3
  // f4
  // b1
  // b2
  // b3
  // b4
  // l1
  // l2
  // l3
  // l4
  // r1
  // r2
  // r3
  // r4
  // state
}

bool
base_interfaces_demo__msg__HallInfo__are_equal(const base_interfaces_demo__msg__HallInfo * lhs, const base_interfaces_demo__msg__HallInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // uid7
  if (lhs->uid7 != rhs->uid7) {
    return false;
  }
  // uid6
  if (lhs->uid6 != rhs->uid6) {
    return false;
  }
  // uid5
  if (lhs->uid5 != rhs->uid5) {
    return false;
  }
  // uid4
  if (lhs->uid4 != rhs->uid4) {
    return false;
  }
  // uid3
  if (lhs->uid3 != rhs->uid3) {
    return false;
  }
  // uid2
  if (lhs->uid2 != rhs->uid2) {
    return false;
  }
  // uid1
  if (lhs->uid1 != rhs->uid1) {
    return false;
  }
  // uid0
  if (lhs->uid0 != rhs->uid0) {
    return false;
  }
  // f1
  if (lhs->f1 != rhs->f1) {
    return false;
  }
  // f2
  if (lhs->f2 != rhs->f2) {
    return false;
  }
  // f3
  if (lhs->f3 != rhs->f3) {
    return false;
  }
  // f4
  if (lhs->f4 != rhs->f4) {
    return false;
  }
  // b1
  if (lhs->b1 != rhs->b1) {
    return false;
  }
  // b2
  if (lhs->b2 != rhs->b2) {
    return false;
  }
  // b3
  if (lhs->b3 != rhs->b3) {
    return false;
  }
  // b4
  if (lhs->b4 != rhs->b4) {
    return false;
  }
  // l1
  if (lhs->l1 != rhs->l1) {
    return false;
  }
  // l2
  if (lhs->l2 != rhs->l2) {
    return false;
  }
  // l3
  if (lhs->l3 != rhs->l3) {
    return false;
  }
  // l4
  if (lhs->l4 != rhs->l4) {
    return false;
  }
  // r1
  if (lhs->r1 != rhs->r1) {
    return false;
  }
  // r2
  if (lhs->r2 != rhs->r2) {
    return false;
  }
  // r3
  if (lhs->r3 != rhs->r3) {
    return false;
  }
  // r4
  if (lhs->r4 != rhs->r4) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
base_interfaces_demo__msg__HallInfo__copy(
  const base_interfaces_demo__msg__HallInfo * input,
  base_interfaces_demo__msg__HallInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // uid7
  output->uid7 = input->uid7;
  // uid6
  output->uid6 = input->uid6;
  // uid5
  output->uid5 = input->uid5;
  // uid4
  output->uid4 = input->uid4;
  // uid3
  output->uid3 = input->uid3;
  // uid2
  output->uid2 = input->uid2;
  // uid1
  output->uid1 = input->uid1;
  // uid0
  output->uid0 = input->uid0;
  // f1
  output->f1 = input->f1;
  // f2
  output->f2 = input->f2;
  // f3
  output->f3 = input->f3;
  // f4
  output->f4 = input->f4;
  // b1
  output->b1 = input->b1;
  // b2
  output->b2 = input->b2;
  // b3
  output->b3 = input->b3;
  // b4
  output->b4 = input->b4;
  // l1
  output->l1 = input->l1;
  // l2
  output->l2 = input->l2;
  // l3
  output->l3 = input->l3;
  // l4
  output->l4 = input->l4;
  // r1
  output->r1 = input->r1;
  // r2
  output->r2 = input->r2;
  // r3
  output->r3 = input->r3;
  // r4
  output->r4 = input->r4;
  // state
  output->state = input->state;
  return true;
}

base_interfaces_demo__msg__HallInfo *
base_interfaces_demo__msg__HallInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__HallInfo * msg = (base_interfaces_demo__msg__HallInfo *)allocator.allocate(sizeof(base_interfaces_demo__msg__HallInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__msg__HallInfo));
  bool success = base_interfaces_demo__msg__HallInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__msg__HallInfo__destroy(base_interfaces_demo__msg__HallInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces_demo__msg__HallInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces_demo__msg__HallInfo__Sequence__init(base_interfaces_demo__msg__HallInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__HallInfo * data = NULL;

  if (size) {
    data = (base_interfaces_demo__msg__HallInfo *)allocator.zero_allocate(size, sizeof(base_interfaces_demo__msg__HallInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__msg__HallInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__msg__HallInfo__fini(&data[i - 1]);
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
base_interfaces_demo__msg__HallInfo__Sequence__fini(base_interfaces_demo__msg__HallInfo__Sequence * array)
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
      base_interfaces_demo__msg__HallInfo__fini(&array->data[i]);
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

base_interfaces_demo__msg__HallInfo__Sequence *
base_interfaces_demo__msg__HallInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__HallInfo__Sequence * array = (base_interfaces_demo__msg__HallInfo__Sequence *)allocator.allocate(sizeof(base_interfaces_demo__msg__HallInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__msg__HallInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__msg__HallInfo__Sequence__destroy(base_interfaces_demo__msg__HallInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces_demo__msg__HallInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces_demo__msg__HallInfo__Sequence__are_equal(const base_interfaces_demo__msg__HallInfo__Sequence * lhs, const base_interfaces_demo__msg__HallInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces_demo__msg__HallInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces_demo__msg__HallInfo__Sequence__copy(
  const base_interfaces_demo__msg__HallInfo__Sequence * input,
  base_interfaces_demo__msg__HallInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces_demo__msg__HallInfo);
    base_interfaces_demo__msg__HallInfo * data =
      (base_interfaces_demo__msg__HallInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces_demo__msg__HallInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          base_interfaces_demo__msg__HallInfo__fini(&data[i]);
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
    if (!base_interfaces_demo__msg__HallInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
