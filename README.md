# Publisher-Subscriber-Joint

1) Open a new shell in catkin_ws
2) Now you can build your progect with:
    catkin build
3) Launch the master node:
    rosnode
4) Open a new shell:
    source devele/setup.bash
6) Now you can launch the talker node in the same shell:
    rosrun sensor_readings talker_node
7) Open another shell:
    source devele/setup.bash
8) Now you can launch the subscriber node in this shell:
    rosrun sensor_readings listener_node
