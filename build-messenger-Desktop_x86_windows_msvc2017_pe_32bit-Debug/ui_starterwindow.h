/********************************************************************************
** Form generated from reading UI file 'starterwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTERWINDOW_H
#define UI_STARTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_starterWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *starterWindow)
    {
        if (starterWindow->objectName().isEmpty())
            starterWindow->setObjectName("starterWindow");
        starterWindow->resize(1200, 800);
        centralwidget = new QWidget(starterWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 28pt \"Segoe UI\";\n"
"color:black;"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color:black"));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setMargin(0);

        verticalLayout->addWidget(label_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        starterWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(starterWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 25));
        starterWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(starterWindow);
        statusbar->setObjectName("statusbar");
        starterWindow->setStatusBar(statusbar);

        retranslateUi(starterWindow);

        QMetaObject::connectSlotsByName(starterWindow);
    } // setupUi

    void retranslateUi(QMainWindow *starterWindow)
    {
        starterWindow->setWindowTitle(QCoreApplication::translate("starterWindow", "starterWindow", nullptr));
        label->setText(QCoreApplication::translate("starterWindow", "welcome", nullptr));
        label_2->setText(QCoreApplication::translate("starterWindow", "sign up or login", nullptr));
        pushButton->setText(QCoreApplication::translate("starterWindow", "SignUp", nullptr));
        pushButton_2->setText(QCoreApplication::translate("starterWindow", "LogIn", nullptr));
    } // retranslateUi

};

namespace Ui {
    class starterWindow: public Ui_starterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTERWINDOW_H
