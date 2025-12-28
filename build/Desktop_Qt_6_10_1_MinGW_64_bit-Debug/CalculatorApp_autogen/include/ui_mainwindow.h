/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *ResultField;
    QPushButton *ButAC;
    QPushButton *ButPlusMinus;
    QPushButton *ButPerc;
    QPushButton *ButDiv;
    QPushButton *But7;
    QPushButton *But8;
    QPushButton *But9;
    QPushButton *ButMult;
    QPushButton *But4;
    QPushButton *But5;
    QPushButton *But6;
    QPushButton *ButMin;
    QPushButton *But1;
    QPushButton *But2;
    QPushButton *But3;
    QPushButton *ButPlu;
    QPushButton *But0;
    QPushButton *ButComma;
    QPushButton *ButEquals;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        ResultField = new QLineEdit(centralwidget);
        ResultField->setObjectName("ResultField");
        ResultField->setGeometry(QRect(60, 50, 151, 31));
        ButAC = new QPushButton(centralwidget);
        ButAC->setObjectName("ButAC");
        ButAC->setGeometry(QRect(60, 90, 31, 24));
        ButPlusMinus = new QPushButton(centralwidget);
        ButPlusMinus->setObjectName("ButPlusMinus");
        ButPlusMinus->setGeometry(QRect(100, 90, 31, 24));
        ButPerc = new QPushButton(centralwidget);
        ButPerc->setObjectName("ButPerc");
        ButPerc->setGeometry(QRect(140, 90, 31, 24));
        ButDiv = new QPushButton(centralwidget);
        ButDiv->setObjectName("ButDiv");
        ButDiv->setGeometry(QRect(180, 90, 31, 24));
        But7 = new QPushButton(centralwidget);
        But7->setObjectName("But7");
        But7->setGeometry(QRect(60, 120, 31, 24));
        But8 = new QPushButton(centralwidget);
        But8->setObjectName("But8");
        But8->setGeometry(QRect(100, 120, 31, 24));
        But9 = new QPushButton(centralwidget);
        But9->setObjectName("But9");
        But9->setGeometry(QRect(140, 120, 31, 24));
        ButMult = new QPushButton(centralwidget);
        ButMult->setObjectName("ButMult");
        ButMult->setGeometry(QRect(180, 120, 31, 24));
        But4 = new QPushButton(centralwidget);
        But4->setObjectName("But4");
        But4->setGeometry(QRect(60, 150, 31, 24));
        But5 = new QPushButton(centralwidget);
        But5->setObjectName("But5");
        But5->setGeometry(QRect(100, 150, 31, 24));
        But6 = new QPushButton(centralwidget);
        But6->setObjectName("But6");
        But6->setGeometry(QRect(140, 150, 31, 24));
        ButMin = new QPushButton(centralwidget);
        ButMin->setObjectName("ButMin");
        ButMin->setGeometry(QRect(180, 150, 31, 24));
        But1 = new QPushButton(centralwidget);
        But1->setObjectName("But1");
        But1->setGeometry(QRect(60, 180, 31, 24));
        But2 = new QPushButton(centralwidget);
        But2->setObjectName("But2");
        But2->setGeometry(QRect(100, 180, 31, 24));
        But3 = new QPushButton(centralwidget);
        But3->setObjectName("But3");
        But3->setGeometry(QRect(140, 180, 31, 24));
        ButPlu = new QPushButton(centralwidget);
        ButPlu->setObjectName("ButPlu");
        ButPlu->setGeometry(QRect(180, 180, 31, 24));
        But0 = new QPushButton(centralwidget);
        But0->setObjectName("But0");
        But0->setGeometry(QRect(100, 210, 31, 24));
        ButComma = new QPushButton(centralwidget);
        ButComma->setObjectName("ButComma");
        ButComma->setGeometry(QRect(140, 210, 31, 24));
        ButEquals = new QPushButton(centralwidget);
        ButEquals->setObjectName("ButEquals");
        ButEquals->setGeometry(QRect(180, 210, 31, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ResultField->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        ButAC->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        ButPlusMinus->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        ButPerc->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        ButDiv->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        But7->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        But8->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        But9->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        ButMult->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        But4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        But5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        But6->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        ButMin->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        But1->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        But2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        But3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        ButPlu->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        But0->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        ButComma->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        ButEquals->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
