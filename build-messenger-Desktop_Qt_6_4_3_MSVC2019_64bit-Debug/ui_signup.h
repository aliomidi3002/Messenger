/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

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
    QLineEdit *lineEdit_fn;
    QLineEdit *lineEdit_ln;
    QLineEdit *lineEdit_u;
    QLineEdit *lineEdit_p;
    QLineEdit *lineEdit_c;
    QPushButton *confirm;
    QPushButton *showPassword;
    QLabel *label_7;
    QPushButton *pushButton_4;
    QToolButton *toolButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_4;

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
        label->setGeometry(QRect(30, 100, 131, 31));
        label->setStyleSheet(QString::fromUtf8("color:white;\n"
"border-radius:15px;\n"
"font: 900 14pt \"Segoe UI Black\";"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 170, 131, 31));
        label_2->setStyleSheet(QString::fromUtf8("color:white;\n"
"border-radius:15px;\n"
"font: 900 14pt \"Segoe UI Black\";"));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 240, 131, 31));
        label_3->setStyleSheet(QString::fromUtf8("color:white;\n"
"border-radius:15px;\n"
"font: 900 14pt \"Segoe UI Black\";"));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 310, 131, 31));
        label_4->setStyleSheet(QString::fromUtf8("color:white;\n"
"border-radius:15px;\n"
"font: 900 14pt \"Segoe UI Black\";"));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 380, 131, 31));
        label_5->setStyleSheet(QString::fromUtf8("color:white;\n"
"border-radius:15px;\n"
"font: 900 14pt \"Segoe UI Black\";"));
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(180, 70, 161, 31));
        label_6->setStyleSheet(QString::fromUtf8("color:white;\n"
"border-radius:15px;\n"
"font: 900 14pt \"Segoe UI Black\";"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 460, 471, 41));
        lineEdit_fn = new QLineEdit(frame);
        lineEdit_fn->setObjectName("lineEdit_fn");
        lineEdit_fn->setGeometry(QRect(30, 130, 391, 31));
        lineEdit_fn->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        lineEdit_ln = new QLineEdit(frame);
        lineEdit_ln->setObjectName("lineEdit_ln");
        lineEdit_ln->setGeometry(QRect(30, 200, 391, 31));
        lineEdit_ln->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        lineEdit_u = new QLineEdit(frame);
        lineEdit_u->setObjectName("lineEdit_u");
        lineEdit_u->setGeometry(QRect(30, 270, 391, 31));
        lineEdit_u->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        lineEdit_p = new QLineEdit(frame);
        lineEdit_p->setObjectName("lineEdit_p");
        lineEdit_p->setGeometry(QRect(30, 340, 391, 31));
        lineEdit_p->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        lineEdit_p->setEchoMode(QLineEdit::Password);
        lineEdit_c = new QLineEdit(frame);
        lineEdit_c->setObjectName("lineEdit_c");
        lineEdit_c->setGeometry(QRect(30, 410, 391, 31));
        lineEdit_c->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        lineEdit_c->setEchoMode(QLineEdit::Password);
        confirm = new QPushButton(frame);
        confirm->setObjectName("confirm");
        confirm->setGeometry(QRect(440, 410, 31, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/image/4779893-200.png"), QSize(), QIcon::Normal, QIcon::Off);
        confirm->setIcon(icon);
        confirm->setIconSize(QSize(30, 30));
        showPassword = new QPushButton(frame);
        showPassword->setObjectName("showPassword");
        showPassword->setGeometry(QRect(440, 340, 31, 31));
        showPassword->setIcon(icon);
        showPassword->setIconSize(QSize(30, 30));
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(160, 110, 311, 31));
        label_7->setStyleSheet(QString::fromUtf8(""));
        pushButton_4 = new QPushButton(signUp);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 20, 51, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/image/93634.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(30, 30));
        toolButton = new QToolButton(signUp);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(350, 10, 121, 121));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/image/Sample_User_Icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon2);
        toolButton->setIconSize(QSize(70, 70));
        widget = new QWidget(signUp);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget1 = new QWidget(signUp);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget2 = new QWidget(signUp);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_4 = new QHBoxLayout(widget2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);

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
        lineEdit_fn->setPlaceholderText(QCoreApplication::translate("signUp", "First Name", nullptr));
        lineEdit_ln->setPlaceholderText(QCoreApplication::translate("signUp", "Last Name", nullptr));
        lineEdit_u->setPlaceholderText(QCoreApplication::translate("signUp", "Username", nullptr));
        lineEdit_p->setPlaceholderText(QCoreApplication::translate("signUp", "Password", nullptr));
        lineEdit_c->setPlaceholderText(QCoreApplication::translate("signUp", "confirm", nullptr));
        confirm->setText(QString());
        showPassword->setText(QString());
        label_7->setText(QString());
        pushButton_4->setText(QString());
        toolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signUp: public Ui_signUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H