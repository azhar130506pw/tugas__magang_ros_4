#include "ros/ros.h"
#include "std_msgs/String.h"

void bukuCallback(const std_msgs::String::ConstPtr& msg) {
    ROS_INFO("Menerima Buku: %s", msg->data.c_str());
}

int main(int argc, char **argv) {
    ros::init(argc, argv, "subscriber_buku");
    ros::NodeHandle nh;

    ros::Subscriber sub = nh.subscribe("buku_info", 10, bukuCallback);

    ros::spin();

    return 0;
}
