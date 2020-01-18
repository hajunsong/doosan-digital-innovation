/**
 * @file /include/robomap/qnode.hpp
 *
 * @brief Communications central!
 *
 * @date February 2011
 **/
/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef robomap_QNODE_HPP_
#define robomap_QNODE_HPP_

/*****************************************************************************
** Includes
*****************************************************************************/

#ifndef Q_MOC_RUN
#include <ros/ros.h>
#endif
#include <string>
#include <QThread>
#include <QStringListModel>
#include <QString>

#include <iostream>
using namespace std;

namespace DDI
{

class QNode : public QThread
{
	Q_OBJECT
public:
	QNode(int argc, char **argv);
	~QNode();
	bool init();
	bool init(const std::string &master_url, const std::string &host_url);
	void run();

	/*********************
	** Logging
	**********************/
	enum LogLevel
	{
		Debug,
		Info,
		Warn,
		Error,
		Fatal
	};

	QStringListModel *loggingModel() { return &logging_model; }
	void log(const LogLevel &level, const std::string &msg);

Q_SIGNALS:
	void loggingUpdated();
	void rosShutdown();

private:
	int init_argc;
	char **init_argv;

	QString _SystemMsg;

	QStringListModel logging_model;
};

} // namespace

#endif /* QNODE_HPP_ */
