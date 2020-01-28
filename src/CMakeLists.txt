cmake_minimum_required(VERSION 2.8.3)
project(keti_dsr_run)

find_package(catkin REQUIRED COMPONENTS
  rospy
  sensor_msgs
  dsr_msgs  
)

###################################
## catkin specific configuration ##
###################################
catkin_package()

###########
## Build ##
###########
## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

#############
## Install ##
#############

install(PROGRAMS scripts/keti_doosan.py
   DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
install(PROGRAMS scripts/keti_doosan_keyop.py
   DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
