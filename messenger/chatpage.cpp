#include "chatpage.h"
#include "ui_chatpage.h"
#include "ID.h"

Chatpage::Chatpage(QWidget *parent, const userID& currentUser) :
    QDialog(parent),
    ui(new Ui::Chatpage),
    mCurrentUser(currentUser)
{
    ui->setupUi(this);

    QString username = QString::fromStdString(currentUser.getUsername());
    QString password = QString::fromStdString(currentUser.getPassword());
    QString firstName = QString::fromStdString(currentUser.getFirstName());
    QString lastName = QString::fromStdString(currentUser.getLastName());

    ui->label->setText(username);
}

Chatpage::~Chatpage()
{
    delete ui;
}
