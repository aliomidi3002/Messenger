#include "chatpage.h"
#include "ui_chatpage.h"
#include "ID.h"
#include <QUrlQuery>
#include <QtNetwork>
#include <QKeyEvent>
#include <QWidget>
#include <QScrollArea>
#include "newchat.h"
#include "newgroup.h"
#include "newchannel.h"
#include <QVector>
#include <QTimer>
#include <QThread>

struct MessageBlock;
QVector<QString> getuserlist(QString token);
//MessageBlock* getuserchats_server_to_chat_display(QString token,QString dst);
QVector<QString> getuserlist(QString token){
    QString url1= "http://api.barafardayebehtar.ml:8080/getuserlist?token=";
    url1=url1+token;
    QUrl url(url1);

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

    QString temp=response;
    //qDebug()<<num<<"\n\n";
    //qDebug() << response<<"\n\n\n";
    QString serverResponse = response;

    QVector<QString> names;

    // Parse the JSON response
    QJsonDocument jsonDoc = QJsonDocument::fromJson(serverResponse.toUtf8());
    if (!jsonDoc.isNull() && jsonDoc.isObject()) {
        QJsonObject jsonObj = jsonDoc.object();

        // Find and extract the "block" objects
        QStringList blockKeys = jsonObj.keys().filter("block ");
        for (const QString& blockKey : blockKeys) {
            QJsonObject blockObj = jsonObj[blockKey].toObject();
            if (blockObj.contains("src")) {
                names.append(blockObj["src"].toString());
            }
        }
    }

    return names;

}

QString logout(QString user,QString pass);
QString response_code(QString Server_Response){
    //seperating the code out of the respose of the server
    QString searchString1 = "\"204\"";
    QString searchString2 = "\"404\"";
    QString searchString3 = "\"401\"";
    QString searchString4 = "\"200\"";
    if(Server_Response.contains(searchString1)){
        return "204";
    }
    if(Server_Response.contains(searchString2)){
        return "404";
    }
    if(Server_Response.contains(searchString3)){
        return "401";
    }
    if(Server_Response.contains(searchString4)){
        return "200";
    }
    else{
        return "Error";
    }

}

QString extractSubstring_for_extracting_the_chat_info(const QString& original, QString& first, QString& second) {
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

struct MessageBlock {
    QString src;
    QString dst;
    QString body;
    QString date;
};

QString findSubstringAndReturnRest(const QString& originalString, const QString& substring)
{
    int index = originalString.indexOf(substring);

    if (index != -1) {
        // Found the substring, return the portion of the string starting from the occurrence
        return originalString.mid(index + substring.length());
    }

    // Substring not found, return an empty string
    return "";
}

QString getStringBetweenLastTwoStrings(const QString& first, const QString& second, const QString& third)
{
    int secondIndex = first.lastIndexOf(second);
    int thirdIndex = first.lastIndexOf(third);

    if (secondIndex == -1 || thirdIndex == -1 || secondIndex >= thirdIndex)
    {
        return QString(); // Return an empty string if either of the substrings is not found or the order is incorrect.
    }

    int startIndex = secondIndex + second.length();
    int length = thirdIndex - startIndex;
    return first.mid(startIndex, length);
}

MessageBlock* getuserchats_server_to_chat_display(QString token,QString dst) {
    QString url1= "http://api.barafardayebehtar.ml:8080/getuserchats?token=";
    QString url2= "&dst=";
    url1=url1+token+url2+dst;
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

    QString first="There Are -";
    QString second= "- Messages\"";
    QString temp=response;
    int num=getStringBetweenLastTwoStrings(temp,first,second).toInt(),i=0;
    //qDebug()<<num<<"\n\n";
    MessageBlock* answer_to_the_chat_info = new MessageBlock[num];
    //qDebug() << response<<"\n\n\n";
    QString serverResponse = response;

    // Parse the JSON response
    QJsonDocument jsonResponse = QJsonDocument::fromJson(serverResponse.toUtf8());
    if (!jsonResponse.isNull() && jsonResponse.isObject()) {
        QJsonObject rootObject = jsonResponse.object();

        // Iterate over each block
        for (const QString& key : rootObject.keys()) {
            if (key.startsWith("block ")) {
                QJsonObject blockObject = rootObject.value(key).toObject();

                // Extract values and store in struct

                answer_to_the_chat_info[i].src = blockObject.value("src").toString();
                answer_to_the_chat_info[i].dst = blockObject.value("dst").toString();
                answer_to_the_chat_info[i].body = blockObject.value("body").toString();
                answer_to_the_chat_info[i].date = blockObject.value("date").toString();

                // Print the values for verification
                //qDebug() << "Block" << key;
                //qDebug() << "Source:" << answer_to_the_chat_info[i].src;
                //qDebug() << "Destination:" << answer_to_the_chat_info[i].dst;
                //qDebug() << "Body:" << answer_to_the_chat_info[i].body;
                //qDebug() << "Date:" << answer_to_the_chat_info[i].date;
                i++;
            }
        }
    }

    //qDebug() <<"\n\n\n"<< response;
    //qDebug() <<"238476874682374\tefwwwe\twr";
    return answer_to_the_chat_info;



    //extractJsonValue(responseData,"bo")

}

QString signup(QString user,QString pass) {

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
}
QString glob1;
QString glob2;
QString glob3;

void Chatpage::showUsers()
{
    QVector<QString> user = getuserlist(glob3);
    for(int i = user.size()-1 ; i >= 0; i--){
        ui->listWidget_2->addItem(user[i]);
    }

}

class myThread2: public QThread
{
public:
    void run() override
    {
        while(true)
        {
            emit showUsers();
            sleep(1);
        }
    }
signals:
    void showUsers();
};



Chatpage::Chatpage(QWidget *parent, const userID& currentUser) :
    QDialog(parent),
    ui(new Ui::Chatpage),
    mCurrentUser(currentUser)
{
    ui->setupUi(this);
    QString username = currentUser.getUsername();
    QString password = currentUser.getPassword();
    QString token = currentUser.getToken();
    glob1 = username;
    glob2 = password;
    glob3 = token;
    ui->label->setText(username);

    showUsers();

}

Chatpage::~Chatpage()
{
    delete ui;
}

void Chatpage::on_toolButton_5_clicked()
{
    NewChat *chat = new NewChat(this, glob3);
    chat->setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowTitleHint | Qt::Window | Qt::FramelessWindowHint);
    chat->setAttribute(Qt::WA_DeleteOnClose); // Optional: Delete the window when closed
    chat->show();
}

void Chatpage::on_toolButton_3_clicked()
{

    NewGroup group;
    group.setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowTitleHint);
    group.setModal(true);
    group.exec();
}


void Chatpage::on_toolButton_4_clicked()
{
    NewChannel channel;
    channel.setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowTitleHint);
    channel.setModal(true);
    channel.exec();

}


void Chatpage::on_pushButton_clicked()
{
    while(logout(glob1,glob2)!="200"){
        ;
    };
    close();
}


// showing password to chat
void Chatpage::show_chat()
{
    QListWidgetItem *selectedItem = ui->listWidget_2->currentItem();
    QString user = selectedItem->text();
    MessageBlock *chats;
    chats = getuserchats_server_to_chat_display(glob3,user);

    int count = 0;
    while(chats->body[count] != nullptr){
        QString text = chats->body[count];
        QLabel* label = new QLabel(text);
        label->setStyleSheet("QLabel { color: white; background-color: rgb(0, 85, 127);font: 9pt 'Segoe UI'; border-radius:5px}"); // Set the label's style
        label->setAlignment(Qt::AlignLeft);
        if (text.length() > 60) {
            text.insert(60, "\n");
            label->setText(text);
        }
        int labelHeight = 40 + (text.count('\n') * 20);
        QListWidgetItem* newItem = new QListWidgetItem();
        newItem->setSizeHint(QSize(0, labelHeight));
        ui->listWidget->addItem(newItem);
        ui->listWidget->setItemWidget(newItem, label);
        ui->listWidget->setSpacing(10);
        QString styleSheet = QString("QListWidget::item { padding-left:5px; margin-left: 0; margin-right: 400; margin-bottom: 10px; }");
        ui->listWidget->setStyleSheet(styleSheet);
        ui->listWidget->scrollToBottom();
        ui->textEdit->clear();
        count++;
    }

}

// sending message to server
void Chatpage::on_pushButton_2_clicked()
{
    // Get the text from the QTextEdit
    QString text = ui->textEdit->toPlainText();

    if(text == nullptr){
        return;
    }

    QListWidgetItem *selectedItem = ui ->listWidget_2->currentItem();
    if(selectedItem != nullptr){
        sendmessageuser_chat_to_server(glob3,selectedItem->text(),text);
        show_chat();
    }
    else{
        return;
    }
}

