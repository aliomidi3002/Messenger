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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chatpage
{
public:
    QTextEdit *textEdit;
    QFrame *frame;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QToolButton *toolButton;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollBar *verticalScrollBar;
    QToolButton *toolButton_2;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;

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
"	background-color: rgb(60, 60, 90);\n"
"}\n"
"\n"
"QToolButton{\n"
"background-color: rgb(0, 85, 127);\n"
"border-radius:30px;\n"
"}\n"
"\n"
"QFrame{\n"
"border-bottom: 2x solid #717072;\n"
"background-color: rgba(0,0,0,0.8);\n"
"}\n"
"\n"
""));
        textEdit = new QTextEdit(Chatpage);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(340, 70, 851, 461));
        textEdit->setStyleSheet(QString::fromUtf8("border-radius:60px;\n"
"border: 2px solid #717072;;"));
        frame = new QFrame(Chatpage);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 331, 591));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 31, 31));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:15px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/image/76716.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(20, 20));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 50, 31, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-radius:15px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/image/search-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        toolButton = new QToolButton(frame);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(50, 10, 71, 71));
        toolButton->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"border: 2px solid #717072;;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/image/Sample_User_Icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon2);
        toolButton->setIconSize(QSize(50, 50));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 20, 191, 61));
        label->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgba(0,0,0,0.5);\n"
"border: 2px solid #717072;;\n"
"font: 700 12pt \"Segoe UI\";\n"
""));
        label->setAlignment(Qt::AlignCenter);
        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 100, 311, 481));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 77, 77);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 309, 479));
        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setGeometry(QRect(290, 0, 20, 481));
        verticalScrollBar->setStyleSheet(QString::fromUtf8("background-color: rgb(79, 79, 79);"));
        verticalScrollBar->setOrientation(Qt::Vertical);
        scrollArea->setWidget(scrollAreaWidgetContents);
        toolButton_2 = new QToolButton(Chatpage);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setGeometry(QRect(350, 10, 51, 51));
        toolButton_2->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"border: 2px solid #717072;;\n"
""));
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
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton_3 = new QPushButton(Chatpage);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(1110, 540, 31, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(95, 95, 95);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/image/1500458.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(30, 30));
        pushButton_4 = new QPushButton(Chatpage);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(1150, 540, 31, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(95, 95, 95);"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/image/clip-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon4);
        pushButton_4->setIconSize(QSize(30, 30));
        lineEdit = new QLineEdit(Chatpage);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(340, 540, 761, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"border: 2px solid #717072;;\n"
"background-color: rgba(0,0,0,0.8);"));

        retranslateUi(Chatpage);

        QMetaObject::connectSlotsByName(Chatpage);
    } // setupUi

    void retranslateUi(QDialog *Chatpage)
    {
        Chatpage->setWindowTitle(QCoreApplication::translate("Chatpage", "Dialog", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Chatpage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        toolButton->setText(QString());
        label->setText(QCoreApplication::translate("Chatpage", "Username", nullptr));
        toolButton_2->setText(QString());
        label_2->setText(QCoreApplication::translate("Chatpage", "Username", nullptr));
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("Chatpage", "write a message...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chatpage: public Ui_Chatpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATPAGE_H
