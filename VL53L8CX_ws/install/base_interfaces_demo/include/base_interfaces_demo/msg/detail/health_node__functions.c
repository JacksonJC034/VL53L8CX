// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces_demo:msg/HealthNode.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/health_node__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
base_interfaces_demo__msg__HealthNode__init(base_interfaces_demo__msg__HealthNode * msg)
{
  if (!msg) {
    return false;
  }
  // cpu_usage
  // disk_usage
  // memory_usage
  // nic_status
  // temperature
  // cpu_frequency
  // error_array
  // error_level
  return true;
}

void
base_interfaces_demo__msg__HealthNode__fini(base_interfaces_demo__msg__HealthNode * msg)
{
  if (!msg) {
    return;
  }
  // cpu_usage
  // disk_usage
  // memory_usage
  // nic_status
  // temperature
  // cpu_frequency
  // error_array
  // error_level
}

bool
base_interfaces_demo__msg__HealthNode__are_equal(const base_interfaces_demo__msg__HealthNode * lhs, const base_interfaces_demo__msg__HealthNode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cpu_usage
  if (lhs->cpu_usage != rhs->cpu_usage) {
    return false;
  }
  // disk_usage
  if (lhs->disk_usage != rhs->disk_usage) {
    return false;
  }
  // memory_usage
  if (lhs->memory_usage != rhs->memory_usage) {
    return false;
  }
  // nic_status
  if (lhs->nic_status != rhs->nic_status) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // cpu_frequency
  if (lhs->cpu_frequency != rhs->cpu_frequency) {
    return false;
  }
  // error_array
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->error_array[i] != rhs->error_array[i]) {
      return false;
    }
  }
  // error_level
  if (lhs->error_level != rhs->error_level) {
    return false;
  }
  return true;
}

bool
base_interfaces_demo__msg__HealthNode__copy(
  const base_interfaces_demo__msg__HealthNode * input,
  base_interfaces_demo__msg__HealthNode * output)
{
  if (!input || !output) {
    return false;
  }
  // cpu_usage
  output->cpu_usage = input->cpu_usage;
  // disk_usage
  output->disk_usage = input->disk_usage;
  // memory_usage
  output->memory_usage = input->memory_usage;
  // nic_status
  output->nic_status = input->nic_status;
  // temperature
  output->temperature = input->temperature;
  // cpu_frequency
  output->cpu_frequency = input->cpu_frequency;
  // error_array
  for (size_t i = 0; i < 12; ++i) {
    output->error_array[i] = input->error_array[i];
  }
  // error_level
  output->error_level = input->error_level;
  return true;
}

base_interfaces_demo__msg__HealthNode *
base_interfaces_demo__msg__HealthNode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__HealthNode * msg = (base_interfaces_demo__msg__HealthNode *)allocator.allocate(sizeof(base_interfaces_demo__msg__HealthNode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__msg__HealthNode));
  bool success = base_interfaces_demo__msg__HealthNode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__msg__HealthNode__destroy(base_interfaces_demo__msg__HealthNode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces_demo__msg__HealthNode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces_demo__msg__HealthNode__Sequence__init(base_interfaces_demo__msg__HealthNode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__HealthNode * data = NULL;

  if (size) {
    data = (base_interfaces_demo__msg__HealthNode *)allocator.zero_allocate(size, sizeof(base_interfaces_demo__msg__HealthNode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__msg__HealthNode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__msg__HealthNode__fini(&data[i - 1]);
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
base_interfaces_demo__msg__HealthNode__Sequence__fini(base_interfaces_demo__msg__HealthNode__Sequence * array)
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
      base_interfaces_demo__msg__HealthNode__fini(&array->data[i]);
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

base_interfaces_demo__msg__HealthNode__Sequence *
base_interfaces_demo__msg__HealthNode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__HealthNode__Sequence * array = (base_interfaces_demo__msg__HealthNode__Sequence *)allocator.allocate(sizeof(base_interfaces_demo__msg__HealthNode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__msg__HealthNode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__msg__HealthNode__Sequence__destroy(base_interfaces_demo__msg__HealthNode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces_demo__msg__HealthNode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces_demo__msg__HealthNode__Sequence__are_equal(const base_interfaces_demo__msg__HealthNode__Sequence * lhs, const base_interfaces_demo__msg__HealthNode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces_demo__msg__HealthNode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces_demo__msg__HealthNode__Sequence__copy(
  const base_interfaces_demo__msg__HealthNode__Sequence * input,
  base_interfaces_demo__msg__HealthNode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces_demo__msg__HealthNode);
    base_interfaces_demo__msg__HealthNode * data =
      (base_interfaces_demo__msg__HealthNode *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces_demo__msg__HealthNode__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          base_interfaces_demo__msg__HealthNode__fini(&data[i]);
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
    if (!base_interfaces_demo__msg__HealthNode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
