#include "createrviz.h"
#include "MainWindow/mainwindow.h"
#include "ui_mainwindow.h"

CreateRviz::CreateRviz()
{

}

void CreateRviz::Rviz_Init(void *_ui)
{
    Ui::MainWindow* ui = (Ui::MainWindow*)_ui;

    m_RvizRenderPanel=new rviz::RenderPanel();

    ui->vlRvizPanel->addWidget(m_RvizRenderPanel);

    m_RvizManager = new rviz::VisualizationManager(m_RvizRenderPanel);

    m_RvizRenderPanel->initialize(m_RvizManager->getSceneManager(),m_RvizManager);
    m_RvizManager->initialize();
    m_RvizManager->startUpdate();

    SetTopice();
}

void CreateRviz::SetTopice()
{
    //Set Fixed Frame
    m_RvizManager->setFixedFrame("map");

    //Set Grount Grid
    m_RvizGrid = m_RvizManager->createDisplay( "rviz/Grid", "adjustable grid", true );
    m_RvizGrid->subProp( "Line Style" )->setValue( "Billboards" );

    //Set Robot Model
    m_RvizRobotModel = m_RvizManager->createDisplay("rviz/RobotModel", "adjustable robotmodel", true);
    m_RvizRobotModel->subProp("Robot Description")->setValue("/dsr01/robot_description");
    m_RvizRobotModel->subProp("Visual Enabled")->setValue(true);
    m_RvizRobotModel->subProp("TF Prefix")->setValue("/dsr01");
}

