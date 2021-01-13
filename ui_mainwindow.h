/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pB_play;
    QPushButton *pB_pause;
    QPushButton *pB_stop;
    QSlider *Slider;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(500, 457);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pB_play = new QPushButton(centralWidget);
        pB_play->setObjectName(QStringLiteral("pB_play"));
        pB_play->setGeometry(QRect(70, 250, 75, 23));
        pB_pause = new QPushButton(centralWidget);
        pB_pause->setObjectName(QStringLiteral("pB_pause"));
        pB_pause->setGeometry(QRect(170, 250, 75, 23));
        pB_stop = new QPushButton(centralWidget);
        pB_stop->setObjectName(QStringLiteral("pB_stop"));
        pB_stop->setGeometry(QRect(270, 250, 75, 23));
        Slider = new QSlider(centralWidget);
        Slider->setObjectName(QStringLiteral("Slider"));
        Slider->setGeometry(QRect(80, 150, 241, 22));
        Slider->setOrientation(Qt::Horizontal);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pB_play->setText(QApplication::translate("MainWindow", "play", Q_NULLPTR));
        pB_pause->setText(QApplication::translate("MainWindow", "pause", Q_NULLPTR));
        pB_stop->setText(QApplication::translate("MainWindow", "stop", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
