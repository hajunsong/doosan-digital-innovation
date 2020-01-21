/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QSlider *hsJ1;
    QLineEdit *txtJ1;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QSlider *hsJ2;
    QLineEdit *txtJ2;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_4;
    QSlider *hsJ3;
    QLineEdit *txtJ3;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_5;
    QSlider *hsJ4;
    QLineEdit *txtJ4;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_6;
    QSlider *hsJ5;
    QLineEdit *txtJ5;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_7;
    QSlider *hsJ6;
    QLineEdit *txtJ6;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_8;
    QSlider *hsPX;
    QLineEdit *txtPX;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_9;
    QSlider *hsPY;
    QLineEdit *txtPY;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_10;
    QSlider *hsPZ;
    QLineEdit *txtPZ;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_11;
    QSlider *hsRX;
    QLineEdit *txtRX;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_12;
    QSlider *hsRY;
    QLineEdit *txtRY;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_13;
    QSlider *hsRZ;
    QLineEdit *txtRZ;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnGripperOn;
    QPushButton *btnGripperOff;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnReady;
    QPushButton *btnRun;
    QTableWidget *tablePath;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_5;
    QTableWidget *tableState;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QVBoxLayout *vlRvizPanel;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1348, 838);
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindow);
        action_Preferences->setObjectName(QStringLiteral("action_Preferences"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox_9 = new QGroupBox(centralwidget);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        gridLayout_3 = new QGridLayout(groupBox_9);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_4 = new QLabel(groupBox_9);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        hsJ1 = new QSlider(groupBox_9);
        hsJ1->setObjectName(QStringLiteral("hsJ1"));
        hsJ1->setMinimumSize(QSize(350, 0));
        hsJ1->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(hsJ1);

        txtJ1 = new QLineEdit(groupBox_9);
        txtJ1->setObjectName(QStringLiteral("txtJ1"));

        horizontalLayout_2->addWidget(txtJ1);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 1, 1, 2);

        label_5 = new QLabel(groupBox_9);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        hsJ2 = new QSlider(groupBox_9);
        hsJ2->setObjectName(QStringLiteral("hsJ2"));
        hsJ2->setMinimumSize(QSize(350, 0));
        hsJ2->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(hsJ2);

        txtJ2 = new QLineEdit(groupBox_9);
        txtJ2->setObjectName(QStringLiteral("txtJ2"));

        horizontalLayout_3->addWidget(txtJ2);


        gridLayout_3->addLayout(horizontalLayout_3, 1, 1, 1, 2);

        label_6 = new QLabel(groupBox_9);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        hsJ3 = new QSlider(groupBox_9);
        hsJ3->setObjectName(QStringLiteral("hsJ3"));
        hsJ3->setMinimumSize(QSize(350, 0));
        hsJ3->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(hsJ3);

        txtJ3 = new QLineEdit(groupBox_9);
        txtJ3->setObjectName(QStringLiteral("txtJ3"));

        horizontalLayout_4->addWidget(txtJ3);


        gridLayout_3->addLayout(horizontalLayout_4, 2, 1, 1, 2);

        label_7 = new QLabel(groupBox_9);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        hsJ4 = new QSlider(groupBox_9);
        hsJ4->setObjectName(QStringLiteral("hsJ4"));
        hsJ4->setMinimumSize(QSize(350, 0));
        hsJ4->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(hsJ4);

        txtJ4 = new QLineEdit(groupBox_9);
        txtJ4->setObjectName(QStringLiteral("txtJ4"));

        horizontalLayout_5->addWidget(txtJ4);


        gridLayout_3->addLayout(horizontalLayout_5, 3, 1, 1, 2);

        label_8 = new QLabel(groupBox_9);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 4, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        hsJ5 = new QSlider(groupBox_9);
        hsJ5->setObjectName(QStringLiteral("hsJ5"));
        hsJ5->setMinimumSize(QSize(350, 0));
        hsJ5->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(hsJ5);

        txtJ5 = new QLineEdit(groupBox_9);
        txtJ5->setObjectName(QStringLiteral("txtJ5"));

        horizontalLayout_6->addWidget(txtJ5);


        gridLayout_3->addLayout(horizontalLayout_6, 4, 1, 1, 2);

        label_9 = new QLabel(groupBox_9);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 5, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        hsJ6 = new QSlider(groupBox_9);
        hsJ6->setObjectName(QStringLiteral("hsJ6"));
        hsJ6->setMinimumSize(QSize(350, 0));
        hsJ6->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(hsJ6);

        txtJ6 = new QLineEdit(groupBox_9);
        txtJ6->setObjectName(QStringLiteral("txtJ6"));

        horizontalLayout_7->addWidget(txtJ6);


        gridLayout_3->addLayout(horizontalLayout_7, 5, 1, 1, 2);

        label_12 = new QLabel(groupBox_9);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 6, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        hsPX = new QSlider(groupBox_9);
        hsPX->setObjectName(QStringLiteral("hsPX"));
        hsPX->setMinimumSize(QSize(350, 0));
        hsPX->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(hsPX);

        txtPX = new QLineEdit(groupBox_9);
        txtPX->setObjectName(QStringLiteral("txtPX"));

        horizontalLayout_8->addWidget(txtPX);


        gridLayout_3->addLayout(horizontalLayout_8, 6, 1, 1, 2);

        label_15 = new QLabel(groupBox_9);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_3->addWidget(label_15, 7, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        hsPY = new QSlider(groupBox_9);
        hsPY->setObjectName(QStringLiteral("hsPY"));
        hsPY->setMinimumSize(QSize(350, 0));
        hsPY->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(hsPY);

        txtPY = new QLineEdit(groupBox_9);
        txtPY->setObjectName(QStringLiteral("txtPY"));

        horizontalLayout_9->addWidget(txtPY);


        gridLayout_3->addLayout(horizontalLayout_9, 7, 1, 1, 2);

        label_13 = new QLabel(groupBox_9);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_3->addWidget(label_13, 8, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        hsPZ = new QSlider(groupBox_9);
        hsPZ->setObjectName(QStringLiteral("hsPZ"));
        hsPZ->setMinimumSize(QSize(350, 0));
        hsPZ->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(hsPZ);

        txtPZ = new QLineEdit(groupBox_9);
        txtPZ->setObjectName(QStringLiteral("txtPZ"));

        horizontalLayout_10->addWidget(txtPZ);


        gridLayout_3->addLayout(horizontalLayout_10, 8, 1, 1, 2);

        label_10 = new QLabel(groupBox_9);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 9, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        hsRX = new QSlider(groupBox_9);
        hsRX->setObjectName(QStringLiteral("hsRX"));
        hsRX->setMinimumSize(QSize(350, 0));
        hsRX->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(hsRX);

        txtRX = new QLineEdit(groupBox_9);
        txtRX->setObjectName(QStringLiteral("txtRX"));

        horizontalLayout_11->addWidget(txtRX);


        gridLayout_3->addLayout(horizontalLayout_11, 9, 1, 1, 2);

        label_11 = new QLabel(groupBox_9);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_3->addWidget(label_11, 10, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        hsRY = new QSlider(groupBox_9);
        hsRY->setObjectName(QStringLiteral("hsRY"));
        hsRY->setMinimumSize(QSize(350, 0));
        hsRY->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(hsRY);

        txtRY = new QLineEdit(groupBox_9);
        txtRY->setObjectName(QStringLiteral("txtRY"));

        horizontalLayout_12->addWidget(txtRY);


        gridLayout_3->addLayout(horizontalLayout_12, 10, 1, 1, 2);

        label_14 = new QLabel(groupBox_9);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_3->addWidget(label_14, 11, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        hsRZ = new QSlider(groupBox_9);
        hsRZ->setObjectName(QStringLiteral("hsRZ"));
        hsRZ->setMinimumSize(QSize(350, 0));
        hsRZ->setOrientation(Qt::Horizontal);

        horizontalLayout_13->addWidget(hsRZ);

        txtRZ = new QLineEdit(groupBox_9);
        txtRZ->setObjectName(QStringLiteral("txtRZ"));

        horizontalLayout_13->addWidget(txtRZ);


        gridLayout_3->addLayout(horizontalLayout_13, 11, 1, 1, 2);

        label = new QLabel(groupBox_9);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 12, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnGripperOn = new QPushButton(groupBox_9);
        btnGripperOn->setObjectName(QStringLiteral("btnGripperOn"));

        horizontalLayout->addWidget(btnGripperOn);

        btnGripperOff = new QPushButton(groupBox_9);
        btnGripperOff->setObjectName(QStringLiteral("btnGripperOff"));

        horizontalLayout->addWidget(btnGripperOff);


        gridLayout_3->addLayout(horizontalLayout, 12, 1, 1, 2);


        gridLayout_4->addWidget(groupBox_9, 0, 1, 2, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(325, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        btnReady = new QPushButton(groupBox);
        btnReady->setObjectName(QStringLiteral("btnReady"));

        gridLayout_2->addWidget(btnReady, 1, 1, 1, 1);

        btnRun = new QPushButton(groupBox);
        btnRun->setObjectName(QStringLiteral("btnRun"));

        gridLayout_2->addWidget(btnRun, 1, 2, 1, 1);

        tablePath = new QTableWidget(groupBox);
        tablePath->setObjectName(QStringLiteral("tablePath"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tablePath->sizePolicy().hasHeightForWidth());
        tablePath->setSizePolicy(sizePolicy);
        tablePath->setMinimumSize(QSize(480, 0));

        gridLayout_2->addWidget(tablePath, 0, 0, 1, 3);


        gridLayout_4->addWidget(groupBox, 2, 1, 1, 1);

        groupBox_8 = new QGroupBox(centralwidget);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        gridLayout_5 = new QGridLayout(groupBox_8);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        tableState = new QTableWidget(groupBox_8);
        tableState->setObjectName(QStringLiteral("tableState"));

        gridLayout_5->addWidget(tableState, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_8, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(800, 460));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        vlRvizPanel = new QVBoxLayout();
        vlRvizPanel->setObjectName(QStringLiteral("vlRvizPanel"));

        gridLayout->addLayout(vlRvizPanel, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 0, 0, 2, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1348, 24));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Preferences);
        menu_File->addSeparator();
        menu_File->addAction(actionAbout);
        menu_File->addAction(actionAbout_Qt);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);

        retranslateUi(MainWindow);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QRosApp", 0));
        action_Quit->setText(QApplication::translate("MainWindow", "&Quit", 0));
        action_Quit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        action_Preferences->setText(QApplication::translate("MainWindow", "&Preferences", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", 0));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About &Qt", 0));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "Robot Control", 0));
        label_4->setText(QApplication::translate("MainWindow", "Joint 1 : ", 0));
        label_5->setText(QApplication::translate("MainWindow", "Joint 2 : ", 0));
        label_6->setText(QApplication::translate("MainWindow", "Joint 3 : ", 0));
        label_7->setText(QApplication::translate("MainWindow", "Joint 4 : ", 0));
        label_8->setText(QApplication::translate("MainWindow", "Joint 5 : ", 0));
        label_9->setText(QApplication::translate("MainWindow", "Joint 6 : ", 0));
        label_12->setText(QApplication::translate("MainWindow", "Pos X : ", 0));
        label_15->setText(QApplication::translate("MainWindow", "Pos Y : ", 0));
        label_13->setText(QApplication::translate("MainWindow", "Pos Z : ", 0));
        label_10->setText(QApplication::translate("MainWindow", "Rot X : ", 0));
        label_11->setText(QApplication::translate("MainWindow", "Rot Y : ", 0));
        label_14->setText(QApplication::translate("MainWindow", "Rot Z : ", 0));
        label->setText(QApplication::translate("MainWindow", "Gripper : ", 0));
        btnGripperOn->setText(QApplication::translate("MainWindow", "On", 0));
        btnGripperOff->setText(QApplication::translate("MainWindow", "Off", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Pick and Place", 0));
        btnReady->setText(QApplication::translate("MainWindow", "Ready", 0));
        btnRun->setText(QApplication::translate("MainWindow", "Run", 0));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Robot State", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Robot Model", 0));
        menu_File->setTitle(QApplication::translate("MainWindow", "&App", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
