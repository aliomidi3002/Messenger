#include "signup.h"
#include "ui_signup.h"
#include <QFile>
#include <QTextStream>
#include "ID.h

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

// turn back to main window
void signUp::on_pushButton_4_clicked()
{
    close(); // Close the signUp dialog
    QWidget* mainWindow = parentWidget();
    if (mainWindow) {
        mainWindow->show(); // Show the main window
    }
}



// sign up button
void signUp::on_pushButton_clicked()
{
    QString FirstName = ui->lineEdit_fn->text();
    QString LastName  = ui->lineEdit_ln->text();
    QString Username  = ui->lineEdit_u->text();
    QString Password  = ui->lineEdit_p->text();
    QString Confirm   = ui->lineEdit_c->text();

    if(FirstName.size()< 3){
        ui->label_7->setStyleSheet("color: rgb(255, 0, 0);font: 9pt;");
        ui->label_7->setText("First Name Must Be More Than 3 Characters");
        return;
    }

    if(LastName.size()< 3){
        ui->label_7->setStyleSheet("color: rgb(255, 0, 0);font: 9pt");
        ui->label_7->setText("Last Name Must Be More Than 3 Characters");
        return;
    }

    if(Username.size()<= 4){
        ui->label_7->setStyleSheet("color: rgb(255, 0, 0);font: 9pt");
        ui->label_7->setText("Username Must Be More Than 4 Characters");
        return;
    }

    if(Password.size()<= 4){
        ui->label_7->setStyleSheet("color: rgb(255, 0, 0);font: 9pt");
        ui->label_7->setText("Password Must Be More Than 4 Characters");
        return;
    }


    if (FirstName.isEmpty()) {
        ui->label_7->setStyleSheet("color: rgb(255, 0, 0);font: 9pt");
        ui->label_7->setText("Enter Your First Name");
        return;
    }

    else if (LastName.isEmpty()) {
        ui->label_7->setStyleSheet("color: rgb(255, 0, 0);font: 9pt");
        ui->label_7->setText("Enter Your Last Name");
        return;
    }

    else if (Username.isEmpty()) {
        ui->label_7->setStyleSheet("color: rgb(255, 0, 0);font: 9pt");
        ui->label_7->setText("Enter Your Username");
        return;
    }


    else if (Password.isEmpty()) {
        ui->label_7->setStyleSheet("color: rgb(255, 0, 0);font: 9pt");
        ui->label_7->setText("Enter Your Password");
        return;
    }


    else if (Confirm.isEmpty()) {
        ui->label_7->setStyleSheet("color: rgb(255, 0, 0);font: 9pt");
        ui->label_7->setText("Confirm Your Password");
        return;
    }

    else if (Confirm != Password){
        ui->label_7->setStyleSheet("color: rgb(255, 0, 0);font: 9pt");
        ui->label_7->setText("Confirm Your Password Correctly");
        return;
    }


    QString filePath = "C:/Users/nvdom/Desktop/Messenger/messenger/account.txt";
    QFile file("C:/Users/nvdom/Desktop/Messenger/messenger/account.txt"); // Open the file
    if (file.open(QIODevice::Append | QIODevice::Text))
    {
        QTextStream stream(&file);
        stream << Username << "-" << Password << "-" << FirstName << "-" << LastName << ";" << "\n"; // Write the strings to the file
        file.close(); // Close the file
        hide();
        ChatPage = new Chatpage(this);
        ChatPage->show();
    }
}


