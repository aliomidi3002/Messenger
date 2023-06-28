#include "chatpage.h"
#include "ui_chatpage.h"
#include "ID.h"
#include <QUrlQuery>
#include <QtNetwork>
#include "setting.h"
#include <QKeyEvent>
#include <QWidget>
#include <QScrollArea>


QString extractSubstring(const QString& original, QString& first, QString& second) {
    int firstPos = original.indexOf(first);
    if (firstPos == -1) {
        // First string not found
        return QString();
    }

    int secondPos = original.indexOf(second, firstPos + first.length());
    if (secondPos == -1) {
        // Second string not found
        return QString();
    }

    // Extract the substring between the first and second strings
    first = original.mid(firstPos + first.length(), secondPos - firstPos - first.length());

    // Return the remaining part of the original string
    QString remaining = original.mid(secondPos + second.length());

    return remaining;
}

QString response_code(QString Server_Response);
QString sendmessagegroup_chat_to_server(QString token,QString dst , QString body) {
    QString url1= "http://api.barafardayebehtar.ml:8080/sendmessagegroup?token=";
    QString url2= "&dst=";
    QString url3= "&body=";
    url1=url1+token+url2+dst+url3+body;
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
        qDebug() << "Error:" << reply->errorString();
    }

    // Clean up
    reply->deleteLater();
    QString response_code_login_server = response_code(response);

    return response_code_login_server;

}

QString sendmessageuser_chat_to_server(QString token,QString dst , QString body) {
    QString url1= "http://api.barafardayebehtar.ml:8080/sendmessageuser?token=";
    QString url2= "&dst=";
    QString url3= "&body=";
    url1=url1+token+url2+dst+url3+body;
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
        qDebug() << "Error:" << reply->errorString();
    }

    // Clean up
    reply->deleteLater();
    QString response_code_login_server = response_code(response);

    return response_code_login_server;
}

QString sendmessagechannel_chat_to_server(QString token,QString dst , QString body) {
    QString url1= "http://api.barafardayebehtar.ml:8080/sendmessagechannel?token=";
    QString url2= "&dst=";
    QString url3= "&body=";
    url1=url1+token+url2+dst+url3+body;
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
        qDebug() << "Error:" << reply->errorString();
    }

    // Clean up
    reply->deleteLater();
    QString response_code_login_server = response_code(response);

    return response_code_login_server;
}

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


void Chatpage::on_pushButton_clicked()
{
    hide();
    Setting *set;
    set = new Setting(this);
    set->show();
}



void Chatpage::on_pushButton_2_clicked()
{
    // Get the text from the QTextEdit
    QString text = ui->textEdit->toPlainText();

    QLabel* label = new QLabel(text);
    label->setStyleSheet("QLabel { color: white; background-color: rgb(0, 85, 127);font: 9pt 'Segoe UI'; border-radius:5px}"); // Set the label's style
    label->setAlignment(Qt::AlignLeft); // Align the text to the left

    // Add a newline if the text length exceeds 60 characters
    if (text.length() > 60) {
        text.insert(60, "\n");
        label->setText(text);
    }

    // Calculate the size of the label based on the number of new lines in the text
    int labelHeight = 40 + (text.count('\n') * 20); // Adjust the height values as per your requirements

    // Create a QListWidgetItem
    QListWidgetItem* newItem = new QListWidgetItem();
    newItem->setSizeHint(QSize(0, labelHeight)); // Set the size hint for the item

    // Set the label as the item widget
    ui->listWidget->addItem(newItem);
    ui->listWidget->setItemWidget(newItem, label);

    // Set the spacing between items
    ui->listWidget->setSpacing(10); // Set the desired spacing (e.g., 10 pixels)

    // Calculate the margin right value for the QListWidget::item
    int marginRight = 740; // Initial margin-right value

    // Update the margin-right value based on text length

    QString styleSheet = QString("QListWidget::item { padding-left:5px; margin-left: 0; margin-right: 400; margin-bottom: 10px; }");
    ui->listWidget->setStyleSheet(styleSheet);

    // Scroll to the newly added item
    ui->listWidget->scrollToBottom();

    // Clear the text from the QTextEdit
    ui->textEdit->clear();
}



