#include "newchat.h"
#include "ui_newchat.h"

NewChat::NewChat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewChat)
{
    ui->setupUi(this);
}

NewChat::~NewChat()
{
    delete ui;
}

void NewChat::on_pushButton_clicked()
{
    hide();
}


void NewChat::on_pushButton_2_clicked()
{
    QString username = ui->lineEdit->text();

    if(username == nullptr){
        ui->label_2->setStyleSheet("color:red;");
        ui->label_2->setText("Username Is Empty");
        return;
    }

    // function for finding username;

}

