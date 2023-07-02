/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-image: url(:/new/prefix1/image/Qvqz7n.jpg);\n"
"}\n"
"\n"
"QLabel{\n"
"	font: 28pt \"Segoe Print\";	\n"
"	color:white;\n"
"}\n"
"\n"
"QPushButton{\n"
"color:white;\n"
"border-radius:15px;\n"
"background-color: rgb(0, 170, 255);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(0, 0, 127);\n"
"border-radius:15px;\n"
"color:white;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(160, 90, 501, 411));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border-radius:15px;\n"
"	background-color:rgba(0,0,0,0.5)\n"
"	\n"
"}\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 210, 171, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font: 900 12pt \"Segoe UI Black\";"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(140, 270, 231, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 900 12pt \"Segoe UI Black\";"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 130, 281, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 900 12pt \"Segoe UI Black\";\n"
"background-color:rgba(0,0,0,0);"));
        label_2->setAlignment(Qt::AlignCenter);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 60, 261, 51));
        label->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        label->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Log In", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "create new account", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "logIn or create new account", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "welcome", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
