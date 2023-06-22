#include "signup.h"
#include "ui_signup.h"

signUp::signUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signUp)
{
    ui->setupUi(this);
}

signUp::~signUp()
{
    delete ui;
}




void signUp::on_showPassword_clicked()
{
    if (ui->lineEdit_p->echoMode() == QLineEdit::Password)
    {
        ui->lineEdit_p->setEchoMode(QLineEdit::Normal);
        ui->showPassword->setStyleSheet("background-color: rgb(0, 0, 127);");
    }
    else
    {
        ui->lineEdit_p->setEchoMode(QLineEdit::Password);
        ui->showPassword->setStyleSheet("background-color: rgb(0, 85, 127);");
    }
}








void signUp::on_confirm_clicked()
{
    if (ui->lineEdit_c->echoMode() == QLineEdit::Password)
    {
        ui->lineEdit_c->setEchoMode(QLineEdit::Normal);
        ui->confirm->setStyleSheet("background-color: rgb(0, 0, 127);");
    }
    else
    {
        ui->lineEdit_c->setEchoMode(QLineEdit::Password);
        ui->confirm->setStyleSheet("background-color: rgb(0, 85, 127);");
    }
}

