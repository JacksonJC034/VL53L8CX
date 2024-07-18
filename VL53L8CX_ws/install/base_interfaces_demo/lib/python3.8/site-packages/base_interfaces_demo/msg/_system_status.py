# generated from rosidl_generator_py/resource/_idl.py.em
# with input from base_interfaces_demo:msg/SystemStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SystemStatus(type):
    """Metaclass of message 'SystemStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('base_interfaces_demo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'base_interfaces_demo.msg.SystemStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__system_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__system_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__system_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__system_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__system_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SystemStatus(metaclass=Metaclass_SystemStatus):
    """Message class 'SystemStatus'."""

    __slots__ = [
        '_system_mode',
        '_work_status',
        '_init_status',
    ]

    _fields_and_field_types = {
        'system_mode': 'int32',
        'work_status': 'int32',
        'init_status': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.system_mode = kwargs.get('system_mode', int())
        self.work_status = kwargs.get('work_status', int())
        self.init_status = kwargs.get('init_status', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.system_mode != other.system_mode:
            return False
        if self.work_status != other.work_status:
            return False
        if self.init_status != other.init_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def system_mode(self):
        """Message field 'system_mode'."""
        return self._system_mode

    @system_mode.setter
    def system_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'system_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'system_mode' field must be an integer in [-2147483648, 2147483647]"
        self._system_mode = value

    @property
    def work_status(self):
        """Message field 'work_status'."""
        return self._work_status

    @work_status.setter
    def work_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'work_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'work_status' field must be an integer in [-2147483648, 2147483647]"
        self._work_status = value

    @property
    def init_status(self):
        """Message field 'init_status'."""
        return self._init_status

    @init_status.setter
    def init_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'init_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'init_status' field must be an integer in [-2147483648, 2147483647]"
        self._init_status = value
