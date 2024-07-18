# generated from rosidl_generator_py/resource/_idl.py.em
# with input from base_interfaces_demo:msg/MotorStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorStatus(type):
    """Metaclass of message 'MotorStatus'."""

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
                'base_interfaces_demo.msg.MotorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorStatus(metaclass=Metaclass_MotorStatus):
    """Message class 'MotorStatus'."""

    __slots__ = [
        '_mode',
        '_error',
        '_current',
        '_speed',
        '_status',
        '_driver_init_status',
        '_odometer',
        '_encoder_location',
        '_jerk',
        '_enable',
    ]

    _fields_and_field_types = {
        'mode': 'int32',
        'error': 'int32',
        'current': 'int32',
        'speed': 'int32',
        'status': 'int32',
        'driver_init_status': 'int32',
        'odometer': 'int32',
        'encoder_location': 'int32',
        'jerk': 'int32',
        'enable': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
        self.mode = kwargs.get('mode', int())
        self.error = kwargs.get('error', int())
        self.current = kwargs.get('current', int())
        self.speed = kwargs.get('speed', int())
        self.status = kwargs.get('status', int())
        self.driver_init_status = kwargs.get('driver_init_status', int())
        self.odometer = kwargs.get('odometer', int())
        self.encoder_location = kwargs.get('encoder_location', int())
        self.jerk = kwargs.get('jerk', int())
        self.enable = kwargs.get('enable', int())

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
        if self.mode != other.mode:
            return False
        if self.error != other.error:
            return False
        if self.current != other.current:
            return False
        if self.speed != other.speed:
            return False
        if self.status != other.status:
            return False
        if self.driver_init_status != other.driver_init_status:
            return False
        if self.odometer != other.odometer:
            return False
        if self.encoder_location != other.encoder_location:
            return False
        if self.jerk != other.jerk:
            return False
        if self.enable != other.enable:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mode' field must be an integer in [-2147483648, 2147483647]"
        self._mode = value

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

    @property
    def current(self):
        """Message field 'current'."""
        return self._current

    @current.setter
    def current(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'current' field must be an integer in [-2147483648, 2147483647]"
        self._current = value

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'speed' field must be an integer in [-2147483648, 2147483647]"
        self._speed = value

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'status' field must be an integer in [-2147483648, 2147483647]"
        self._status = value

    @property
    def driver_init_status(self):
        """Message field 'driver_init_status'."""
        return self._driver_init_status

    @driver_init_status.setter
    def driver_init_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'driver_init_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'driver_init_status' field must be an integer in [-2147483648, 2147483647]"
        self._driver_init_status = value

    @property
    def odometer(self):
        """Message field 'odometer'."""
        return self._odometer

    @odometer.setter
    def odometer(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'odometer' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'odometer' field must be an integer in [-2147483648, 2147483647]"
        self._odometer = value

    @property
    def encoder_location(self):
        """Message field 'encoder_location'."""
        return self._encoder_location

    @encoder_location.setter
    def encoder_location(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'encoder_location' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'encoder_location' field must be an integer in [-2147483648, 2147483647]"
        self._encoder_location = value

    @property
    def jerk(self):
        """Message field 'jerk'."""
        return self._jerk

    @jerk.setter
    def jerk(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'jerk' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'jerk' field must be an integer in [-2147483648, 2147483647]"
        self._jerk = value

    @property
    def enable(self):
        """Message field 'enable'."""
        return self._enable

    @enable.setter
    def enable(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'enable' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'enable' field must be an integer in [-2147483648, 2147483647]"
        self._enable = value
