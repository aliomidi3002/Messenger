#include "logout.h"
#include "ui_logout.h"
#include <QMessageBox>
#include "mainwindow.h"

LogOut::LogOut(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogOut)
{
    ui->setupUi(this);
}

LogOut::~LogOut()
{
    delete ui;
}

void LogOut::on_pushButton_3_clicked()
{
    if (ui->lineEdit_2->echoMode() == QLineEdit::Password)
    {
        ui->lineEdit_2->setEchoMode(QLineEdit::Normal);
        ui->pushButton_3->setStyleSheet("background-color: rgb(0, 0, 127);");
    }
    else
    {
        ui->lineEdit_2->setEchoMode(QLineEdit::Password);
        ui->pushButton_3->setStyleSheet("background-color: rgb(0, 85, 127);");
    }
}


void LogOut::on_pushButton_4_clicked()
{
    if (ui->lineEdit_3->echoMode() == QLineEdit::Password)
    {
        ui->lineEdit_3->setEchoMode(QLineEdit::Normal);
        ui->pushButton_4->setStyleSheet("background-color: rgb(0, 0, 127);");
    }
    else
    {
        ui->lineEdit_3->setEchoMode(QLineEdit::Password);
        ui->pushButton_4->setStyleSheet("background-color: rgb(0, 85, 127);");
    }
}



void LogOut::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton replay = QMessageBox::question(this , "Log out " , "Are you sure you want to exit?" , QMessageBox::Yes | QMessageBox::No);

    if (replay == QMessageBox::Yes){
        hide();
        MainWindow * main;
        main = new MainWindow(this);
        main->show();
    }
    else
        return;

}

