#include <QtGui>
#include <QMessageBox>
#include <iostream>

#include "mainwindow.h"
#include "ui_mainwindow.h"

namespace DDI
{

MainWindow::MainWindow(int argc, char **argv, QWidget *parent) : QMainWindow(parent), qnode(argc, argv), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_Rviz = new CreateRviz();
#if DEBUG
        qDebug() << "m_Rviz Class";
#endif

    QObject::connect(ui->actionAbout_Qt, SIGNAL(triggered(bool)), qApp, SLOT(aboutQt())); // qApp is a global variable for the application

    setWindowIcon(QIcon(":/images/icon.png"));
    QObject::connect(&qnode, SIGNAL(rosShutdown()), this, SLOT(close()));

    QObject::connect(ui->btnReady, SIGNAL(clicked()), this, SLOT(btnReadyClicked()));
    QObject::connect(ui->btnRun, SIGNAL(clicked()), this, SLOT(btnRunClicked()));
    QObject::connect(ui->btnGripperOn, SIGNAL(clicked()), this, SLOT(btnReadyClicked()));
    QObject::connect(ui->btnGripperOff, SIGNAL(clicked()), this, SLOT(btnReadyClicked()));

    QObject::connect(ui->txtJ1, SIGNAL(editingFinished()), this, SLOT(txtEditingFinished()));
    QObject::connect(ui->txtJ2, SIGNAL(editingFinished()), this, SLOT(txtEditingFinished()));
    QObject::connect(ui->txtJ3, SIGNAL(editingFinished()), this, SLOT(txtEditingFinished()));
    QObject::connect(ui->txtJ4, SIGNAL(editingFinished()), this, SLOT(txtEditingFinished()));
    QObject::connect(ui->txtJ5, SIGNAL(editingFinished()), this, SLOT(txtEditingFinished()));
    QObject::connect(ui->txtJ6, SIGNAL(editingFinished()), this, SLOT(txtEditingFinished()));

    QObject::connect(ui->txtPX, SIGNAL(editingFinished()), this, SLOT(txtEditingFinished()));
    QObject::connect(ui->txtPY, SIGNAL(editingFinished()), this, SLOT(txtEditingFinished()));
    QObject::connect(ui->txtPZ, SIGNAL(editingFinished()), this, SLOT(txtEditingFinished()));
    QObject::connect(ui->txtRX, SIGNAL(editingFinished()), this, SLOT(txtEditingFinished()));
    QObject::connect(ui->txtRY, SIGNAL(editingFinished()), this, SLOT(txtEditingFinished()));
    QObject::connect(ui->txtRZ, SIGNAL(editingFinished()), this, SLOT(txtEditingFinished()));

    if (!qnode.init())
    {
        showNoMasterMessage();
    }
    else
    {
        m_Rviz->Rviz_Init(ui);
        init();
    }
}

MainWindow::~MainWindow()
{
    delete m_Rviz;
    delete ui;
}

void MainWindow::showNoMasterMessage()
{
    QMessageBox msgBox;
    msgBox.setText("Couldn't find the ros master.");
    msgBox.exec();
    close();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    QMainWindow::closeEvent(event);
}

void MainWindow::init(){
    ui->txtJ1->setText("0");
    ui->txtJ2->setText("0");
    ui->txtJ3->setText("0");
    ui->txtJ4->setText("0");
    ui->txtJ5->setText("0");
    ui->txtJ6->setText("0");
}

void MainWindow::btnReadyClicked(){
    qDebug() << sender()->objectName();
}

void MainWindow::btnRunClicked(){
    qDebug() << sender()->objectName();
}

void MainWindow::btnGripperOnClicked(){
    qDebug() << sender()->objectName();
}

void MainWindow::btnGripperOffClicked(){
    qDebug() << sender()->objectName();
}

void MainWindow::txtEditingFinished(){
    qDebug() << sender()->objectName();
}

}
