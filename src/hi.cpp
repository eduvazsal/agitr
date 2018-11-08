// hi.cpp : Hi world! program for ROS

#include <ros/ros.h>

int main(int argc, char **argv)
{
	ros::init(argc, argv, "hi_ros");
	ros::NodeHandle nh;

	ROS_INFO_STREAM("Hi, ROS! I'm trying Git now :P");
}