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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QToolButton *toolButton_2;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QToolButton *toolButton_5;
    QListWidget *listWidget_2;
    QLineEdit *lineEdit;
    QWidget *tab_2;
    QToolButton *toolButton_3;
    QListWidget *listWidget_4;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_7;
    QWidget *tab_3;
    QToolButton *toolButton_4;
    QListWidget *listWidget_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_6;
    QLabel *label;
    QToolButton *toolButton;
    QListWidget *listWidget_5;
    QPushButton *pushButton_8;

    void setupUi(QDialog *Chatpage)
    {
        if (Chatpage->objectName().isEmpty())
            Chatpage->setObjectName("Chatpage");
        Chatpage->resize(1200, 600);
        Chatpage->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-image: url(:/new/prefix1/image/Qvqz7n.jpg);\n"
"}\n"
"\n"
"QPushButton{\n"
"border-radius:15px;\n"
"	background-color: rgb(0, 170, 255);\n"
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
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/image/1500458.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon);
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/image/clip-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(25, 25));
        toolButton_2 = new QToolButton(Chatpage);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setGeometry(QRect(350, 10, 51, 51));
        toolButton_2->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(0, 170, 255);\n"
"border: 2px solid #717072;\n"
"\n"
"\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/image/Sample_User_Icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon2);
        toolButton_2->setIconSize(QSize(40, 40));
        label_2 = new QLabel(Chatpage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(410, 10, 201, 51));
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
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/image/send_circle_icon_136236.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon3);
        pushButton_2->setIconSize(QSize(30, 30));
        textEdit = new QTextEdit(Chatpage);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(350, 480, 701, 101));
        textEdit->setStyleSheet(QString::fromUtf8("color:white;\n"
"border-radius:20px;\n"
"border: 2px solid #717072;;\n"
"background-color:rgba(0,0,0,0.6)\n"
""));
        listWidget = new QListWidget(Chatpage);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(345, 81, 831, 381));
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"	font: 10pt \"Segoe UI\";\n"
"background-color: rgba(0,0,0,0.6);\n"
"border-radius:15px;\n"
"}\n"
""));
        pushButton = new QPushButton(Chatpage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(1140, 20, 31, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(170, 0, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/image/7043665.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(25, 25));
        pushButton_5 = new QPushButton(Chatpage);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(660, 20, 41, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        tabWidget = new QTabWidget(Chatpage);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 60, 341, 521));
        tabWidget->setFocusPolicy(Qt::TabFocus);
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);"));
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName("tab");
        toolButton_5 = new QToolButton(tab);
        toolButton_5->setObjectName("toolButton_5");
        toolButton_5->setGeometry(QRect(10, 10, 41, 41));
        toolButton_5->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"border-radius:30px;\n"
"border: 2px solid #717072;;\n"
"	background-color: rgb(0, 170, 255);\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"background-color: rgb(0, 0, 127);\n"
"}\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/image/1200px-New_user_icon-01.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_5->setIcon(icon5);
        toolButton_5->setIconSize(QSize(50, 50));
        listWidget_2 = new QListWidget(tab);
        listWidget_2->setObjectName("listWidget_2");
        listWidget_2->setGeometry(QRect(10, 60, 311, 411));
        listWidget_2->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"background-color: rgba(0,0,0,0.6);\n"
"border-radius:15px;\n"
"font: 700 18pt \"Segoe UI\";\n"
"\n"
"}\n"
"QListWidget::item {\n"
"border-radius:20px;\n"
"background-color:rgba(0,0,0,0.5);\n"
"border: 2px solid #717072;\n"
"color:white;\n"
"}\n"
"\n"
"QListWidget::item:selected {\n"
"background-color: rgb(0, 85, 127);\n"
"}"));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(60, 17, 261, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0.6);\n"
"border-radius:15px;"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        toolButton_3 = new QToolButton(tab_2);
        toolButton_3->setObjectName("toolButton_3");
        toolButton_3->setGeometry(QRect(10, 10, 41, 41));
        toolButton_3->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"border-radius:30px;\n"
"border: 2px solid #717072;;\n"
"	background-color: rgb(0, 170, 255);\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"background-color: rgb(0, 0, 127);\n"
"}\n"
"\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/image/img_76872.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon6);
        toolButton_3->setIconSize(QSize(50, 50));
        listWidget_4 = new QListWidget(tab_2);
        listWidget_4->setObjectName("listWidget_4");
        listWidget_4->setGeometry(QRect(10, 60, 311, 411));
        listWidget_4->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0.6);\n"
"border-radius:15px;\n"
"font: 700 18pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_3 = new QLineEdit(tab_2);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(60, 17, 211, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0.6);\n"
"border-radius:15px;"));
        pushButton_7 = new QPushButton(tab_2);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(280, 10, 41, 41));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:30px;\n"
"border: 2px solid #717072;;\n"
"	background-color: rgb(0, 170, 255);\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(0, 0, 127);\n"
"}\n"
""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/image/search-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon7);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        toolButton_4 = new QToolButton(tab_3);
        toolButton_4->setObjectName("toolButton_4");
        toolButton_4->setGeometry(QRect(10, 10, 41, 41));
        toolButton_4->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"border-radius:30px;\n"
"border: 2px solid #717072;;\n"
"	background-color: rgb(0, 170, 255);\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"background-color: rgb(0, 0, 127);\n"
"}\n"
""));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix1/image/img_12531.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_4->setIcon(icon8);
        toolButton_4->setIconSize(QSize(50, 50));
        listWidget_3 = new QListWidget(tab_3);
        listWidget_3->setObjectName("listWidget_3");
        listWidget_3->setGeometry(QRect(10, 60, 311, 411));
        listWidget_3->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0.6);\n"
"border-radius:15px;\n"
"font: 700 18pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_2 = new QLineEdit(tab_3);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(60, 17, 211, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0.6);\n"
"border-radius:15px;"));
        pushButton_6 = new QPushButton(tab_3);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(280, 10, 41, 41));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:30px;\n"
"border: 2px solid #717072;;\n"
"	background-color: rgb(0, 170, 255);\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(0, 0, 127);\n"
"}\n"
""));
        pushButton_6->setIcon(icon7);
        tabWidget->addTab(tab_3, QString());
        label = new QLabel(Chatpage);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 10, 251, 41));
        label->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgba(0,0,0,0.5);\n"
"border: 2px solid #717072;\n"
"font: 700 12pt \"Segoe UI\";\n"
""));
        label->setAlignment(Qt::AlignCenter);
        toolButton = new QToolButton(Chatpage);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(10, 10, 41, 41));
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"border-radius:30px;\n"
"border: 2px solid #717072;;\n"
"	background-color: rgb(0, 170, 255);\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"background-color: rgb(0, 0, 127);\n"
"}\n"
"\n"
""));
        toolButton->setIcon(icon2);
        toolButton->setIconSize(QSize(50, 50));
        listWidget_5 = new QListWidget(Chatpage);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/prefix1/image/5-2-face-with-tears-of-joy-emoji-png-thumb.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget_5);
        __qlistwidgetitem->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem->setIcon(icon9);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/prefix1/image/11-2-loudly-crying-emoji-png-thumb.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget_5);
        __qlistwidgetitem1->setIcon(icon10);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/prefix1/image/1-2-wink-emoji-png-thumb.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget_5);
        __qlistwidgetitem2->setIcon(icon11);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/new/prefix1/image/3-2-love-hearts-eyes-emoji-png-thumb.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget_5);
        __qlistwidgetitem3->setIcon(icon12);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/new/prefix1/image/4-2-smiling-face-with-sunglasses-cool-emoji-png-thumb.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget_5);
        __qlistwidgetitem4->setIcon(icon13);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/new/prefix1/image/6-2-angel-blushing-smile-emoji-png-thumb.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget_5);
        __qlistwidgetitem5->setIcon(icon14);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/new/prefix1/image/8-2-fearful-emoji-png-thumb.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget_5);
        __qlistwidgetitem6->setIcon(icon15);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/new/prefix1/image/58685-apple-color-symbol-fire-shape-iphone-emoji-thumb.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listWidget_5);
        __qlistwidgetitem7->setIcon(icon16);
        listWidget_5->setObjectName("listWidget_5");
        listWidget_5->setGeometry(QRect(1100, 230, 81, 261));
        listWidget_5->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"background-color: rgba(0,0,0,0.6);\n"
"border-radius:15px;\n"
"font: 700 18pt \"Segoe UI\";\n"
"\n"
"}\n"
"QListWidget::item {\n"
"border-radius:20px;\n"
"background-color:rgba(0,0,0,0.5);\n"
"color:white;\n"
"}\n"
"\n"
"QListWidget::item:selected {\n"
"border: 2px solid #717072;\n"
"}"));
        pushButton_8 = new QPushButton(Chatpage);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(1100, 20, 31, 31));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(135, 45, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 85, 0);\n"
"}\n"
""));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/new/prefix1/image/126467.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon17);
        pushButton_8->setIconSize(QSize(25, 25));

        retranslateUi(Chatpage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Chatpage);
    } // setupUi

    void retranslateUi(QDialog *Chatpage)
    {
        Chatpage->setWindowTitle(QCoreApplication::translate("Chatpage", "Dialog", nullptr));
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        toolButton_2->setText(QString());
        label_2->setText(QString());
        pushButton_2->setText(QString());
        textEdit->setPlaceholderText(QCoreApplication::translate("Chatpage", "Write a message...", nullptr));
        pushButton->setText(QString());
        pushButton_5->setText(QString());
        toolButton_5->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("Chatpage", "Find Users...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Chatpage", "Chat", nullptr));
        toolButton_3->setText(QString());
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("Chatpage", "Create Or Find Group...", nullptr));
        pushButton_7->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Chatpage", "Group", nullptr));
        toolButton_4->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("Chatpage", "Create Or Find Channel....", nullptr));
        pushButton_6->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Chatpage", "Channel", nullptr));
        label->setText(QString());
        toolButton->setText(QString());

        const bool __sortingEnabled = listWidget_5->isSortingEnabled();
        listWidget_5->setSortingEnabled(false);
        listWidget_5->setSortingEnabled(__sortingEnabled);

        pushButton_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Chatpage: public Ui_Chatpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATPAGE_H
