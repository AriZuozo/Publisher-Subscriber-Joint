#include "ros/ros.h"
#include "custom_msgs/JointPosition.h"

void measuresCallback(const custom_msgs::JointPosition::ConstPtr& measure) {
    ROS_INFO("Joint: [%s] in position x: [%f], y: [%f], z: [%f]", measure->joint1.data.c_str(),
                measure->x1.data, measure->y1.data, measure->z1.data);

    ROS_INFO("Joint: [%s] in position x: [%f], y: [%f], z: [%f]", measure->joint2.data.c_str(),
                measure->x2.data, measure->y2.data, measure->z2.data);
    
    ROS_INFO("Joint: [%s] in position x: [%f], y: [%f], z: [%f]", measure->joint3.data.c_str(),
                measure->x3.data, measure->y3.data, measure->z3.data);
    
    ROS_INFO("Joint: [%s] in position x: [%f], y: [%f], z: [%f]", measure->joint4.data.c_str(),
                measure->x4.data, measure->y4.data, measure->z4.data);

    ROS_INFO("Joint: [%s] in position x: [%f], y: [%f], z: [%f]", measure->joint5.data.c_str(),
                measure->x5.data, measure->y5.data, measure->z5.data);

    ROS_INFO("Joint: [%s] in position x: [%f], y: [%f], z: [%f]", measure->joint6.data.c_str(),
                measure->x6.data, measure->y6.data, measure->z6.data);


}


int main(int argc, char **argv) {
    
    ros::init(argc, argv, "listener");
    ros::NodeHandle n;

    ros::Subscriber measures_sub = n.subscribe("measures", 100, measuresCallback);

    ros::spin();

    return 0;
}