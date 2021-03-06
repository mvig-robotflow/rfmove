// Generated by message_relay for processing frame IDs in rosgraph_msgs messages and services.
// DO NOT EDIT


#ifndef MESSAGE_RELAY_ROSGRAPH_MSGS_MESSAGE_PROCESSOR_H
#define MESSAGE_RELAY_ROSGRAPH_MSGS_MESSAGE_PROCESSOR_H

#include "message_relay/processor/message_processor.h"

#include "rosgraph_msgs/Clock.h"
#include "rosgraph_msgs/Log.h"
#include "rosgraph_msgs/TopicStatistics.h"


namespace message_relay
{

template<>
void MessageProcessor<rosgraph_msgs::TopicStatistics, FrameIdProcessor>::processMessage(rosgraph_msgs::TopicStatistics::Ptr &msg, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void MessageProcessor<rosgraph_msgs::Log, FrameIdProcessor>::processMessage(rosgraph_msgs::Log::Ptr &msg, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void MessageProcessor<rosgraph_msgs::Clock, FrameIdProcessor>::processMessage(rosgraph_msgs::Clock::Ptr &msg, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void MessageProcessor<rosgraph_msgs::TopicStatistics, TimeProcessor>::processMessage(rosgraph_msgs::TopicStatistics::Ptr &msg, TimeProcessor::ConstPtr &time_processor);

template<>
void MessageProcessor<rosgraph_msgs::Log, TimeProcessor>::processMessage(rosgraph_msgs::Log::Ptr &msg, TimeProcessor::ConstPtr &time_processor);

template<>
void MessageProcessor<rosgraph_msgs::Clock, TimeProcessor>::processMessage(rosgraph_msgs::Clock::Ptr &msg, TimeProcessor::ConstPtr &time_processor);

}  // namespace message_relay

#endif // MESSAGE_RELAY_ROSGRAPH_MSGS_MESSAGE_PROCESSOR_H
