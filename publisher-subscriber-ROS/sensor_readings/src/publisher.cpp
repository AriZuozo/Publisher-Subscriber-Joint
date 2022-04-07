#include "ros/ros.h"
#include "custom_msgs/JointPosition.h"

#include <sstream>

int main(int argc, char **argv) {

    ros::init(argc, argv, "talker_node");
    ros::NodeHandle n;

    ros::Publisher measures_pub = n.advertise<custom_msgs::JointPosition>("measures", 100);

    ros::Rate loop_rate(10);

    while (ros::ok()) {

        custom_msgs::JointPosition measure;

        measure.joint1.data = "Joint1";
        measure.x1.data = 1.0;
        measure.y1.data = 1.0;
        measure.z1.data = 1.0;

        measure.joint2.data = "Joint2";
        measure.x2.data = 2.0;
        measure.y2.data = 2.0;
        measure.z2.data = 2.0;

        measure.joint3.data = "Joint3";
        measure.x3.data = 3.0;
        measure.y3.data = 3.0;
        measure.z3.data = 3.0;

        measure.joint4.data = "Joint4";
        measure.x4.data = 4.0;
        measure.y4.data = 4.0;
        measure.z4.data = 4.0;

        measure.joint5.data = "Joint5";
        measure.x5.data = 5.0;
        measure.y5.data = 5.0;
        measure.z5.data = 5.0;

        measure.joint6.data = "Joint6";
        measure.x6.data = 6.0;
        measure.y6.data = 6.0;
        measure.z6.data = 6.0;
        
        measures_pub.publish(measure);
        loop_rate.sleep();
    }

    return 0;
}