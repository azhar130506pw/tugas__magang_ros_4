cmake_minimum_required(VERSION 3.0.2)
project(manajemen_buku)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
)

catkin_package(
  INCLUDE_DIRS include
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_executable(publisher_buku_node src/publisher.cpp src/BUKU_H.cpp)
add_executable(subscriber_buku_node src/subscriber.cpp)

target_link_libraries(publisher_buku_node ${catkin_LIBRARIES})
target_link_libraries(subscriber_buku_node ${catkin_LIBRARIES})

