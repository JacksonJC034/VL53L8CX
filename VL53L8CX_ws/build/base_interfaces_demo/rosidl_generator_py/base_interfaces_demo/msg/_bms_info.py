# generated from rosidl_generator_py/resource/_idl.py.em
# with input from base_interfaces_demo:msg/BmsInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'temp'
# Member 'vcell'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BmsInfo(type):
    """Metaclass of message 'BmsInfo'."""

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
                'base_interfaces_demo.msg.BmsInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bms_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bms_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bms_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bms_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bms_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BmsInfo(metaclass=Metaclass_BmsInfo):
    """Message class 'BmsInfo'."""

    __slots__ = [
        '_cell_num',
        '_run_time',
        '_hsoc',
        '_voltage',
        '_cur_cadc',
        '_temp',
        '_temp1',
        '_temp2',
        '_temp3',
        '_temp4',
        '_temp5',
        '_temp6',
        '_tmax',
        '_tmin',
        '_vmax',
        '_vmin',
        '_vmaxmin_no',
        '_rsoc',
        '_fcc',
        '_rc',
        '_cycle_count',
        '_protect',
        '_alarm',
        '_pack_status',
        '_vcell',
        '_vcell1',
        '_state',
        '_soc',
        '_status',
        '_error_code',
    ]

    _fields_and_field_types = {
        'cell_num': 'uint32',
        'run_time': 'uint32',
        'hsoc': 'uint32',
        'voltage': 'double',
        'cur_cadc': 'uint32',
        'temp': 'double[6]',
        'temp1': 'uint32',
        'temp2': 'uint32',
        'temp3': 'uint32',
        'temp4': 'uint32',
        'temp5': 'uint32',
        'temp6': 'uint32',
        'tmax': 'double',
        'tmin': 'double',
        'vmax': 'uint32',
        'vmin': 'uint32',
        'vmaxmin_no': 'uint32',
        'rsoc': 'uint32',
        'fcc': 'double',
        'rc': 'double',
        'cycle_count': 'uint32',
        'protect': 'uint32',
        'alarm': 'uint32',
        'pack_status': 'uint32',
        'vcell': 'uint32[17]',
        'vcell1': 'uint32',
        'state': 'int32',
        'soc': 'uint32',
        'status': 'int32',
        'error_code': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 6),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 17),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cell_num = kwargs.get('cell_num', int())
        self.run_time = kwargs.get('run_time', int())
        self.hsoc = kwargs.get('hsoc', int())
        self.voltage = kwargs.get('voltage', float())
        self.cur_cadc = kwargs.get('cur_cadc', int())
        if 'temp' not in kwargs:
            self.temp = numpy.zeros(6, dtype=numpy.float64)
        else:
            self.temp = numpy.array(kwargs.get('temp'), dtype=numpy.float64)
            assert self.temp.shape == (6, )
        self.temp1 = kwargs.get('temp1', int())
        self.temp2 = kwargs.get('temp2', int())
        self.temp3 = kwargs.get('temp3', int())
        self.temp4 = kwargs.get('temp4', int())
        self.temp5 = kwargs.get('temp5', int())
        self.temp6 = kwargs.get('temp6', int())
        self.tmax = kwargs.get('tmax', float())
        self.tmin = kwargs.get('tmin', float())
        self.vmax = kwargs.get('vmax', int())
        self.vmin = kwargs.get('vmin', int())
        self.vmaxmin_no = kwargs.get('vmaxmin_no', int())
        self.rsoc = kwargs.get('rsoc', int())
        self.fcc = kwargs.get('fcc', float())
        self.rc = kwargs.get('rc', float())
        self.cycle_count = kwargs.get('cycle_count', int())
        self.protect = kwargs.get('protect', int())
        self.alarm = kwargs.get('alarm', int())
        self.pack_status = kwargs.get('pack_status', int())
        if 'vcell' not in kwargs:
            self.vcell = numpy.zeros(17, dtype=numpy.uint32)
        else:
            self.vcell = numpy.array(kwargs.get('vcell'), dtype=numpy.uint32)
            assert self.vcell.shape == (17, )
        self.vcell1 = kwargs.get('vcell1', int())
        self.state = kwargs.get('state', int())
        self.soc = kwargs.get('soc', int())
        self.status = kwargs.get('status', int())
        self.error_code = kwargs.get('error_code', int())

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
        if self.cell_num != other.cell_num:
            return False
        if self.run_time != other.run_time:
            return False
        if self.hsoc != other.hsoc:
            return False
        if self.voltage != other.voltage:
            return False
        if self.cur_cadc != other.cur_cadc:
            return False
        if all(self.temp != other.temp):
            return False
        if self.temp1 != other.temp1:
            return False
        if self.temp2 != other.temp2:
            return False
        if self.temp3 != other.temp3:
            return False
        if self.temp4 != other.temp4:
            return False
        if self.temp5 != other.temp5:
            return False
        if self.temp6 != other.temp6:
            return False
        if self.tmax != other.tmax:
            return False
        if self.tmin != other.tmin:
            return False
        if self.vmax != other.vmax:
            return False
        if self.vmin != other.vmin:
            return False
        if self.vmaxmin_no != other.vmaxmin_no:
            return False
        if self.rsoc != other.rsoc:
            return False
        if self.fcc != other.fcc:
            return False
        if self.rc != other.rc:
            return False
        if self.cycle_count != other.cycle_count:
            return False
        if self.protect != other.protect:
            return False
        if self.alarm != other.alarm:
            return False
        if self.pack_status != other.pack_status:
            return False
        if all(self.vcell != other.vcell):
            return False
        if self.vcell1 != other.vcell1:
            return False
        if self.state != other.state:
            return False
        if self.soc != other.soc:
            return False
        if self.status != other.status:
            return False
        if self.error_code != other.error_code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def cell_num(self):
        """Message field 'cell_num'."""
        return self._cell_num

    @cell_num.setter
    def cell_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cell_num' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'cell_num' field must be an unsigned integer in [0, 4294967295]"
        self._cell_num = value

    @property
    def run_time(self):
        """Message field 'run_time'."""
        return self._run_time

    @run_time.setter
    def run_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'run_time' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'run_time' field must be an unsigned integer in [0, 4294967295]"
        self._run_time = value

    @property
    def hsoc(self):
        """Message field 'hsoc'."""
        return self._hsoc

    @hsoc.setter
    def hsoc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hsoc' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'hsoc' field must be an unsigned integer in [0, 4294967295]"
        self._hsoc = value

    @property
    def voltage(self):
        """Message field 'voltage'."""
        return self._voltage

    @voltage.setter
    def voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'voltage' field must be of type 'float'"
        self._voltage = value

    @property
    def cur_cadc(self):
        """Message field 'cur_cadc'."""
        return self._cur_cadc

    @cur_cadc.setter
    def cur_cadc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cur_cadc' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'cur_cadc' field must be an unsigned integer in [0, 4294967295]"
        self._cur_cadc = value

    @property
    def temp(self):
        """Message field 'temp'."""
        return self._temp

    @temp.setter
    def temp(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'temp' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 6, \
                "The 'temp' numpy.ndarray() must have a size of 6"
            self._temp = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'temp' field must be a set or sequence with length 6 and each value of type 'float'"
        self._temp = numpy.array(value, dtype=numpy.float64)

    @property
    def temp1(self):
        """Message field 'temp1'."""
        return self._temp1

    @temp1.setter
    def temp1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temp1' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'temp1' field must be an unsigned integer in [0, 4294967295]"
        self._temp1 = value

    @property
    def temp2(self):
        """Message field 'temp2'."""
        return self._temp2

    @temp2.setter
    def temp2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temp2' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'temp2' field must be an unsigned integer in [0, 4294967295]"
        self._temp2 = value

    @property
    def temp3(self):
        """Message field 'temp3'."""
        return self._temp3

    @temp3.setter
    def temp3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temp3' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'temp3' field must be an unsigned integer in [0, 4294967295]"
        self._temp3 = value

    @property
    def temp4(self):
        """Message field 'temp4'."""
        return self._temp4

    @temp4.setter
    def temp4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temp4' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'temp4' field must be an unsigned integer in [0, 4294967295]"
        self._temp4 = value

    @property
    def temp5(self):
        """Message field 'temp5'."""
        return self._temp5

    @temp5.setter
    def temp5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temp5' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'temp5' field must be an unsigned integer in [0, 4294967295]"
        self._temp5 = value

    @property
    def temp6(self):
        """Message field 'temp6'."""
        return self._temp6

    @temp6.setter
    def temp6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temp6' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'temp6' field must be an unsigned integer in [0, 4294967295]"
        self._temp6 = value

    @property
    def tmax(self):
        """Message field 'tmax'."""
        return self._tmax

    @tmax.setter
    def tmax(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tmax' field must be of type 'float'"
        self._tmax = value

    @property
    def tmin(self):
        """Message field 'tmin'."""
        return self._tmin

    @tmin.setter
    def tmin(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tmin' field must be of type 'float'"
        self._tmin = value

    @property
    def vmax(self):
        """Message field 'vmax'."""
        return self._vmax

    @vmax.setter
    def vmax(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vmax' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'vmax' field must be an unsigned integer in [0, 4294967295]"
        self._vmax = value

    @property
    def vmin(self):
        """Message field 'vmin'."""
        return self._vmin

    @vmin.setter
    def vmin(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vmin' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'vmin' field must be an unsigned integer in [0, 4294967295]"
        self._vmin = value

    @property
    def vmaxmin_no(self):
        """Message field 'vmaxmin_no'."""
        return self._vmaxmin_no

    @vmaxmin_no.setter
    def vmaxmin_no(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vmaxmin_no' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'vmaxmin_no' field must be an unsigned integer in [0, 4294967295]"
        self._vmaxmin_no = value

    @property
    def rsoc(self):
        """Message field 'rsoc'."""
        return self._rsoc

    @rsoc.setter
    def rsoc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rsoc' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'rsoc' field must be an unsigned integer in [0, 4294967295]"
        self._rsoc = value

    @property
    def fcc(self):
        """Message field 'fcc'."""
        return self._fcc

    @fcc.setter
    def fcc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fcc' field must be of type 'float'"
        self._fcc = value

    @property
    def rc(self):
        """Message field 'rc'."""
        return self._rc

    @rc.setter
    def rc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rc' field must be of type 'float'"
        self._rc = value

    @property
    def cycle_count(self):
        """Message field 'cycle_count'."""
        return self._cycle_count

    @cycle_count.setter
    def cycle_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cycle_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'cycle_count' field must be an unsigned integer in [0, 4294967295]"
        self._cycle_count = value

    @property
    def protect(self):
        """Message field 'protect'."""
        return self._protect

    @protect.setter
    def protect(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'protect' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'protect' field must be an unsigned integer in [0, 4294967295]"
        self._protect = value

    @property
    def alarm(self):
        """Message field 'alarm'."""
        return self._alarm

    @alarm.setter
    def alarm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alarm' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'alarm' field must be an unsigned integer in [0, 4294967295]"
        self._alarm = value

    @property
    def pack_status(self):
        """Message field 'pack_status'."""
        return self._pack_status

    @pack_status.setter
    def pack_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pack_status' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'pack_status' field must be an unsigned integer in [0, 4294967295]"
        self._pack_status = value

    @property
    def vcell(self):
        """Message field 'vcell'."""
        return self._vcell

    @vcell.setter
    def vcell(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'vcell' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 17, \
                "The 'vcell' numpy.ndarray() must have a size of 17"
            self._vcell = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 17 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'vcell' field must be a set or sequence with length 17 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._vcell = numpy.array(value, dtype=numpy.uint32)

    @property
    def vcell1(self):
        """Message field 'vcell1'."""
        return self._vcell1

    @vcell1.setter
    def vcell1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcell1' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'vcell1' field must be an unsigned integer in [0, 4294967295]"
        self._vcell1 = value

    @property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'state' field must be an integer in [-2147483648, 2147483647]"
        self._state = value

    @property
    def soc(self):
        """Message field 'soc'."""
        return self._soc

    @soc.setter
    def soc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'soc' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'soc' field must be an unsigned integer in [0, 4294967295]"
        self._soc = value

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
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'error_code' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._error_code = value
