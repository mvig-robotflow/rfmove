// Generated by gencpp from file dynamic_reconfigure/ParamDescription.msg
// DO NOT EDIT!


#ifndef DYNAMIC_RECONFIGURE_MESSAGE_PARAMDESCRIPTION_H
#define DYNAMIC_RECONFIGURE_MESSAGE_PARAMDESCRIPTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dynamic_reconfigure
{
template <class ContainerAllocator>
struct ParamDescription_
{
  typedef ParamDescription_<ContainerAllocator> Type;

  ParamDescription_()
    : name()
    , type()
    , level(0)
    , description()
    , edit_method()  {
    }
  ParamDescription_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , type(_alloc)
    , level(0)
    , description(_alloc)
    , edit_method(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef uint32_t _level_type;
  _level_type level;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _description_type;
  _description_type description;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _edit_method_type;
  _edit_method_type edit_method;





  typedef boost::shared_ptr< ::dynamic_reconfigure::ParamDescription_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamic_reconfigure::ParamDescription_<ContainerAllocator> const> ConstPtr;

}; // struct ParamDescription_

typedef ::dynamic_reconfigure::ParamDescription_<std::allocator<void> > ParamDescription;

typedef boost::shared_ptr< ::dynamic_reconfigure::ParamDescription > ParamDescriptionPtr;
typedef boost::shared_ptr< ::dynamic_reconfigure::ParamDescription const> ParamDescriptionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dynamic_reconfigure::ParamDescription_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dynamic_reconfigure::ParamDescription_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dynamic_reconfigure

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'dynamic_reconfigure': ['/tmp/binarydeb/ros-kinetic-dynamic-reconfigure-1.5.50/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dynamic_reconfigure::ParamDescription_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamic_reconfigure::ParamDescription_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamic_reconfigure::ParamDescription_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamic_reconfigure::ParamDescription_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamic_reconfigure::ParamDescription_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamic_reconfigure::ParamDescription_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dynamic_reconfigure::ParamDescription_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7434fcb9348c13054e0c3b267c8cb34d";
  }

  static const char* value(const ::dynamic_reconfigure::ParamDescription_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7434fcb9348c1305ULL;
  static const uint64_t static_value2 = 0x4e0c3b267c8cb34dULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamic_reconfigure::ParamDescription_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dynamic_reconfigure/ParamDescription";
  }

  static const char* value(const ::dynamic_reconfigure::ParamDescription_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dynamic_reconfigure::ParamDescription_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n\
string type\n\
uint32 level\n\
string description\n\
string edit_method\n\
";
  }

  static const char* value(const ::dynamic_reconfigure::ParamDescription_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dynamic_reconfigure::ParamDescription_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.type);
      stream.next(m.level);
      stream.next(m.description);
      stream.next(m.edit_method);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ParamDescription_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamic_reconfigure::ParamDescription_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dynamic_reconfigure::ParamDescription_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "level: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.level);
    s << indent << "description: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.description);
    s << indent << "edit_method: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.edit_method);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DYNAMIC_RECONFIGURE_MESSAGE_PARAMDESCRIPTION_H