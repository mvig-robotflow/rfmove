// Generated by gencpp from file multimaster_msgs_fkie/Capability.msg
// DO NOT EDIT!


#ifndef MULTIMASTER_MSGS_FKIE_MESSAGE_CAPABILITY_H
#define MULTIMASTER_MSGS_FKIE_MESSAGE_CAPABILITY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace multimaster_msgs_fkie
{
template <class ContainerAllocator>
struct Capability_
{
  typedef Capability_<ContainerAllocator> Type;

  Capability_()
    : namespace()
    , name()
    , type()
    , images()
    , description()
    , nodes()  {
    }
  Capability_(const ContainerAllocator& _alloc)
    : namespace(_alloc)
    , name(_alloc)
    , type(_alloc)
    , images(_alloc)
    , description(_alloc)
    , nodes(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _namespace_type;
  _namespace_type namespace;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _images_type;
  _images_type images;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _description_type;
  _description_type description;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _nodes_type;
  _nodes_type nodes;





  typedef boost::shared_ptr< ::multimaster_msgs_fkie::Capability_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::multimaster_msgs_fkie::Capability_<ContainerAllocator> const> ConstPtr;

}; // struct Capability_

typedef ::multimaster_msgs_fkie::Capability_<std::allocator<void> > Capability;

typedef boost::shared_ptr< ::multimaster_msgs_fkie::Capability > CapabilityPtr;
typedef boost::shared_ptr< ::multimaster_msgs_fkie::Capability const> CapabilityConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::multimaster_msgs_fkie::Capability_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::multimaster_msgs_fkie::Capability_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::multimaster_msgs_fkie::Capability_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::multimaster_msgs_fkie::Capability_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multimaster_msgs_fkie::Capability_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multimaster_msgs_fkie::Capability_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multimaster_msgs_fkie::Capability_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multimaster_msgs_fkie::Capability_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::multimaster_msgs_fkie::Capability_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ca248f1a2644e7372795bf788ed1941b";
  }

  static const char* value(const ::multimaster_msgs_fkie::Capability_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xca248f1a2644e737ULL;
  static const uint64_t static_value2 = 0x2795bf788ed1941bULL;
};

template<class ContainerAllocator>
struct DataType< ::multimaster_msgs_fkie::Capability_<ContainerAllocator> >
{
  static const char* value()
  {
    return "multimaster_msgs_fkie/Capability";
  }

  static const char* value(const ::multimaster_msgs_fkie::Capability_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::multimaster_msgs_fkie::Capability_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# the ROS namespace of the capability\n\
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

  static const char* value(const ::multimaster_msgs_fkie::Capability_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::multimaster_msgs_fkie::Capability_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.namespace);
      stream.next(m.name);
      stream.next(m.type);
      stream.next(m.images);
      stream.next(m.description);
      stream.next(m.nodes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Capability_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::multimaster_msgs_fkie::Capability_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::multimaster_msgs_fkie::Capability_<ContainerAllocator>& v)
  {
    s << indent << "namespace: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.namespace);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "images[]" << std::endl;
    for (size_t i = 0; i < v.images.size(); ++i)
    {
      s << indent << "  images[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.images[i]);
    }
    s << indent << "description: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.description);
    s << indent << "nodes[]" << std::endl;
    for (size_t i = 0; i < v.nodes.size(); ++i)
    {
      s << indent << "  nodes[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.nodes[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MULTIMASTER_MSGS_FKIE_MESSAGE_CAPABILITY_H
