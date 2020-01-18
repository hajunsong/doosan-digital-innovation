#ifndef robomap_MAIN_WINDOW_H
#define robomap_MAIN_WINDOW_H

/*****************************************************************************
** Includes
*****************************************************************************/
#include <QMainWindow>
#include <QDebug>
#include <QTime>
#include <QTimer>
#include <QStandardItemModel>
#include <QLabel>
#include <QPainter>
#include <QPicture>
#include <QPalette>
#include <QWidget>

#include <rviz/render_panel.h>
#include <rviz/visualization_manager.h>
#include <rviz/tool_manager.h>

#include "Qnode/qnode.h"
#include "Rviz/createrviz.h"

#include <iostream>
using namespace std;

#define DEBUG 1

/*****************************************************************************
** Namespace
*****************************************************************************/
namespace Ui {
class MainWindow;
}
namespace DDI {

/*****************************************************************************
** Interface [MainWindow]
*****************************************************************************/
/**
 * @brief Qt central, all operations relating to the view part here.
 */
class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(int argc, char** argv, QWidget *parent = 0);
    ~MainWindow();

    void closeEvent(QCloseEvent *event); // Overloaded function
    void showNoMasterMessage();

public slots:
    // button event
    void btnReadyClicked();
    void btnRunClicked();
    void btnGripperOnClicked();
    void btnGripperOffClicked();

    // line edit event
    void txtEditingFinished();

private:
    Ui::MainWindow *ui;
    QNode qnode;

    CreateRviz *m_Rviz;

    void init();
};

}  // namespace DDI

#endif
