# generated from rosidl_generator_py/resource/_idl.py.em
# with input from base_interfaces_demo:msg/ObsLaser.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObsLaser(type):
    """Metaclass of message 'ObsLaser'."""

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
                'base_interfaces_demo.msg.ObsLaser')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__obs_laser
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__obs_laser
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__obs_laser
            cls._TYPE_SUPPORT = module.type_support_msg__msg__obs_laser
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__obs_laser

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObsLaser(metaclass=Metaclass_ObsLaser):
    """Message class 'ObsLaser'."""

    __slots__ = [
        '_son1',
        '_mom1',
        '_scout1',
        '_son2',
        '_mom2',
        '_scout2',
    ]

    _fields_and_field_types = {
        'son1': 'int32',
        'mom1': 'int32',
        'scout1': 'int32',
        'son2': 'int32',
        'mom2': 'int32',
        'scout2': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.son1 = kwargs.get('son1', int())
        self.mom1 = kwargs.get('mom1', int())
        self.scout1 = kwargs.get('scout1', int())
        self.son2 = kwargs.get('son2', int())
        self.mom2 = kwargs.get('mom2', int())
        self.scout2 = kwargs.get('scout2', int())

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
        if self.son1 != other.son1:
            return False
        if self.mom1 != other.mom1:
            return False
        if self.scout1 != other.scout1:
            return False
        if self.son2 != other.son2:
            return False
        if self.mom2 != other.mom2:
            return False
        if self.scout2 != other.scout2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def son1(self):
        """Message field 'son1'."""
        return self._son1

    @son1.setter
    def son1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'son1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'son1' field must be an integer in [-2147483648, 2147483647]"
        self._son1 = value

    @property
    def mom1(self):
        """Message field 'mom1'."""
        return self._mom1

    @mom1.setter
    def mom1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mom1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mom1' field must be an integer in [-2147483648, 2147483647]"
        self._mom1 = value

    @property
    def scout1(self):
        """Message field 'scout1'."""
        return self._scout1

    @scout1.setter
    def scout1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scout1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'scout1' field must be an integer in [-2147483648, 2147483647]"
        self._scout1 = value

    @property
    def son2(self):
        """Message field 'son2'."""
        return self._son2

    @son2.setter
    def son2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'son2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'son2' field must be an integer in [-2147483648, 2147483647]"
        self._son2 = value

    @property
    def mom2(self):
        """Message field 'mom2'."""
        return self._mom2

    @mom2.setter
    def mom2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mom2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mom2' field must be an integer in [-2147483648, 2147483647]"
        self._mom2 = value

    @property
    def scout2(self):
        """Message field 'scout2'."""
        return self._scout2

    @scout2.setter
    def scout2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scout2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'scout2' field must be an integer in [-2147483648, 2147483647]"
        self._scout2 = value
