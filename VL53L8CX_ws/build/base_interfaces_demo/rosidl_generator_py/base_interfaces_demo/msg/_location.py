# generated from rosidl_generator_py/resource/_idl.py.em
# with input from base_interfaces_demo:msg/Location.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Location(type):
    """Metaclass of message 'Location'."""

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
                'base_interfaces_demo.msg.Location')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__location
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__location
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__location
            cls._TYPE_SUPPORT = module.type_support_msg__msg__location
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__location

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Location(metaclass=Metaclass_Location):
    """Message class 'Location'."""

    __slots__ = [
        '_x',
        '_y',
        '_error',
        '_status',
        '_distance',
        '_hall_location',
        '_lift_son_loc_cali',
        '_lift_current_loc',
        '_lift_horseshoe_en',
        '_state_motor_or_son',
        '_state_lift_down_or_up',
        '_hall_rfid_en',
        '_distancex',
        '_distancey',
    ]

    _fields_and_field_types = {
        'x': 'double',
        'y': 'double',
        'error': 'int64',
        'status': 'int32',
        'distance': 'double',
        'hall_location': 'int32',
        'lift_son_loc_cali': 'int32',
        'lift_current_loc': 'int32',
        'lift_horseshoe_en': 'int32',
        'state_motor_or_son': 'int32',
        'state_lift_down_or_up': 'int32',
        'hall_rfid_en': 'int32',
        'distancex': 'double',
        'distancey': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.error = kwargs.get('error', int())
        self.status = kwargs.get('status', int())
        self.distance = kwargs.get('distance', float())
        self.hall_location = kwargs.get('hall_location', int())
        self.lift_son_loc_cali = kwargs.get('lift_son_loc_cali', int())
        self.lift_current_loc = kwargs.get('lift_current_loc', int())
        self.lift_horseshoe_en = kwargs.get('lift_horseshoe_en', int())
        self.state_motor_or_son = kwargs.get('state_motor_or_son', int())
        self.state_lift_down_or_up = kwargs.get('state_lift_down_or_up', int())
        self.hall_rfid_en = kwargs.get('hall_rfid_en', int())
        self.distancex = kwargs.get('distancex', float())
        self.distancey = kwargs.get('distancey', float())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.error != other.error:
            return False
        if self.status != other.status:
            return False
        if self.distance != other.distance:
            return False
        if self.hall_location != other.hall_location:
            return False
        if self.lift_son_loc_cali != other.lift_son_loc_cali:
            return False
        if self.lift_current_loc != other.lift_current_loc:
            return False
        if self.lift_horseshoe_en != other.lift_horseshoe_en:
            return False
        if self.state_motor_or_son != other.state_motor_or_son:
            return False
        if self.state_lift_down_or_up != other.state_lift_down_or_up:
            return False
        if self.hall_rfid_en != other.hall_rfid_en:
            return False
        if self.distancex != other.distancex:
            return False
        if self.distancey != other.distancey:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
        self._x = value

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
        self._y = value

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
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'error' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._error = value

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
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance' field must be of type 'float'"
        self._distance = value

    @property
    def hall_location(self):
        """Message field 'hall_location'."""
        return self._hall_location

    @hall_location.setter
    def hall_location(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hall_location' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'hall_location' field must be an integer in [-2147483648, 2147483647]"
        self._hall_location = value

    @property
    def lift_son_loc_cali(self):
        """Message field 'lift_son_loc_cali'."""
        return self._lift_son_loc_cali

    @lift_son_loc_cali.setter
    def lift_son_loc_cali(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lift_son_loc_cali' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lift_son_loc_cali' field must be an integer in [-2147483648, 2147483647]"
        self._lift_son_loc_cali = value

    @property
    def lift_current_loc(self):
        """Message field 'lift_current_loc'."""
        return self._lift_current_loc

    @lift_current_loc.setter
    def lift_current_loc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lift_current_loc' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lift_current_loc' field must be an integer in [-2147483648, 2147483647]"
        self._lift_current_loc = value

    @property
    def lift_horseshoe_en(self):
        """Message field 'lift_horseshoe_en'."""
        return self._lift_horseshoe_en

    @lift_horseshoe_en.setter
    def lift_horseshoe_en(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lift_horseshoe_en' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lift_horseshoe_en' field must be an integer in [-2147483648, 2147483647]"
        self._lift_horseshoe_en = value

    @property
    def state_motor_or_son(self):
        """Message field 'state_motor_or_son'."""
        return self._state_motor_or_son

    @state_motor_or_son.setter
    def state_motor_or_son(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state_motor_or_son' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'state_motor_or_son' field must be an integer in [-2147483648, 2147483647]"
        self._state_motor_or_son = value

    @property
    def state_lift_down_or_up(self):
        """Message field 'state_lift_down_or_up'."""
        return self._state_lift_down_or_up

    @state_lift_down_or_up.setter
    def state_lift_down_or_up(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state_lift_down_or_up' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'state_lift_down_or_up' field must be an integer in [-2147483648, 2147483647]"
        self._state_lift_down_or_up = value

    @property
    def hall_rfid_en(self):
        """Message field 'hall_rfid_en'."""
        return self._hall_rfid_en

    @hall_rfid_en.setter
    def hall_rfid_en(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hall_rfid_en' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'hall_rfid_en' field must be an integer in [-2147483648, 2147483647]"
        self._hall_rfid_en = value

    @property
    def distancex(self):
        """Message field 'distancex'."""
        return self._distancex

    @distancex.setter
    def distancex(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distancex' field must be of type 'float'"
        self._distancex = value

    @property
    def distancey(self):
        """Message field 'distancey'."""
        return self._distancey

    @distancey.setter
    def distancey(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distancey' field must be of type 'float'"
        self._distancey = value
