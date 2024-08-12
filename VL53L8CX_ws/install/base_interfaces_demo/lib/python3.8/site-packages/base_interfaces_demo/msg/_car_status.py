# generated from rosidl_generator_py/resource/_idl.py.em
# with input from base_interfaces_demo:msg/CarStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CarStatus(type):
    """Metaclass of message 'CarStatus'."""

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
                'base_interfaces_demo.msg.CarStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__car_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__car_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__car_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__car_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__car_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CarStatus(metaclass=Metaclass_CarStatus):
    """Message class 'CarStatus'."""

    __slots__ = [
        '_task_state',
        '_initializing',
        '_checking',
        '_releasing',
        '_driving',
        '_fine_positioning',
        '_on_tag',
        '_on_track',
        '_error',
        '_warning',
        '_estop',
        '_sleeping',
        '_load',
        '_charging',
        '_mode',
        '_stand_alone_state',
    ]

    _fields_and_field_types = {
        'task_state': 'int32',
        'initializing': 'int32',
        'checking': 'int32',
        'releasing': 'int32',
        'driving': 'int32',
        'fine_positioning': 'int32',
        'on_tag': 'int32',
        'on_track': 'int32',
        'error': 'int32',
        'warning': 'int32',
        'estop': 'int32',
        'sleeping': 'int32',
        'load': 'int32',
        'charging': 'int32',
        'mode': 'int32',
        'stand_alone_state': 'int32',
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
        self.task_state = kwargs.get('task_state', int())
        self.initializing = kwargs.get('initializing', int())
        self.checking = kwargs.get('checking', int())
        self.releasing = kwargs.get('releasing', int())
        self.driving = kwargs.get('driving', int())
        self.fine_positioning = kwargs.get('fine_positioning', int())
        self.on_tag = kwargs.get('on_tag', int())
        self.on_track = kwargs.get('on_track', int())
        self.error = kwargs.get('error', int())
        self.warning = kwargs.get('warning', int())
        self.estop = kwargs.get('estop', int())
        self.sleeping = kwargs.get('sleeping', int())
        self.load = kwargs.get('load', int())
        self.charging = kwargs.get('charging', int())
        self.mode = kwargs.get('mode', int())
        self.stand_alone_state = kwargs.get('stand_alone_state', int())

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
        if self.task_state != other.task_state:
            return False
        if self.initializing != other.initializing:
            return False
        if self.checking != other.checking:
            return False
        if self.releasing != other.releasing:
            return False
        if self.driving != other.driving:
            return False
        if self.fine_positioning != other.fine_positioning:
            return False
        if self.on_tag != other.on_tag:
            return False
        if self.on_track != other.on_track:
            return False
        if self.error != other.error:
            return False
        if self.warning != other.warning:
            return False
        if self.estop != other.estop:
            return False
        if self.sleeping != other.sleeping:
            return False
        if self.load != other.load:
            return False
        if self.charging != other.charging:
            return False
        if self.mode != other.mode:
            return False
        if self.stand_alone_state != other.stand_alone_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def task_state(self):
        """Message field 'task_state'."""
        return self._task_state

    @task_state.setter
    def task_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'task_state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'task_state' field must be an integer in [-2147483648, 2147483647]"
        self._task_state = value

    @property
    def initializing(self):
        """Message field 'initializing'."""
        return self._initializing

    @initializing.setter
    def initializing(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'initializing' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'initializing' field must be an integer in [-2147483648, 2147483647]"
        self._initializing = value

    @property
    def checking(self):
        """Message field 'checking'."""
        return self._checking

    @checking.setter
    def checking(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'checking' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'checking' field must be an integer in [-2147483648, 2147483647]"
        self._checking = value

    @property
    def releasing(self):
        """Message field 'releasing'."""
        return self._releasing

    @releasing.setter
    def releasing(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'releasing' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'releasing' field must be an integer in [-2147483648, 2147483647]"
        self._releasing = value

    @property
    def driving(self):
        """Message field 'driving'."""
        return self._driving

    @driving.setter
    def driving(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'driving' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'driving' field must be an integer in [-2147483648, 2147483647]"
        self._driving = value

    @property
    def fine_positioning(self):
        """Message field 'fine_positioning'."""
        return self._fine_positioning

    @fine_positioning.setter
    def fine_positioning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fine_positioning' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'fine_positioning' field must be an integer in [-2147483648, 2147483647]"
        self._fine_positioning = value

    @property
    def on_tag(self):
        """Message field 'on_tag'."""
        return self._on_tag

    @on_tag.setter
    def on_tag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'on_tag' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'on_tag' field must be an integer in [-2147483648, 2147483647]"
        self._on_tag = value

    @property
    def on_track(self):
        """Message field 'on_track'."""
        return self._on_track

    @on_track.setter
    def on_track(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'on_track' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'on_track' field must be an integer in [-2147483648, 2147483647]"
        self._on_track = value

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
    def warning(self):
        """Message field 'warning'."""
        return self._warning

    @warning.setter
    def warning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'warning' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'warning' field must be an integer in [-2147483648, 2147483647]"
        self._warning = value

    @property
    def estop(self):
        """Message field 'estop'."""
        return self._estop

    @estop.setter
    def estop(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'estop' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'estop' field must be an integer in [-2147483648, 2147483647]"
        self._estop = value

    @property
    def sleeping(self):
        """Message field 'sleeping'."""
        return self._sleeping

    @sleeping.setter
    def sleeping(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sleeping' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sleeping' field must be an integer in [-2147483648, 2147483647]"
        self._sleeping = value

    @property
    def load(self):
        """Message field 'load'."""
        return self._load

    @load.setter
    def load(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'load' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'load' field must be an integer in [-2147483648, 2147483647]"
        self._load = value

    @property
    def charging(self):
        """Message field 'charging'."""
        return self._charging

    @charging.setter
    def charging(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'charging' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'charging' field must be an integer in [-2147483648, 2147483647]"
        self._charging = value

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
    def stand_alone_state(self):
        """Message field 'stand_alone_state'."""
        return self._stand_alone_state

    @stand_alone_state.setter
    def stand_alone_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stand_alone_state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'stand_alone_state' field must be an integer in [-2147483648, 2147483647]"
        self._stand_alone_state = value
