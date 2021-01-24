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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
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
    QLineEdit *lineEdit1;
    QLineEdit *lineEdit2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit3;
    QLabel *lbl_all_time;
    QLabel *lbl_now_time;
    QPushButton *pB_next;
    QPushButton *pB_last;
    QPushButton *pB_up;
    QPushButton *pB_down;
    QTextEdit *tE_list;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(688, 529);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pB_play = new QPushButton(centralWidget);
        pB_play->setObjectName(QStringLiteral("pB_play"));
        pB_play->setGeometry(QRect(60, 130, 75, 23));
        pB_pause = new QPushButton(centralWidget);
        pB_pause->setObjectName(QStringLiteral("pB_pause"));
        pB_pause->setGeometry(QRect(160, 130, 75, 23));
        pB_stop = new QPushButton(centralWidget);
        pB_stop->setObjectName(QStringLiteral("pB_stop"));
        pB_stop->setGeometry(QRect(260, 130, 75, 23));
        Slider = new QSlider(centralWidget);
        Slider->setObjectName(QStringLiteral("Slider"));
        Slider->setGeometry(QRect(70, 30, 241, 22));
        Slider->setOrientation(Qt::Horizontal);
        lineEdit1 = new QLineEdit(centralWidget);
        lineEdit1->setObjectName(QStringLiteral("lineEdit1"));
        lineEdit1->setGeometry(QRect(450, 10, 113, 20));
        lineEdit2 = new QLineEdit(centralWidget);
        lineEdit2->setObjectName(QStringLiteral("lineEdit2"));
        lineEdit2->setGeometry(QRect(450, 50, 113, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(570, 10, 54, 12));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(570, 50, 54, 12));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(570, 100, 54, 12));
        lineEdit3 = new QLineEdit(centralWidget);
        lineEdit3->setObjectName(QStringLiteral("lineEdit3"));
        lineEdit3->setGeometry(QRect(450, 90, 113, 20));
        lbl_all_time = new QLabel(centralWidget);
        lbl_all_time->setObjectName(QStringLiteral("lbl_all_time"));
        lbl_all_time->setGeometry(QRect(333, 21, 71, 31));
        lbl_now_time = new QLabel(centralWidget);
        lbl_now_time->setObjectName(QStringLiteral("lbl_now_time"));
        lbl_now_time->setGeometry(QRect(170, 50, 71, 31));
        pB_next = new QPushButton(centralWidget);
        pB_next->setObjectName(QStringLiteral("pB_next"));
        pB_next->setGeometry(QRect(210, 220, 75, 23));
        pB_last = new QPushButton(centralWidget);
        pB_last->setObjectName(QStringLiteral("pB_last"));
        pB_last->setGeometry(QRect(110, 220, 75, 23));
        pB_up = new QPushButton(centralWidget);
        pB_up->setObjectName(QStringLiteral("pB_up"));
        pB_up->setGeometry(QRect(110, 180, 75, 23));
        pB_down = new QPushButton(centralWidget);
        pB_down->setObjectName(QStringLiteral("pB_down"));
        pB_down->setGeometry(QRect(210, 180, 75, 23));
        tE_list = new QTextEdit(centralWidget);
        tE_list->setObjectName(QStringLiteral("tE_list"));
        tE_list->setGeometry(QRect(410, 140, 251, 331));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 688, 23));
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
        pB_play->setText(QApplication::translate("MainWindow", "\346\222\255\346\224\276", Q_NULLPTR));
        pB_pause->setText(QApplication::translate("MainWindow", "\346\232\202\345\201\234", Q_NULLPTR));
        pB_stop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        lbl_all_time->setText(QApplication::translate("MainWindow", "all_time", Q_NULLPTR));
        lbl_now_time->setText(QApplication::translate("MainWindow", "now_time", Q_NULLPTR));
        pB_next->setText(QApplication::translate("MainWindow", "\344\270\213\344\270\200\346\233\262", Q_NULLPTR));
        pB_last->setText(QApplication::translate("MainWindow", "\344\270\212\344\270\200\346\233\262", Q_NULLPTR));
        pB_up->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        pB_down->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
