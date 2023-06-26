#include "signup.h"
#include "ui_signup.h"
#include <QFile>
#include <QTextStream>
#include "ID.h"
#include <QtNetwork>
QString response_code(QString Server_Response);
QString signup_to_server(QString user,QString pass) {

    QString url1= "http://api.barafardayebehtar.ml:8080/signup?username=";
    QString url2= "&password=";

    url1=url1+user+url2+pass;
    QUrl url(url1);
    /*
    QUrl url2("&password=");
    url = url.resolved(user1);
    url = url.resolved(url2);
    url = url.resolved(pass1);*/
    // Create a QNetworkAccessManager object
    QNetworkAccessManager manager;

    // Create a QNetworkRequest object and set the URL
    QNetworkRequest request;
    request.setUrl(url);

    // Send the GET request
    QNetworkReply* reply = manager.get(request);

    // Wait for the request to finish
    QEventLoop loop;
    QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();

    QString response;
    if (reply->error() == QNetworkReply::NoError) {
        // Reading the response data
        QByteArray responseData = reply->readAll();
        response = QString(responseData);
    } else {
        // Handle error cases
        //qDebug() << "Error:" << reply->errorString();
    }

    // Clean up
    reply->deleteLater();

    return response_code(response);
}signUp::signUp(QWidget *parent) :
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
    QString FirstName_in = ui->lineEdit_fn->text();
    QString LastName_in  = ui->lineEdit_ln->text();
    QString Username_in  = ui->lineEdit_u->text();
    QString Password_in  = ui->lineEdit_p->text();
    QString Confirm_in   = ui->lineEdit_c->text();


    if(FirstName_in.size()< 3){
        ui->label_7->setStyleSheet("color: rgb(255, 0, 0);font: 9pt;");
        ui->label_7->setText("First Name Must Be More Than 3 Characters");
        return;
    }

    if(LastName_in.size()< 3){
        ui->label_7->setStyleSheet("color: rgb(255, 0, 0);font: 9pt");
        ui->label_7->setText("Last Name Must Be More Than 3 Characters");
        return;
    }

    if(Username_in.size()<= 4){
        ui->label_7->setStyleSheet("color: rgb(255, 0, 0);font: 9pt");
        ui->label_7->setText("Username Must Be More Than 4 Characters");
        return;
    }

    if(Password_in.size()<= 4){
        ui->label_7->setStyleSheet("color: rgb(255, 0, 0);font: 9pt");
        ui->label_7->setText("Password Must Be More Than 4 Characters");
        return;
    }


    if (FirstName_in.isEmpty()) {
        ui->label_7->setStyleSheet("color: rgb(255, 0, 0);font: 9pt");
        ui->label_7->setText("Enter Your First Name");
        return;
    }

    else if (LastName_in.isEmpty()) {
        ui->label_7->setStyleSheet("color: rgb(255, 0, 0);font: 9pt");
        ui->label_7->setText("Enter Your Last Name");
        return;
    }

    else if (Username_in.isEmpty()) {
        ui->label_7->setStyleSheet("color: rgb(255, 0, 0);font: 9pt");
        ui->label_7->setText("Enter Your Username");
        return;
    }


    else if (Password_in.isEmpty()) {
        ui->label_7->setStyleSheet("color: rgb(255, 0, 0);font: 9pt");
        ui->label_7->setText("Enter Your Password");
        return;
    }


    else if (Confirm_in.isEmpty()) {
        ui->label_7->setStyleSheet("color: rgb(255, 0, 0);font: 9pt");
        ui->label_7->setText("Confirm Your Password");
        return;
    }

    else if (Confirm_in != Password_in){
        ui->label_7->setStyleSheet("color: rgb(255, 0, 0);font: 9pt");
        ui->label_7->setText("Confirm Your Password Correctly");
        return;
    }


    std::string username = Username_in.toStdString();
    std::string password = Password_in.toStdString();
    std::string firstName = FirstName_in.toStdString();
    std::string lastName = LastName_in.toStdString();

    userID currentUser = userID(username , password , firstName , lastName);

    QString respons_signUp = signup_to_server(Username_in , Password_in);

// 200   موفق
// 404   اتصال ناموفق
// 204   تکراری
//401    اطلاعات نادرست
//300     قبلا ورود کرده اید
}
//hide();
//ChatPage = new Chatpage(this , currentUser);
//Chatpage->show();


