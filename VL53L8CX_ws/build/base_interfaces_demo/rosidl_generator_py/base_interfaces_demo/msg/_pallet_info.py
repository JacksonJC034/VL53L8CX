# generated from rosidl_generator_py/resource/_idl.py.em
# with input from base_interfaces_demo:msg/PalletInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PalletInfo(type):
    """Metaclass of message 'PalletInfo'."""

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
                'base_interfaces_demo.msg.PalletInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pallet_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pallet_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pallet_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pallet_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pallet_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PalletInfo(metaclass=Metaclass_PalletInfo):
    """Message class 'PalletInfo'."""

    __slots__ = [
        '_distance',
        '_pallet',
        '_drift',
        '_angle',
        '_error',
    ]

    _fields_and_field_types = {
        'distance': 'int32',
        'pallet': 'int32',
        'drift': 'double',
        'angle': 'double',
        'error': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.distance = kwargs.get('distance', int())
        self.pallet = kwargs.get('pallet', int())
        self.drift = kwargs.get('drift', float())
        self.angle = kwargs.get('angle', float())
        self.error = kwargs.get('error', int())

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
        if self.distance != other.distance:
            return False
        if self.pallet != other.pallet:
            return False
        if self.drift != other.drift:
            return False
        if self.angle != other.angle:
            return False
        if self.error != other.error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'distance' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'distance' field must be an integer in [-2147483648, 2147483647]"
        self._distance = value

    @property
    def pallet(self):
        """Message field 'pallet'."""
        return self._pallet

    @pallet.setter
    def pallet(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pallet' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pallet' field must be an integer in [-2147483648, 2147483647]"
        self._pallet = value

    @property
    def drift(self):
        """Message field 'drift'."""
        return self._drift

    @drift.setter
    def drift(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'drift' field must be of type 'float'"
        self._drift = value

    @property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle' field must be of type 'float'"
        self._angle = value

    @property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'error' field must be an integer in [-2147483648, 2147483647]"
        self._error = value
