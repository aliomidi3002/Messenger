#include "chatpage.h"
#include "ui_chatpage.h"

Chatpage::Chatpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Chatpage)
{
    ui->setupUi(this);
}

Chatpage::~Chatpage()
{
    delete ui;
}
