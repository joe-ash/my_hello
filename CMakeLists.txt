cmake_minimum_required(VERSION 2.8.3)
project(my_hello)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
)
catkin_package(
  CATKIN_DEPENDS roscpp std_msgs
)
include_directories(
  ${catkin_INCLUDE_DIRS}
)
add_executable(my_hello src/my_hello.cpp)
target_link_libraries(
  my_hello
  ${catkin_LIBRARIES}
)
