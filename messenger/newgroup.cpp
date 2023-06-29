#include "newgroup.h"
#include "ui_newgroup.h"

NewGroup::NewGroup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewGroup)
{
    ui->setupUi(this);
}

NewGroup::~NewGroup()
{
    delete ui;
}


void NewGroup::on_pushButton_clicked()
{
    hide();
}

