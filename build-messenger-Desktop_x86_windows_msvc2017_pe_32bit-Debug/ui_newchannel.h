/********************************************************************************
** Form generated from reading UI file 'newchannel.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCHANNEL_H
#define UI_NEWCHANNEL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_NewChannel
{
public:
    QFrame *frame;
    QLabel *label;
    QLineEdit *lineEdit;
    QToolButton *toolButton;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QPushButton *pushButton_2;

    void setupUi(QDialog *NewChannel)
    {
        if (NewChannel->objectName().isEmpty())
            NewChannel->setObjectName("NewChannel");
        NewChannel->resize(800, 600);
        NewChannel->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background-image: url(:/new/prefix1/image/iStock-697020460-scaled.jpg);\n"
"}\n"
"\n"
"QFrame{\n"
"background:rgba(0,0,0,0.8);\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QToolButton{\n"
"border-radius:60px;\n"
"background-color: rgb(0, 85, 127);\n"
"}\n"
"\n"
"\n"
"QToolButton:hover{\n"
"background-color: rgb(0, 0, 127);\n"
"}\n"
"\n"
"\n"
"QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom: 1px solid #717072;\n"
"font: 12pt \"Segoe UI\";\n"
"}\n"
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
""));
        frame = new QFrame(NewChannel);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(190, 70, 471, 121));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 20, 301, 31));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(80, 60, 321, 28));
        toolButton = new QToolButton(NewChannel);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(130, 50, 121, 121));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/image/3566345.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(70, 704));
        pushButton = new QPushButton(NewChannel);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(750, 20, 31, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/image/7043665.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(30, 30));
        listWidget = new QListWidget(NewChannel);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(215, 200, 421, 321));
        pushButton_2 = new QPushButton(NewChannel);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(250, 530, 361, 51));

        retranslateUi(NewChannel);

        QMetaObject::connectSlotsByName(NewChannel);
    } // setupUi

    void retranslateUi(QDialog *NewChannel)
    {
        NewChannel->setWindowTitle(QCoreApplication::translate("NewChannel", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NewChannel", "Channel Name", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("NewChannel", "Channel Name", nullptr));
        toolButton->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("NewChannel", "Apply Changes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewChannel: public Ui_NewChannel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCHANNEL_H
