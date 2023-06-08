/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signIn
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_14;
    QLineEdit *lineEdit_13;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *lineEdit_7;

    void setupUi(QDialog *signIn)
    {
        if (signIn->objectName().isEmpty())
            signIn->setObjectName("signIn");
        signIn->resize(600, 700);
        signIn->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background-image: url(:/img/image/Coding backgrounds 41.jpg);\n"
"}"));
        label = new QLabel(signIn);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 110, 181, 71));
        label->setStyleSheet(QString::fromUtf8("font: 900 28pt \"Segoe UI Black\";\n"
"color: rgb(0, 85, 0);"));
        pushButton = new QPushButton(signIn);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(250, 580, 141, 41));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(0, 85, 0);\n"
"font: 900 12pt \"Segoe UI Black\";"));
        widget = new QWidget(signIn);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(140, 220, 351, 341));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe Script\";\n"
"color: rgb(0, 85, 0);"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border: black;\n"
"color: rgb(0, 85, 0);\n"
"font: 12pt \"Segoe UI\";"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe Script\";\n"
"color: rgb(0, 85, 0);"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border: black;\n"
"color: rgb(0, 85, 0);\n"
"font: 12pt \"Segoe UI\";"));
        lineEdit_2->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_14 = new QLabel(widget);
        label_14->setObjectName("label_14");
        label_14->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe Script\";\n"
"color: rgb(0, 85, 0);"));

        horizontalLayout_13->addWidget(label_14);

        lineEdit_13 = new QLineEdit(widget);
        lineEdit_13->setObjectName("lineEdit_13");
        lineEdit_13->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border: black;\n"
"color: rgb(0, 85, 0);\n"
"font: 12pt \"Segoe UI\";"));
        lineEdit_13->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        horizontalLayout_13->addWidget(lineEdit_13);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe Script\";\n"
"color: rgb(0, 85, 0);"));

        horizontalLayout_6->addWidget(label_7);

        lineEdit_6 = new QLineEdit(widget);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border: black;\n"
"color: rgb(0, 85, 0);\n"
"font: 12pt \"Segoe UI\";"));

        horizontalLayout_6->addWidget(lineEdit_6);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe Script\";\n"
"color: rgb(0, 85, 0);"));

        horizontalLayout_7->addWidget(label_8);

        lineEdit_7 = new QLineEdit(widget);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border: black;\n"
"color: rgb(0, 85, 0);\n"
"font: 12pt \"Segoe UI\";"));

        horizontalLayout_7->addWidget(lineEdit_7);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(signIn);

        QMetaObject::connectSlotsByName(signIn);
    } // setupUi

    void retranslateUi(QDialog *signIn)
    {
        signIn->setWindowTitle(QCoreApplication::translate("signIn", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("signIn", "Sign In", nullptr));
        pushButton->setText(QCoreApplication::translate("signIn", "Sign In", nullptr));
        label_2->setText(QCoreApplication::translate("signIn", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("signIn", "Password", nullptr));
        label_14->setText(QCoreApplication::translate("signIn", "Confirm ", nullptr));
        label_7->setText(QCoreApplication::translate("signIn", "Name     ", nullptr));
        label_8->setText(QCoreApplication::translate("signIn", "LastName", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signIn: public Ui_signIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
