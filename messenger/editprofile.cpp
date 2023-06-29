#include "editprofile.h"
#include "ui_editprofile.h"

EditProfile::EditProfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditProfile)
{
    ui->setupUi(this);
}

EditProfile::~EditProfile()
{
    delete ui;
}


void EditProfile::on_pushButton_3_clicked()
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


void EditProfile::on_pushButton_4_clicked()
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

