#include <ros/ros.h>

int main(int argc, char **argv) {
  ros::init(argc, argv, "my_hello");
  ROS_INFO("Hello world");
  return 0;
}
