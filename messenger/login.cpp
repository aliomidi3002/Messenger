#include "login.h"
#include "ui_login.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "ID.h"


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

    userID currentUser;

    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream stream(&file);

        bool found = false;

        while (!stream.atEnd())
        {
            QString line = stream.readLine();
            QStringList parts = line.split("-");
            if (parts.size() >= 4)
            {
                QString storedUsername = parts[0];
                QString storedPassword = parts[1];
                QString storedFirstName = parts[2];
                QString storedLastName = parts[3];

                if (Username == storedUsername && Password == storedPassword)
                {
                    found = true;
                    std::string username = storedUsername.toStdString();
                    std::string password = storedPassword.toStdString();
                    std::string firstName = storedFirstName.toStdString();
                    std::string lastName = storedLastName.toStdString();
                    currentUser = userID(username, password, firstName, lastName);
                    break;
                }
            }
        }

        file.close();

        if (found)
        {
            hide();
            Chatpage* chatPage = new Chatpage(this, currentUser);
            chatPage->show();
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

