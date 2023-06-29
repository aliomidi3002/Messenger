#include "newchat.h"
#include "ui_newchat.h"
QString sendmessageuser_chat_to_server(QString token,QString dst , QString body);
NewChat::NewChat(QWidget *parent, const QString& token)
    : QDialog(parent), ui(new Ui::NewChat), m_token(token)
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

    if (username.isEmpty()) {
        ui->label_2->setStyleSheet("color: red;");
        ui->label_2->setText("Username Is Empty");
        return;
    }

    QString t = "hi";
    QString temp = sendmessageuser_chat_to_server(m_token, username, t);
    hide();
    return;
}

