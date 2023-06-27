#include "chatpage.h"
#include "ui_chatpage.h"
#include "ID.h"

Chatpage::Chatpage(QWidget *parent, const userID& currentUser) :
    QDialog(parent),
    ui(new Ui::Chatpage),
    mCurrentUser(currentUser)
{
    ui->setupUi(this);

    QString username = currentUser.getUsername();
    QString password = currentUser.getPassword();

    ui->label->setText(username);
}

Chatpage::~Chatpage()
{
    delete ui;
}
