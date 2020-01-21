/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtGui>
#include <QApplication>
#include "MainWindow/mainwindow.h"

/*****************************************************************************
** Main
*****************************************************************************/

int main(int argc, char **argv) {
    QApplication app(argc, argv);
    DDI::MainWindow w(argc,argv);
    w.show();
    app.connect(&app, SIGNAL(lastWindowClosed()), &app, SLOT(quit()));
    int result = app.exec();

	return result;
}
