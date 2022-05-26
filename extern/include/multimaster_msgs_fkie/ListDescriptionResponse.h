// Generated by gencpp from file multimaster_msgs_fkie/ListDescriptionResponse.msg
// DO NOT EDIT!


#ifndef MULTIMASTER_MSGS_FKIE_MESSAGE_LISTDESCRIPTIONRESPONSE_H
#define MULTIMASTER_MSGS_FKIE_MESSAGE_LISTDESCRIPTIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <multimaster_msgs_fkie/Capability.h>

namespace multimaster_msgs_fkie
{
template <class ContainerAllocator>
struct ListDescriptionResponse_
{
  typedef ListDescriptionResponse_<ContainerAllocator> Type;

  ListDescriptionResponse_()
    : robot_name()
    , robot_type()
    , robot_images()
    , robot_descr()
    , capabilities()  {
    }
  ListDescriptionResponse_(const ContainerAllocator& _alloc)
    : robot_name(_alloc)
    , robot_type(_alloc)
    , robot_images(_alloc)
    , robot_descr(_alloc)
    , capabilities(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _robot_name_type;
  _robot_name_type robot_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _robot_type_type;
  _robot_type_type robot_type;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _robot_images_type;
  _robot_images_type robot_images;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _robot_descr_type;
  _robot_descr_type robot_descr;

   typedef std::vector< ::multimaster_msgs_fkie::Capability_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::multimaster_msgs_fkie::Capability_<ContainerAllocator> >::other >  _capabilities_type;
  _capabilities_type capabilities;





  typedef boost::shared_ptr< ::multimaster_msgs_fkie::ListDescriptionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::multimaster_msgs_fkie::ListDescriptionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ListDescriptionResponse_

typedef ::multimaster_msgs_fkie::ListDescriptionResponse_<std::allocator<void> > ListDescriptionResponse;

typedef boost::shared_ptr< ::multimaster_msgs_fkie::ListDescriptionResponse > ListDescriptionResponsePtr;
typedef boost::shared_ptr< ::multimaster_msgs_fkie::ListDescriptionResponse const> ListDescriptionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::multimaster_msgs_fkie::ListDescriptionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::multimaster_msgs_fkie::ListDescriptionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace multimaster_msgs_fkie

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'multimaster_msgs_fkie': ['/tmp/binarydeb/ros-kinetic-multimaster-msgs-fkie-0.8.12/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::multimaster_msgs_fkie::ListDescriptionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::multimaster_msgs_fkie::ListDescriptionResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multimaster_msgs_fkie::ListDescriptionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multimaster_msgs_fkie::ListDescriptionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multimaster_msgs_fkie::ListDescriptionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multimaster_msgs_fkie::ListDescriptionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::multimaster_msgs_fkie::ListDescriptionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a36ba5a97ce785b9b964aa015b26332b";
  }

  static const char* value(const ::multimaster_msgs_fkie::ListDescriptionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa36ba5a97ce785b9ULL;
  static const uint64_t static_value2 = 0xb964aa015b26332bULL;
};

template<class ContainerAllocator>
struct DataType< ::multimaster_msgs_fkie::ListDescriptionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "multimaster_msgs_fkie/ListDescriptionResponse";
  }

  static const char* value(const ::multimaster_msgs_fkie::ListDescriptionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::multimaster_msgs_fkie::ListDescriptionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string robot_name\n\
string robot_type\n\
string[] robot_images\n\
string robot_descr\n\
multimaster_msgs_fkie/Capability[] capabilities\n\
\n\
================================================================================\n\
MSG: multimaster_msgs_fkie/Capability\n\
# the ROS namespace of the capability\n\
string namespace\n\
# the name of the capability\n\
string name\n\
# the type of the capability\n\
string type\n\
# list of the images assigned to the this capability\n\
string[] images\n\
# the description of the capability\n\
string description\n\
# a list of nodes assigned to this group. The nodes are described by full ROS name (with namesspace)\n\
string[] nodes \n\
";
  }

  static const char* value(const ::multimaster_msgs_fkie::ListDescriptionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::multimaster_msgs_fkie::ListDescriptionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.robot_name);
      stream.next(m.robot_type);
      stream.next(m.robot_images);
      stream.next(m.robot_descr);
      stream.next(m.capabilities);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ListDescriptionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::multimaster_msgs_fkie::ListDescriptionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::multimaster_msgs_fkie::ListDescriptionResponse_<ContainerAllocator>& v)
  {
    s << indent << "robot_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.robot_name);
    s << indent << "robot_type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.robot_type);
    s << indent << "robot_images[]" << std::endl;
    for (size_t i = 0; i < v.robot_images.size(); ++i)
    {
      s << indent << "  robot_images[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.robot_images[i]);
    }
    s << indent << "robot_descr: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.robot_descr);
    s << indent << "capabilities[]" << std::endl;
    for (size_t i = 0; i < v.capabilities.size(); ++i)
    {
      s << indent << "  capabilities[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::multimaster_msgs_fkie::Capability_<ContainerAllocator> >::stream(s, indent + "    ", v.capabilities[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MULTIMASTER_MSGS_FKIE_MESSAGE_LISTDESCRIPTIONRESPONSE_H
