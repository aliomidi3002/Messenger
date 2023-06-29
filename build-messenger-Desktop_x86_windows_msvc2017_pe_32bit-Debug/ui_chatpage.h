/********************************************************************************
** Form generated from reading UI file 'chatpage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATPAGE_H
#define UI_CHATPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chatpage
{
public:
    QFrame *frame;
    QToolButton *toolButton;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QToolButton *toolButton_5;
    QListWidget *listWidget_2;
    QWidget *tab_2;
    QToolButton *toolButton_3;
    QListWidget *listWidget_4;
    QWidget *tab_3;
    QToolButton *toolButton_4;
    QListWidget *listWidget_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QToolButton *toolButton_2;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *Chatpage)
    {
        if (Chatpage->objectName().isEmpty())
            Chatpage->setObjectName("Chatpage");
        Chatpage->resize(1200, 600);
        Chatpage->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background-image: url(:/new/prefix1/image/iStock-697020460-scaled.jpg);\n"
"}\n"
"\n"
"QPushButton{\n"
"border-radius:15px;\n"
"background-color: rgb(0, 85, 127);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(0, 0, 127);\n"
"}\n"
"\n"
"QFrame{\n"
"border-bottom: 2x solid #717072;\n"
"background-color: rgba(0,0,0,0.8);\n"
"}\n"
"\n"
""));
        frame = new QFrame(Chatpage);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 10, 321, 571));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        toolButton = new QToolButton(frame);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(10, 10, 41, 41));
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"border-radius:30px;\n"
"border: 2px solid #717072;;\n"
"background-color: rgb(0, 85, 127);\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"background-color: rgb(0, 0, 127);\n"
"}\n"
"\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/image/Sample_User_Icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(50, 50));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 10, 251, 41));
        label->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgba(0,0,0,0.5);\n"
"border: 2px solid #717072;;\n"
"font: 700 12pt \"Segoe UI\";\n"
""));
        label->setAlignment(Qt::AlignCenter);
        tabWidget = new QTabWidget(frame);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(-6, 59, 331, 521));
        tabWidget->setFocusPolicy(Qt::TabFocus);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName("tab");
        toolButton_5 = new QToolButton(tab);
        toolButton_5->setObjectName("toolButton_5");
        toolButton_5->setGeometry(QRect(10, 10, 41, 41));
        toolButton_5->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"border-radius:30px;\n"
"border: 2px solid #717072;;\n"
"background-color: rgb(0, 85, 127);\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"background-color: rgb(0, 0, 127);\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/image/1200px-New_user_icon-01.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_5->setIcon(icon1);
        toolButton_5->setIconSize(QSize(50, 50));
        listWidget_2 = new QListWidget(tab);
        listWidget_2->setObjectName("listWidget_2");
        listWidget_2->setGeometry(QRect(20, 60, 291, 411));
        listWidget_2->setStyleSheet(QString::fromUtf8("color:red;"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        toolButton_3 = new QToolButton(tab_2);
        toolButton_3->setObjectName("toolButton_3");
        toolButton_3->setGeometry(QRect(10, 10, 41, 41));
        toolButton_3->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"border-radius:30px;\n"
"border: 2px solid #717072;;\n"
"background-color: rgb(0, 85, 127);\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"background-color: rgb(0, 0, 127);\n"
"}\n"
"\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/image/img_76872.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon2);
        toolButton_3->setIconSize(QSize(50, 50));
        listWidget_4 = new QListWidget(tab_2);
        listWidget_4->setObjectName("listWidget_4");
        listWidget_4->setGeometry(QRect(20, 60, 291, 411));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        toolButton_4 = new QToolButton(tab_3);
        toolButton_4->setObjectName("toolButton_4");
        toolButton_4->setGeometry(QRect(10, 10, 41, 41));
        toolButton_4->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"border-radius:30px;\n"
"border: 2px solid #717072;;\n"
"background-color: rgb(0, 85, 127);\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"background-color: rgb(0, 0, 127);\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/image/img_12531.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_4->setIcon(icon3);
        toolButton_4->setIconSize(QSize(50, 50));
        listWidget_3 = new QListWidget(tab_3);
        listWidget_3->setObjectName("listWidget_3");
        listWidget_3->setGeometry(QRect(20, 60, 291, 411));
        tabWidget->addTab(tab_3, QString());
        pushButton_3 = new QPushButton(Chatpage);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(1110, 510, 31, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:  rgb(255, 255, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(170, 170, 0);\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/image/1500458.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon4);
        pushButton_3->setIconSize(QSize(25, 25));
        pushButton_4 = new QPushButton(Chatpage);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(1150, 510, 31, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(170, 0, 255);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(85, 0, 127);\n"
"}\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/image/clip-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon5);
        pushButton_4->setIconSize(QSize(25, 25));
        toolButton_2 = new QToolButton(Chatpage);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setGeometry(QRect(350, 20, 51, 51));
        toolButton_2->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"border: 2px solid #717072;;\n"
"background-color: rgb(0, 85, 127);\n"
"\n"
"\n"
""));
        toolButton_2->setIcon(icon);
        toolButton_2->setIconSize(QSize(40, 40));
        label_2 = new QLabel(Chatpage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(410, 20, 201, 51));
        label_2->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgba(0,0,0,0.5);\n"
"border: 2px solid #717072;;\n"
"font: 700 12pt \"Segoe UI\";\n"
""));
        label_2->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(Chatpage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1070, 510, 31, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("hover{ background-color: rgb(0, 170, 255);}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/image/send_circle_icon_136236.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon6);
        pushButton_2->setIconSize(QSize(30, 30));
        textEdit = new QTextEdit(Chatpage);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(350, 480, 701, 101));
        textEdit->setStyleSheet(QString::fromUtf8("color:white;\n"
"border-radius:20px;\n"
"background-color: rgb(0, 0, 36);\n"
"border: 2px solid #717072;;\n"
""));
        listWidget = new QListWidget(Chatpage);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(345, 81, 831, 381));
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"background-color: rgba(0,0,0,0.8);\n"
"border-radius:15px;\n"
"}\n"
""));
        pushButton = new QPushButton(Chatpage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(1140, 20, 31, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/image/7043665.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon7);
        pushButton->setIconSize(QSize(30, 30));

        retranslateUi(Chatpage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Chatpage);
    } // setupUi

    void retranslateUi(QDialog *Chatpage)
    {
        Chatpage->setWindowTitle(QCoreApplication::translate("Chatpage", "Dialog", nullptr));
        toolButton->setText(QString());
        label->setText(QString());
        toolButton_5->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Chatpage", "Chat", nullptr));
        toolButton_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Chatpage", "Group", nullptr));
        toolButton_4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Chatpage", "Channel", nullptr));
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        toolButton_2->setText(QString());
        label_2->setText(QCoreApplication::translate("Chatpage", "Username", nullptr));
        pushButton_2->setText(QString());
        textEdit->setPlaceholderText(QCoreApplication::translate("Chatpage", "Write a message...", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Chatpage: public Ui_Chatpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATPAGE_H
