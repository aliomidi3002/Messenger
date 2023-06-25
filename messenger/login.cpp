#include "login.h"
#include "ui_login.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    connect(ui->showPassword, SIGNAL(clicked()), this, SLOT(on_pushButton_2_clicked()));
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_2_clicked()
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


void Login::on_pushButton_b_clicked()
{
    close(); // Close the Login dialog
    QWidget* mainWindow = parentWidget();
    if (mainWindow) {
        mainWindow->show(); // Show the main window
    }
}

void Login::on_pushButton_clicked()
{
    QString Username = ui->lineEdit_2->text();
    QString Password = ui->lineEdit_p->text();

    if(Username.isEmpty()){
        ui->label_4->setStyleSheet("color: rgb(255,0, 0);font: 9pt");
        ui->label_4->setText("Enter Your Username");
        return;
    }

    else if(Password.isEmpty()){
        ui->label_4->setStyleSheet("color: rgb(255,0, 0);font: 9pt");
        ui->label_4->setText("Enter Your Password");
        return;
    }

    QString filePath = "C:/Users/nvdom/Desktop/Messenger/messenger/account.txt";
    QFile file(filePath);

    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream stream(&file);

        bool found = false;

        while (!stream.atEnd())
        {
            QString line = stream.readLine();
            QStringList parts = line.split("-");
            if (parts.size() >= 2)
            {
                QString storedUsername = parts[0];
                QString storedPassword = parts[1];

                if (Username == storedUsername && Password == storedPassword)
                {
                    found = true;
                    break;
                }
            }
        }

        file.close();

        if (found)
        {
            hide();
            ChatPage = new Chatpage(this);
            ChatPage->show();
        }
        else
        {
            ui->label_4->setStyleSheet("color: rgb(255, 0, 0);font: 9pt");
            ui->label_4->setText("Username Password Doesn't Exist");
            return;
        }
    }
    else
    {
        QMessageBox::warning(this,"No file","Your file does not exist!");
        return;
    }
}

