/**
 * @file /src/qnode.cpp
 *
 * @brief Ros communication central!
 *
 * @date February 2011
 **/

/*****************************************************************************
** Includes
*****************************************************************************/

#include <ros/ros.h>
#include <ros/network.h>
#include <string>
#include <std_msgs/String.h>
#include <sstream>
#include <tf/tf.h>

#include "qnode.h"

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace DDI {

/*****************************************************************************
** Implementation
*****************************************************************************/

QNode::QNode(int argc, char** argv ) :
    init_argc(argc), init_argv(argv)
{
    _SystemMsg.clear();

    ros::init(init_argc,init_argv,"doosan_digital_innovation");
}

QNode::~QNode() {
    if(ros::isStarted()) {
        ros::shutdown(); // explicitly needed since we use ros::start();
        ros::waitForShutdown();
    }
    wait();
}

bool QNode::init()
{
    ros::init(init_argc,init_argv,"doosan_digital_innovation");

    if ( ! ros::master::check() )
    {
        return false;
    }
    else
    {
        ros::start();

        ros::NodeHandle n;

        start();
    }

    return true;
}

bool QNode::init(const std::string &master_url, const std::string &host_url)
{
    std::map<std::string,std::string> remappings;

    remappings["__master"] = master_url;
    remappings["__hostname"] = host_url;

    ros::init(remappings,"doosan_digital_innovation");

    ros::NodeHandle n;


    if ( ! ros::master::check() )
    {
        return false;
    }
    else
    {
        ros::start();

        start();
    }

    return true;
}

void QNode::run() {
    ros::Rate loop_rate(1);

    while ( ros::ok() )
    {
        ros::spinOnce();

        loop_rate.sleep();
    }
    std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
    Q_EMIT rosShutdown();
}


void QNode::log( const LogLevel &level, const std::string &msg) {
    logging_model.insertRows(logging_model.rowCount(),1);
    std::stringstream logging_model_msg;
    switch ( level ) {
    case(Debug) : {
        ROS_DEBUG_STREAM(msg);
        logging_model_msg << "[DEBUG] [" << ros::Time::now() << "]: " << msg;
        break;
    }
    case(Info) : {
        ROS_INFO_STREAM(msg);
        logging_model_msg << "[INFO] [" << ros::Time::now() << "]: " << msg;
        break;
    }
    case(Warn) : {
        ROS_WARN_STREAM(msg);
        logging_model_msg << "[INFO] [" << ros::Time::now() << "]: " << msg;
        break;
    }
    case(Error) : {
        ROS_ERROR_STREAM(msg);
        logging_model_msg << "[ERROR] [" << ros::Time::now() << "]: " << msg;
        break;
    }
    case(Fatal) : {
        ROS_FATAL_STREAM(msg);
        logging_model_msg << "[FATAL] [" << ros::Time::now() << "]: " << msg;
        break;
    }
    }
    QVariant new_row(QString(logging_model_msg.str().c_str()));
    logging_model.setData(logging_model.index(logging_model.rowCount()-1),new_row);
    Q_EMIT loggingUpdated(); // used to readjust the scrollbar
}

}  // namespace robomap
