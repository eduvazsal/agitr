// hello.cpp : Hello world! program for ROS

#include <ros/ros.h>

int main(int argc, char **argv)
{
	ros::init(argc, argv, "hello_ros");
	ros::NodeHandle nh;

	ROS_INFO_STREAM("Hello, ROS! I' trying Git now");
}