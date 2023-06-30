/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

class Ui_Login
{
public:
    QFrame *frame;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit_p;
    QPushButton *showPassword;
    QLabel *label_4;
    QToolButton *toolButton;
    QPushButton *pushButton_b;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(800, 600);
        Login->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background:rgba(0,0,0,0.8);\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QDialog{\n"
"	background-image: url(:/new/prefix1/image/R14011_product.webp);\n"
"}\n"
"\n"
"\n"
"QToolButton{\n"
"border-radius:60px;\n"
"	background-color: rgb(0, 170, 255);\n"
"}\n"
"\n"
"QPushButton{\n"
"border-radius:15px;\n"
"background-color: rgb(0, 170, 255);\n"
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
        frame = new QFrame(Login);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(180, 70, 471, 491));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 430, 451, 51));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 70, 151, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"border-radius:15px;\n"
"font: 900 14pt \"Segoe UI Black\";\n"
"background-color:rgba(0,0,0,0)\n"
"}\n"
""));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 240, 151, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"border-radius:15px;\n"
"font: 900 14pt \"Segoe UI Black\";\n"
"background-color:rgba(0,0,0,0)\n"
"}\n"
""));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(20, 280, 371, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 330, 121, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"border-radius:15px;\n"
"font: 900 14pt \"Segoe UI Black\";\n"
"background-color:rgba(0,0,0,0)\n"
"}\n"
""));
        lineEdit_p = new QLineEdit(frame);
        lineEdit_p->setObjectName("lineEdit_p");
        lineEdit_p->setGeometry(QRect(20, 360, 371, 31));
        lineEdit_p->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        lineEdit_p->setEchoMode(QLineEdit::Password);
        showPassword = new QPushButton(frame);
        showPassword->setObjectName("showPassword");
        showPassword->setGeometry(QRect(410, 370, 31, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/image/4779893-200.png"), QSize(), QIcon::Normal, QIcon::Off);
        showPassword->setIcon(icon);
        showPassword->setIconSize(QSize(30, 30));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 120, 291, 41));
        label_4->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"font: 700 9pt \"Segoe UI\";"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        toolButton = new QToolButton(Login);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(350, 0, 121, 121));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/image/Sample_User_Icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);
        toolButton->setIconSize(QSize(70, 70));
        pushButton_b = new QPushButton(Login);
        pushButton_b->setObjectName("pushButton_b");
        pushButton_b->setGeometry(QRect(20, 20, 51, 41));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/image/93634.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_b->setIcon(icon2);
        pushButton_b->setIconSize(QSize(30, 30));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Login", "LogIn", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "LogIn here", nullptr));
        label->setText(QCoreApplication::translate("Login", "Username", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("Login", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Password", nullptr));
        lineEdit_p->setPlaceholderText(QCoreApplication::translate("Login", "Password", nullptr));
        showPassword->setText(QString());
        label_4->setText(QString());
        toolButton->setText(QString());
        pushButton_b->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
