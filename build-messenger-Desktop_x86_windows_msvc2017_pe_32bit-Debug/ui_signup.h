/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

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

class Ui_signUp
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_p;
    QLineEdit *lineEdit_c;
    QPushButton *confirm;
    QPushButton *showPassword;
    QToolButton *toolButton;
    QPushButton *pushButton_4;

    void setupUi(QDialog *signUp)
    {
        if (signUp->objectName().isEmpty())
            signUp->setObjectName("signUp");
        signUp->resize(800, 600);
        signUp->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background-image: url(:/new/prefix1/image/iStock-697020460-scaled.jpg);\n"
"}\n"
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
"QLabel{\n"
"color:white;\n"
"border-radius:15px;\n"
"font: 900 14pt \"Segoe UI Black\";\n"
"}\n"
"\n"
"\n"
"QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom: 1px solid #717072\n"
"}"));
        frame = new QFrame(signUp);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(160, 70, 491, 511));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 110, 131, 31));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 180, 131, 31));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 250, 131, 31));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 310, 131, 31));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 380, 131, 31));
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(170, 70, 161, 31));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 460, 471, 41));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 150, 391, 16));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(30, 210, 391, 21));
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(30, 280, 391, 21));
        lineEdit_p = new QLineEdit(frame);
        lineEdit_p->setObjectName("lineEdit_p");
        lineEdit_p->setGeometry(QRect(30, 350, 391, 16));
        lineEdit_p->setEchoMode(QLineEdit::Password);
        lineEdit_c = new QLineEdit(frame);
        lineEdit_c->setObjectName("lineEdit_c");
        lineEdit_c->setGeometry(QRect(30, 420, 391, 16));
        lineEdit_c->setEchoMode(QLineEdit::Password);
        confirm = new QPushButton(frame);
        confirm->setObjectName("confirm");
        confirm->setGeometry(QRect(430, 420, 31, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/image/4779893-200.png"), QSize(), QIcon::Normal, QIcon::Off);
        confirm->setIcon(icon);
        confirm->setIconSize(QSize(30, 30));
        showPassword = new QPushButton(frame);
        showPassword->setObjectName("showPassword");
        showPassword->setGeometry(QRect(430, 350, 31, 31));
        showPassword->setIcon(icon);
        showPassword->setIconSize(QSize(30, 30));
        toolButton = new QToolButton(signUp);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(340, 10, 121, 121));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/image/Sample_User_Icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);
        toolButton->setIconSize(QSize(70, 70));
        pushButton_4 = new QPushButton(signUp);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 20, 51, 41));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/image/93634.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon2);
        pushButton_4->setIconSize(QSize(30, 30));

        retranslateUi(signUp);

        QMetaObject::connectSlotsByName(signUp);
    } // setupUi

    void retranslateUi(QDialog *signUp)
    {
        signUp->setWindowTitle(QCoreApplication::translate("signUp", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("signUp", "First Name", nullptr));
        label_2->setText(QCoreApplication::translate("signUp", "Last Name", nullptr));
        label_3->setText(QCoreApplication::translate("signUp", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("signUp", "Password", nullptr));
        label_5->setText(QCoreApplication::translate("signUp", "Confirm", nullptr));
        label_6->setText(QCoreApplication::translate("signUp", "SignUP here", nullptr));
        pushButton->setText(QCoreApplication::translate("signUp", "SignUp", nullptr));
        confirm->setText(QString());
        showPassword->setText(QString());
        toolButton->setText(QString());
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signUp: public Ui_signUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
