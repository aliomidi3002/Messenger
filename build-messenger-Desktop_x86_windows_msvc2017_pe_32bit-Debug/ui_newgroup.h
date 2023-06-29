/********************************************************************************
** Form generated from reading UI file 'newgroup.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWGROUP_H
#define UI_NEWGROUP_H

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

class Ui_NewGroup
{
public:
    QFrame *frame;
    QLabel *label;
    QLineEdit *lineEdit;
    QToolButton *toolButton;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QPushButton *pushButton_2;

    void setupUi(QDialog *NewGroup)
    {
        if (NewGroup->objectName().isEmpty())
            NewGroup->setObjectName("NewGroup");
        NewGroup->resize(800, 600);
        NewGroup->setStyleSheet(QString::fromUtf8("QDialog{\n"
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
        frame = new QFrame(NewGroup);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(169, 100, 511, 101));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 10, 161, 31));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(70, 47, 321, 41));
        toolButton = new QToolButton(NewGroup);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(100, 70, 121, 121));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/image/3566345.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(70, 70));
        pushButton = new QPushButton(NewGroup);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(730, 20, 41, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/image/7043665.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(30, 30));
        listWidget = new QListWidget(NewGroup);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(205, 210, 441, 321));
        pushButton_2 = new QPushButton(NewGroup);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(270, 540, 311, 41));

        retranslateUi(NewGroup);

        QMetaObject::connectSlotsByName(NewGroup);
    } // setupUi

    void retranslateUi(QDialog *NewGroup)
    {
        NewGroup->setWindowTitle(QCoreApplication::translate("NewGroup", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NewGroup", "Group Name", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("NewGroup", "Group Name", nullptr));
        toolButton->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("NewGroup", "Apply Changes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewGroup: public Ui_NewGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWGROUP_H
