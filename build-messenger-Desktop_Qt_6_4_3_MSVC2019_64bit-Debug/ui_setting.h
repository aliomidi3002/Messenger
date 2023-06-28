/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QFrame *frame;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QLabel *label;
    QToolButton *toolButton;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName("Setting");
        Setting->resize(800, 600);
        Setting->setStyleSheet(QString::fromUtf8("QDialog{\n"
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
"QLabel{\n"
"color:white;\n"
"border-radius:15px;\n"
"font: 900 14pt \"Segoe UI Black\";\n"
"}\n"
"\n"
""));
        frame = new QFrame(Setting);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(110, 110, 591, 421));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 130, 531, 51));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 200, 531, 51));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 270, 531, 51));
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(30, 340, 531, 51));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 50, 101, 41));
        label->setAlignment(Qt::AlignCenter);
        toolButton = new QToolButton(Setting);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(350, 30, 121, 121));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/image/76716.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(70, 70));
        pushButton_4 = new QPushButton(Setting);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 20, 61, 51));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/image/93634.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(40, 40));

        retranslateUi(Setting);

        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QDialog *Setting)
    {
        Setting->setWindowTitle(QCoreApplication::translate("Setting", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Setting", "Edit Profile", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Setting", "New Group", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Setting", "New Channel", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Setting", "Log Out", nullptr));
        label->setText(QCoreApplication::translate("Setting", "Setting", nullptr));
        toolButton->setText(QString());
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
