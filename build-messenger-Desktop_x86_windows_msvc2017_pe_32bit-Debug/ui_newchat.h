/********************************************************************************
** Form generated from reading UI file 'newchat.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCHAT_H
#define UI_NEWCHAT_H

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

class Ui_NewChat
{
public:
    QFrame *frame;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QToolButton *toolButton;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *NewChat)
    {
        if (NewChat->objectName().isEmpty())
            NewChat->setObjectName("NewChat");
        NewChat->resize(800, 300);
        NewChat->setStyleSheet(QString::fromUtf8("\n"
"QDialog{\n"
"	background-image: url(:/new/prefix1/image/iStock-697020460-scaled.jpg);\n"
"}\n"
"\n"
"\n"
"QToolButton{\n"
"border-radius:60px;\n"
"background-color: rgb(0, 85, 127);\n"
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
"\n"
"QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom: 1px solid #717072\n"
"}"));
        frame = new QFrame(NewChat);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(40, 120, 721, 121));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background:rgba(0,0,0,0.8);\n"
"border-radius:15px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 181, 41));
        label->setStyleSheet(QString::fromUtf8("color:white;\n"
"border-radius:15px;\n"
"font: 900 14pt \"Segoe UI Black\";\n"
""));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(40, 67, 641, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(430, 20, 251, 41));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        toolButton = new QToolButton(NewChat);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(350, 30, 121, 121));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/image/1200px-New_user_icon-01.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(70, 70));
        pushButton = new QPushButton(NewChat);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(750, 20, 31, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"background-color: rgb(170, 0, 0);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/image/7043665.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(30, 30));
        pushButton_2 = new QPushButton(NewChat);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(232, 238, 351, 41));

        retranslateUi(NewChat);

        QMetaObject::connectSlotsByName(NewChat);
    } // setupUi

    void retranslateUi(QDialog *NewChat)
    {
        NewChat->setWindowTitle(QCoreApplication::translate("NewChat", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NewChat", "Username", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("NewChat", "Username", nullptr));
        label_2->setText(QString());
        toolButton->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("NewChat", "Start Chat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewChat: public Ui_NewChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCHAT_H
