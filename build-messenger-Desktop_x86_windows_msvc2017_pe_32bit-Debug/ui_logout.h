/********************************************************************************
** Form generated from reading UI file 'logout.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGOUT_H
#define UI_LOGOUT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_LogOut
{
public:
    QFrame *frame;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QToolButton *toolButton;
    QPushButton *pushButton;

    void setupUi(QDialog *LogOut)
    {
        if (LogOut->objectName().isEmpty())
            LogOut->setObjectName("LogOut");
        LogOut->resize(800, 600);
        LogOut->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background-image: url(:/new/prefix1/image/iStock-697020460-scaled.jpg);\n"
"}\n"
"\n"
"\n"
"QFrame{\n"
"background:rgba(0,0,0,0.8);\n"
"border-radius:15px;\n"
"}\n"
"\n"
"\n"
"QToolButton{\n"
"border-radius:60px;\n"
"background-color: rgb(0, 85, 127);\n"
"}\n"
"\n"
"\n"
"QPushButton{\n"
"border-radius:15px;\n"
"background-color: rgb(0, 85, 127);\n"
"font: 900 14pt \"Segoe UI Black\";\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(0, 0, 127);\n"
"}\n"
"\n"
"\n"
"QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom: 1px solid #717072\n"
"}\n"
"\n"
"QLabel{\n"
"color:white;\n"
"border-radius:15px;\n"
"font: 900 14pt \"Segoe UI Black\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"font: 18px;\n"
"}\n"
""));
        frame = new QFrame(LogOut);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(110, 100, 601, 451));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(40, 130, 471, 28));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(40, 210, 471, 28));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 100, 251, 20));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 180, 251, 20));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(242, 50, 161, 41));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 260, 251, 20));
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(40, 290, 471, 28));
        lineEdit_3->setEchoMode(QLineEdit::Password);
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(70, 370, 451, 51));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(530, 210, 31, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/image/4779893-200.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(30, 30));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(530, 290, 31, 31));
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(30, 30));
        toolButton = new QToolButton(LogOut);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(340, 30, 121, 121));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/image/126467.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);
        toolButton->setIconSize(QSize(70, 70));
        pushButton = new QPushButton(LogOut);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 20, 61, 51));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/image/93634.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(30, 30));

        retranslateUi(LogOut);

        QMetaObject::connectSlotsByName(LogOut);
    } // setupUi

    void retranslateUi(QDialog *LogOut)
    {
        LogOut->setWindowTitle(QCoreApplication::translate("LogOut", "Dialog", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("LogOut", "Username", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("LogOut", "Password", nullptr));
        label->setText(QCoreApplication::translate("LogOut", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("LogOut", "Password", nullptr));
        label_3->setText(QCoreApplication::translate("LogOut", "Log Out", nullptr));
        label_4->setText(QCoreApplication::translate("LogOut", "Confirm", nullptr));
        lineEdit_3->setText(QString());
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("LogOut", "Confirm", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LogOut", "Log Out", nullptr));
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        toolButton->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LogOut: public Ui_LogOut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGOUT_H
