// Generated by gencpp from file pr2_mechanism_msgs/ActuatorStatistics.msg
// DO NOT EDIT!


#ifndef PR2_MECHANISM_MSGS_MESSAGE_ACTUATORSTATISTICS_H
#define PR2_MECHANISM_MSGS_MESSAGE_ACTUATORSTATISTICS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pr2_mechanism_msgs
{
template <class ContainerAllocator>
struct ActuatorStatistics_
{
  typedef ActuatorStatistics_<ContainerAllocator> Type;

  ActuatorStatistics_()
    : name()
    , device_id(0)
    , timestamp()
    , encoder_count(0)
    , encoder_offset(0.0)
    , position(0.0)
    , encoder_velocity(0.0)
    , velocity(0.0)
    , calibration_reading(false)
    , calibration_rising_edge_valid(false)
    , calibration_falling_edge_valid(false)
    , last_calibration_rising_edge(0.0)
    , last_calibration_falling_edge(0.0)
    , is_enabled(false)
    , halted(false)
    , last_commanded_current(0.0)
    , last_commanded_effort(0.0)
    , last_executed_current(0.0)
    , last_executed_effort(0.0)
    , last_measured_current(0.0)
    , last_measured_effort(0.0)
    , motor_voltage(0.0)
    , num_encoder_errors(0)  {
    }
  ActuatorStatistics_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , device_id(0)
    , timestamp()
    , encoder_count(0)
    , encoder_offset(0.0)
    , position(0.0)
    , encoder_velocity(0.0)
    , velocity(0.0)
    , calibration_reading(false)
    , calibration_rising_edge_valid(false)
    , calibration_falling_edge_valid(false)
    , last_calibration_rising_edge(0.0)
    , last_calibration_falling_edge(0.0)
    , is_enabled(false)
    , halted(false)
    , last_commanded_current(0.0)
    , last_commanded_effort(0.0)
    , last_executed_current(0.0)
    , last_executed_effort(0.0)
    , last_measured_current(0.0)
    , last_measured_effort(0.0)
    , motor_voltage(0.0)
    , num_encoder_errors(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef int32_t _device_id_type;
  _device_id_type device_id;

   typedef ros::Time _timestamp_type;
  _timestamp_type timestamp;

   typedef int32_t _encoder_count_type;
  _encoder_count_type encoder_count;

   typedef double _encoder_offset_type;
  _encoder_offset_type encoder_offset;

   typedef double _position_type;
  _position_type position;

   typedef double _encoder_velocity_type;
  _encoder_velocity_type encoder_velocity;

   typedef double _velocity_type;
  _velocity_type velocity;

   typedef uint8_t _calibration_reading_type;
  _calibration_reading_type calibration_reading;

   typedef uint8_t _calibration_rising_edge_valid_type;
  _calibration_rising_edge_valid_type calibration_rising_edge_valid;

   typedef uint8_t _calibration_falling_edge_valid_type;
  _calibration_falling_edge_valid_type calibration_falling_edge_valid;

   typedef double _last_calibration_rising_edge_type;
  _last_calibration_rising_edge_type last_calibration_rising_edge;

   typedef double _last_calibration_falling_edge_type;
  _last_calibration_falling_edge_type last_calibration_falling_edge;

   typedef uint8_t _is_enabled_type;
  _is_enabled_type is_enabled;

   typedef uint8_t _halted_type;
  _halted_type halted;

   typedef double _last_commanded_current_type;
  _last_commanded_current_type last_commanded_current;

   typedef double _last_commanded_effort_type;
  _last_commanded_effort_type last_commanded_effort;

   typedef double _last_executed_current_type;
  _last_executed_current_type last_executed_current;

   typedef double _last_executed_effort_type;
  _last_executed_effort_type last_executed_effort;

   typedef double _last_measured_current_type;
  _last_measured_current_type last_measured_current;

   typedef double _last_measured_effort_type;
  _last_measured_effort_type last_measured_effort;

   typedef double _motor_voltage_type;
  _motor_voltage_type motor_voltage;

   typedef int32_t _num_encoder_errors_type;
  _num_encoder_errors_type num_encoder_errors;





  typedef boost::shared_ptr< ::pr2_mechanism_msgs::ActuatorStatistics_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_mechanism_msgs::ActuatorStatistics_<ContainerAllocator> const> ConstPtr;

}; // struct ActuatorStatistics_

typedef ::pr2_mechanism_msgs::ActuatorStatistics_<std::allocator<void> > ActuatorStatistics;

typedef boost::shared_ptr< ::pr2_mechanism_msgs::ActuatorStatistics > ActuatorStatisticsPtr;
typedef boost::shared_ptr< ::pr2_mechanism_msgs::ActuatorStatistics const> ActuatorStatisticsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pr2_mechanism_msgs::ActuatorStatistics_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pr2_mechanism_msgs::ActuatorStatistics_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pr2_mechanism_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'pr2_mechanism_msgs': ['/tmp/binarydeb/ros-kinetic-pr2-mechanism-msgs-1.8.2/obj-x86_64-linux-gnu/devel/share/pr2_mechanism_msgs/msg', '/tmp/binarydeb/ros-kinetic-pr2-mechanism-msgs-1.8.2/msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pr2_mechanism_msgs::ActuatorStatistics_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_mechanism_msgs::ActuatorStatistics_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_mechanism_msgs::ActuatorStatistics_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_mechanism_msgs::ActuatorStatistics_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_mechanism_msgs::ActuatorStatistics_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_mechanism_msgs::ActuatorStatistics_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pr2_mechanism_msgs::ActuatorStatistics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c37184273b29627de29382f1d3670175";
  }

  static const char* value(const ::pr2_mechanism_msgs::ActuatorStatistics_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc37184273b29627dULL;
  static const uint64_t static_value2 = 0xe29382f1d3670175ULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_mechanism_msgs::ActuatorStatistics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_mechanism_msgs/ActuatorStatistics";
  }

  static const char* value(const ::pr2_mechanism_msgs::ActuatorStatistics_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pr2_mechanism_msgs::ActuatorStatistics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message contains the state of an actuator on the pr2 robot.\n\
# An actuator contains a motor and an encoder, and is connected\n\
# to a joint by a transmission\n\
\n\
# the name of the actuator\n\
string name\n\
\n\
# the sequence number of the MCB in the ethercat chain. \n\
# the first device in the chain gets deviced_id zero\n\
int32 device_id\n\
\n\
# the time at which this actuator state was measured\n\
time timestamp\n\
\n\
# the encoder position, represented by the number of encoder ticks\n\
int32 encoder_count\n\
\n\
# The angular offset (in radians) that is added to the encoder reading, \n\
# to get to the position of the actuator. This number is computed when the referece\n\
# sensor is triggered during the calibration phase\n\
float64 encoder_offset\n\
\n\
# the encoder position in radians\n\
float64 position\n\
\n\
# the encoder velocity in encoder ticks per second\n\
float64 encoder_velocity\n\
\n\
# the encoder velocity in radians per second\n\
float64 velocity\n\
\n\
# the value of the calibration reading: low (false) or high (true)\n\
bool calibration_reading\n\
\n\
# bool to indicate if the joint already triggered the rising/falling edge of the reference sensor\n\
bool calibration_rising_edge_valid\n\
bool calibration_falling_edge_valid\n\
\n\
# the encoder position when the last rising/falling edge was observed. \n\
# only read this value when the calibration_rising/falling_edge_valid is true\n\
float64 last_calibration_rising_edge\n\
float64 last_calibration_falling_edge\n\
\n\
# flag to indicate if this actuator is enabled or not. \n\
# An actuator can only be commanded when it is enabled.\n\
bool is_enabled\n\
\n\
# indicates if the motor is halted. A motor can be halted because of a voltage or communication problem\n\
bool halted\n\
\n\
# the last current/effort command that was requested\n\
float64 last_commanded_current\n\
float64 last_commanded_effort\n\
\n\
# the last current/effort command that was executed by the actuator\n\
float64 last_executed_current\n\
float64 last_executed_effort\n\
\n\
# the last current/effort that was measured by the actuator\n\
float64 last_measured_current\n\
float64 last_measured_effort\n\
\n\
# the motor voltate\n\
float64 motor_voltage\n\
\n\
# the number of detected encoder problems \n\
int32 num_encoder_errors\n\
\n\
";
  }

  static const char* value(const ::pr2_mechanism_msgs::ActuatorStatistics_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pr2_mechanism_msgs::ActuatorStatistics_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.device_id);
      stream.next(m.timestamp);
      stream.next(m.encoder_count);
      stream.next(m.encoder_offset);
      stream.next(m.position);
      stream.next(m.encoder_velocity);
      stream.next(m.velocity);
      stream.next(m.calibration_reading);
      stream.next(m.calibration_rising_edge_valid);
      stream.next(m.calibration_falling_edge_valid);
      stream.next(m.last_calibration_rising_edge);
      stream.next(m.last_calibration_falling_edge);
      stream.next(m.is_enabled);
      stream.next(m.halted);
      stream.next(m.last_commanded_current);
      stream.next(m.last_commanded_effort);
      stream.next(m.last_executed_current);
      stream.next(m.last_executed_effort);
      stream.next(m.last_measured_current);
      stream.next(m.last_measured_effort);
      stream.next(m.motor_voltage);
      stream.next(m.num_encoder_errors);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ActuatorStatistics_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_mechanism_msgs::ActuatorStatistics_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pr2_mechanism_msgs::ActuatorStatistics_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "device_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.device_id);
    s << indent << "timestamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.timestamp);
    s << indent << "encoder_count: ";
    Printer<int32_t>::stream(s, indent + "  ", v.encoder_count);
    s << indent << "encoder_offset: ";
    Printer<double>::stream(s, indent + "  ", v.encoder_offset);
    s << indent << "position: ";
    Printer<double>::stream(s, indent + "  ", v.position);
    s << indent << "encoder_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.encoder_velocity);
    s << indent << "velocity: ";
    Printer<double>::stream(s, indent + "  ", v.velocity);
    s << indent << "calibration_reading: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.calibration_reading);
    s << indent << "calibration_rising_edge_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.calibration_rising_edge_valid);
    s << indent << "calibration_falling_edge_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.calibration_falling_edge_valid);
    s << indent << "last_calibration_rising_edge: ";
    Printer<double>::stream(s, indent + "  ", v.last_calibration_rising_edge);
    s << indent << "last_calibration_falling_edge: ";
    Printer<double>::stream(s, indent + "  ", v.last_calibration_falling_edge);
    s << indent << "is_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_enabled);
    s << indent << "halted: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.halted);
    s << indent << "last_commanded_current: ";
    Printer<double>::stream(s, indent + "  ", v.last_commanded_current);
    s << indent << "last_commanded_effort: ";
    Printer<double>::stream(s, indent + "  ", v.last_commanded_effort);
    s << indent << "last_executed_current: ";
    Printer<double>::stream(s, indent + "  ", v.last_executed_current);
    s << indent << "last_executed_effort: ";
    Printer<double>::stream(s, indent + "  ", v.last_executed_effort);
    s << indent << "last_measured_current: ";
    Printer<double>::stream(s, indent + "  ", v.last_measured_current);
    s << indent << "last_measured_effort: ";
    Printer<double>::stream(s, indent + "  ", v.last_measured_effort);
    s << indent << "motor_voltage: ";
    Printer<double>::stream(s, indent + "  ", v.motor_voltage);
    s << indent << "num_encoder_errors: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num_encoder_errors);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PR2_MECHANISM_MSGS_MESSAGE_ACTUATORSTATISTICS_H
