#include "newchannel.h"
#include "ui_newchannel.h"

NewChannel::NewChannel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewChannel)
{
    ui->setupUi(this);
}

NewChannel::~NewChannel()
{
    delete ui;
}


void NewChannel::on_pushButton_clicked()
{
    hide();
}

