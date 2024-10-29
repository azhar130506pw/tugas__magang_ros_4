#include "ros/ros.h"
#include "std_msgs/String.h"
#include "../include/manajemen_buku/Buku.h"
#include <sstream>
#include <string>

int main(int argc, char **argv) {
    ros::init(argc, argv, "publisher_buku");
    ros::NodeHandle nh;

    ros::Publisher pub = nh.advertise<std_msgs::String>("buku_info", 10);
    ros::Rate loop_rate(1);

    while (ros::ok()) {
        int id, tahun;
        std::string judul, penulis;

        std::cout << "Masukkan ID: ";
        std::cin >> id;
        std::cin.ignore();

        std::cout << "Masukkan Judul: ";
        std::getline(std::cin, judul);

        std::cout << "Masukkan Penulis: ";
        std::getline(std::cin, penulis);

        std::cout << "Masukkan Tahun Terbit: ";
        std::cin >> tahun;

        Buku buku(id, judul, penulis, tahun);

        std_msgs::String msg;
        std::stringstream ss;
        ss << "ID: " << id << ", Judul: " << judul 
           << ", Penulis: " << penulis << ", Tahun: " << tahun;
        msg.data = ss.str();

        ROS_INFO("%s", msg.data.c_str());
        pub.publish(msg);

        ros::spinOnce();
        loop_rate.sleep();
    }

    return 0;
}
