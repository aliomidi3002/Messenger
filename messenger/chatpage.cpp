#include "chatpage.h"
#include "ui_chatpage.h"
#include "ID.h"
#include <QUrlQuery>
#include <QtNetwork>
#include <QKeyEvent>
#include <QWidget>
#include <QScrollArea>
#include <QVector>
#include <QTimer>
#include <QThread>


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

struct MessageBlock;
QString creategroup (QString token,QString group_name ,QString group_title) {

    QString url1= "http://api.barafardayebehtar.ml:8080/creategroup?token=";
    QString url2= "&group_name=";
    QString url3= "&group_title=";
    url1=url1+token+url2+group_name + url3 + group_title;
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

QString createchannel (QString token,QString group_name ,QString group_title) {

    QString url1= "http://api.barafardayebehtar.ml:8080/createchannel?token=";
    QString url2= "&channel_name=";
    QString url3= "&channel_title=";
    url1=url1+token+url2+group_name + url3 + group_title;
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
QString joingroup(QString token,QString group_name) {

    QString url1= "http://api.barafardayebehtar.ml:8080/joingroup?token=";
    QString url2= "&group_name=";

    url1=url1+token+url2+group_name;
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

QString joinchannel(QString token,QString group_name) {

    QString url1= "http://api.barafardayebehtar.ml:8080/joinchannel?token=";
    QString url2= "&channel_name=";

    url1=url1+token+url2+group_name;
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

QVector<QString> getgrouplist(QString token){
    QString url1= "http://api.barafardayebehtar.ml:8080/getgrouplist?token=";
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
            if (blockObj.contains("group_name")) {
                names.append(blockObj["group_name"].toString());
            }
        }
    }

    return names;

}
QVector<QString> getchannellist(QString token){
    QString url1= "http://api.barafardayebehtar.ml:8080/getchannellist?token=";
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
            if (blockObj.contains("channel_name")) {
                names.append(blockObj["channel_name"].toString());
            }
        }
    }

    return names;

}

QString logout(QString user,QString pass);

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

QVector<MessageBlock> getuserchats_server_to_chat_display(QString token,QString dst) {
    QString url1= "http://api.barafardayebehtar.ml:8080/getuserchats?token=";
    QString url2= "&dst=";

    url1=url1+token+url2+dst;
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
        //qDebug() << "Error:" << reply->errorString();
    }

    // Clean up
    reply->deleteLater();


    QVector<MessageBlock> messageBlocks; // Array to store the MessageBlocks

    // Parse the JSON response
    QJsonDocument jsonResponse = QJsonDocument::fromJson(response.toUtf8());

    if (!jsonResponse.isNull()) {
        if (jsonResponse.isObject()) {
            QJsonObject jsonObject = jsonResponse.object();

            // Extract the "message" and "code" values
            QString message = jsonObject["message"].toString();
            QString code = jsonObject["code"].toString();

            qDebug() << "Message: " << message;
            qDebug() << "Code: " << code;

            // Iterate over the blocks
            QJsonObject::iterator it;
            for (it = jsonObject.begin(); it != jsonObject.end(); ++it) {
                QString key = it.key();
                if (key.startsWith("block")) {
                    QJsonObject blockObject = it.value().toObject();

                    // Extract values from each block
                    QString body = blockObject["body"].toString();
                    QString src = blockObject["src"].toString();
                    QString dst = blockObject["dst"].toString();
                    QString date = blockObject["date"].toString();

                    // Create a MessageBlock struct and store it in the array
                    MessageBlock block;
                    block.src = src;
                    block.dst = dst;
                    block.body = body;
                    block.date = date;

                    messageBlocks.append(block);
                }
            }
        } else {
            qDebug() << "Invalid JSON response: Not an object";
        }
    } else {
        qDebug() << "Invalid JSON response: Failed to parse";
    }

    return messageBlocks;
}

QVector<MessageBlock> getgroupchats_server_to_chat_display(QString token,QString dst) {
    QString url1= "http://api.barafardayebehtar.ml:8080/getgroupchats?token=";
    QString url2= "&dst=";

    url1=url1+token+url2+dst;
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
        //qDebug() << "Error:" << reply->errorString();
    }

    // Clean up
    reply->deleteLater();


    QVector<MessageBlock> messageBlocks; // Array to store the MessageBlocks

    // Parse the JSON response
    QJsonDocument jsonResponse = QJsonDocument::fromJson(response.toUtf8());

    if (!jsonResponse.isNull()) {
        if (jsonResponse.isObject()) {
            QJsonObject jsonObject = jsonResponse.object();

            // Extract the "message" and "code" values
            QString message = jsonObject["message"].toString();
            QString code = jsonObject["code"].toString();

            qDebug() << "Message: " << message;
            qDebug() << "Code: " << code;

            // Iterate over the blocks
            QJsonObject::iterator it;
            for (it = jsonObject.begin(); it != jsonObject.end(); ++it) {
                QString key = it.key();
                if (key.startsWith("block")) {
                    QJsonObject blockObject = it.value().toObject();

                    // Extract values from each block
                    QString body = blockObject["body"].toString();
                    QString src = blockObject["src"].toString();
                    QString dst = blockObject["dst"].toString();
                    QString date = blockObject["date"].toString();

                    // Create a MessageBlock struct and store it in the array
                    MessageBlock block;
                    block.src = src;
                    block.dst = dst;
                    block.body = body;
                    block.date = date;

                    messageBlocks.append(block);
                }
            }
        } else {
            qDebug() << "Invalid JSON response: Not an object";
        }
    } else {
        qDebug() << "Invalid JSON response: Failed to parse";
    }

    return messageBlocks;
}

QVector<MessageBlock> getchannelchats_server_to_chat_display(QString token,QString dst) {
    QString url1= "http://api.barafardayebehtar.ml:8080/getchannelchats?token=";
    QString url2= "&dst=";

    url1=url1+token+url2+dst;
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
        //qDebug() << "Error:" << reply->errorString();
    }

    // Clean up
    reply->deleteLater();


    QVector<MessageBlock> messageBlocks; // Array to store the MessageBlocks

    // Parse the JSON response
    QJsonDocument jsonResponse = QJsonDocument::fromJson(response.toUtf8());

    if (!jsonResponse.isNull()) {
        if (jsonResponse.isObject()) {
            QJsonObject jsonObject = jsonResponse.object();

            // Extract the "message" and "code" values
            QString message = jsonObject["message"].toString();
            QString code = jsonObject["code"].toString();

            qDebug() << "Message: " << message;
            qDebug() << "Code: " << code;

            // Iterate over the blocks
            QJsonObject::iterator it;
            for (it = jsonObject.begin(); it != jsonObject.end(); ++it) {
                QString key = it.key();
                if (key.startsWith("block")) {
                    QJsonObject blockObject = it.value().toObject();

                    // Extract values from each block
                    QString body = blockObject["body"].toString();
                    QString src = blockObject["src"].toString();
                    QString dst = blockObject["dst"].toString();
                    QString date = blockObject["date"].toString();

                    // Create a MessageBlock struct and store it in the array
                    MessageBlock block;
                    block.src = src;
                    block.dst = dst;
                    block.body = body;
                    block.date = date;

                    messageBlocks.append(block);
                }
            }
        } else {
            qDebug() << "Invalid JSON response: Not an object";
        }
    } else {
        qDebug() << "Invalid JSON response: Failed to parse";
    }

    return messageBlocks;
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

//uiCode////////////////////////////////////////////////////////////////////////////////////////////////////
QString CurrentUsername;
QString CurrentPassword;
QString UserToken;


Chatpage::Chatpage(QWidget *parent, const userID& currentUser) :
    QDialog(parent),
    ui(new Ui::Chatpage),
    mCurrentUser(currentUser)
{
    ui->setupUi(this);
    QString username = currentUser.getUsername();
    QString password = currentUser.getPassword();
    QString token = currentUser.getToken();
    CurrentUsername = username;
    CurrentPassword = password;
    UserToken = token;

    ui->label->setText(username);

    QTimer* timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Chatpage::on_pushButton_5_clicked);
    timer->start(2000);
}

Chatpage::~Chatpage()
{
    delete ui;
}

// find user
void Chatpage::on_toolButton_5_clicked()
{
    ui->lineEdit->clear();
    QString username = ui->lineEdit->text();
    sendmessageuser_chat_to_server(UserToken, username, "hi");
}

// create group
void Chatpage::on_toolButton_3_clicked()
{
    ui->lineEdit_3->clear();
    QString groupName = ui->lineEdit_3->text();
    creategroup(UserToken,groupName,"title");

}

// create channel
void Chatpage::on_toolButton_4_clicked()
{
    ui->lineEdit_2->clear();
    QString ChannelName = ui->lineEdit_2->text();
    createchannel(UserToken,ChannelName,"title");

}

// show users chat
void Chatpage::show_users_chat(QString user)
{
    QVector<MessageBlock> chats = getuserchats_server_to_chat_display(UserToken,user);
    ui->listWidget->clear();
    for (int i = 0 ; i < chats.size(); i++) {
        // user name
        if(chats.at(i).src == ui->label->text()){
            QString text = chats.at(i).body;
            QLabel* label = new QLabel(text);
            label->setStyleSheet("QLabel { color: white; background-color: rgb(0, 170, 255);font: 9pt 'Segoe UI'; border-radius:5px}"); // Set the label's style
            label->setAlignment(Qt::AlignLeft);
            int labelHeight = 40 + (text.count('\n') * 20);
            QListWidgetItem* newItem = new QListWidgetItem();
            newItem->setSizeHint(QSize(0, labelHeight));
            ui->listWidget->addItem(newItem);
            ui->listWidget->setItemWidget(newItem, label);
            ui->listWidget->setSpacing(10);
            QString styleSheet = QString("QListWidget::item { padding-left: 5px; margin-left: 0; margin-right: 760; margin-bottom: 10px; }");
            ui->listWidget->setStyleSheet(styleSheet);
            ui->listWidget->scrollToBottom();
        }
        else if(chats.at(i).src == ui->label_2->text()){
            QString text = chats.at(i).body;
            QLabel* label = new QLabel(text);
            label->setStyleSheet("QLabel { color: white; background-color: rgb(0, 85, 127);font: 9pt 'Segoe UI'; border-radius:5px}"); // Set the label's style
            label->setAlignment(Qt::AlignLeft);
            int labelHeight = 40 + (text.count('\n') * 20);
            QListWidgetItem* newItem = new QListWidgetItem();
            newItem->setSizeHint(QSize(0, labelHeight));
            ui->listWidget->addItem(newItem);
            ui->listWidget->setItemWidget(newItem, label);
            ui->listWidget->setSpacing(10);
            QString styleSheet = QString("QListWidget::item { padding-left: 5px; margin-left: 0; margin-right: 760; margin-bottom: 10px; }");
            ui->listWidget->setStyleSheet(styleSheet);
            ui->listWidget->scrollToBottom();
        }
    }
}

// show groups chats
void Chatpage::show_groups_chats(QString name){
    QVector<MessageBlock> chats = getgroupchats_server_to_chat_display(UserToken,name);
    ui->listWidget->clear();
    for (int i = 0 ; i < chats.size(); i++) {
        // user name
        if(chats.at(i).src == ui->label->text()){
            QString text = chats.at(i).body;
            QLabel* label = new QLabel(text);
            label->setStyleSheet("QLabel { color: white; background-color: rgb(0, 170, 255);font: 9pt 'Segoe UI'; border-radius:5px}"); // Set the label's style
            label->setAlignment(Qt::AlignLeft);
            int labelHeight = 40 + (text.count('\n') * 20);
            QListWidgetItem* newItem = new QListWidgetItem();
            newItem->setSizeHint(QSize(0, labelHeight));
            ui->listWidget->addItem(newItem);
            ui->listWidget->setItemWidget(newItem, label);
            ui->listWidget->setSpacing(10);
            QString styleSheet = QString("QListWidget::item { padding-left: 5px; margin-left: 0; margin-right: 760; margin-bottom: 10px; }");
            ui->listWidget->setStyleSheet(styleSheet);
            ui->listWidget->scrollToBottom();
        }
        else{
            QString text = chats.at(i).body;
            QLabel* label = new QLabel(text);
            label->setStyleSheet("QLabel { color: white; background-color: rgb(0, 85, 127);font: 9pt 'Segoe UI'; border-radius:5px}"); // Set the label's style
            label->setAlignment(Qt::AlignLeft);
            int labelHeight = 40 + (text.count('\n') * 20);
            QListWidgetItem* newItem = new QListWidgetItem();
            newItem->setSizeHint(QSize(0, labelHeight));
            ui->listWidget->addItem(newItem);
            ui->listWidget->setItemWidget(newItem, label);
            ui->listWidget->setSpacing(10);
            QString styleSheet = QString("QListWidget::item { padding-left: 5px; margin-left: 0; margin-right: 760; margin-bottom: 10px; }");
            ui->listWidget->setStyleSheet(styleSheet);
            ui->listWidget->scrollToBottom();
        }
    }
}

// show Channel chats
void Chatpage::show_channel_chats(QString name){
    QVector<MessageBlock> chats = getchannelchats_server_to_chat_display(UserToken,name);
    ui->listWidget->clear();
    for (int i = 0 ; i < chats.size(); i++) {
        QString text = chats.at(i).body;
        QLabel* label = new QLabel(text);
        label->setStyleSheet("QLabel { color: white; background-color: rgb(0, 170, 255);font: 9pt 'Segoe UI'; border-radius:5px}"); // Set the label's style
        label->setAlignment(Qt::AlignLeft);
        int labelHeight = 40 + (text.count('\n') * 20);
        QListWidgetItem* newItem = new QListWidgetItem();
        newItem->setSizeHint(QSize(0, labelHeight));
        ui->listWidget->addItem(newItem);
        ui->listWidget->setItemWidget(newItem, label);
        ui->listWidget->setSpacing(10);
        QString styleSheet = QString("QListWidget::item { padding-left: 5px; margin-left: 0; margin-right: 760; margin-bottom: 10px; }");
        ui->listWidget->setStyleSheet(styleSheet);
        ui->listWidget->scrollToBottom();
    }
}

// Thread Button
void Chatpage::on_pushButton_5_clicked()
{
    QVector<QString> updatedUsers = getuserlist(UserToken);
    ui->listWidget_2->clear();
    for (int i = updatedUsers.size() - 1; i >= 0; --i) {
        ui->listWidget_2->addItem(updatedUsers[i]);
    }


    QVector<QString> groupList = getgrouplist(UserToken);
    ui->listWidget_4->clear();
    for(int i = groupList.size() -1 ; i >= 0; --i){
        ui->listWidget_4->addItem(groupList[i]);
    }



    QVector<QString> channelList = getchannellist(UserToken);
    ui->listWidget_3->clear();
    for(int i = channelList.size() -1 ; i >= 0 ; --i){
        ui->listWidget_3->addItem(channelList[i]);
    }
}

// send message
void Chatpage::on_pushButton_2_clicked() {
    QString name = ui->label_2->text();
    QString text = ui->textEdit->toPlainText();

    // Get the index of the currently selected tab
    int currentIndex = ui->tabWidget->currentIndex();

    if (text.isEmpty()) {
        return;
    }

    if (currentIndex == 0) {
        sendmessageuser_chat_to_server(UserToken, name, text);
        ui->textEdit->clear();
        show_users_chat(name);

    } else if (currentIndex == 1) {
        sendmessagegroup_chat_to_server(UserToken,name,text);
        ui->textEdit->clear();
        show_groups_chats(name);

    } else if (currentIndex == 2) {
        sendmessagechannel_chat_to_server(UserToken,name,text);
        ui->textEdit->clear();
        show_channel_chats(name);
    }
}

// Quit Button
void Chatpage::on_pushButton_clicked()
{
    while(logout(CurrentUsername,CurrentPassword)!="200"){
        ;
    };
    QCoreApplication::quit();
}

// personal chat display on screen
void Chatpage::on_listWidget_2_itemClicked(QListWidgetItem *item)
{
    QString name = item->text();
    ui->label_2->setText(name);
    show_users_chat(name);
}

// group chat display on screen
void Chatpage::on_listWidget_4_itemClicked(QListWidgetItem *item)
{
    QString name = item->text();
    ui->label_2->setText(name);
    show_groups_chats(name);
}

// Channel Chat display on Screen
void Chatpage::on_listWidget_3_itemClicked(QListWidgetItem *item)
{
    QString name = item->text();
    ui->label_2->setText(name);
    show_channel_chats(name);
}

// join for group
void Chatpage::on_pushButton_7_clicked()
{
    ui->lineEdit_3->clear();
    QString groupName = ui->lineEdit_3->text();
    joingroup(UserToken,groupName);
}

// join for channel
void Chatpage::on_pushButton_6_clicked()
{
    ui->lineEdit_2->clear();
    QString ChannelName = ui->lineEdit_2->text();
    joinchannel(UserToken,ChannelName);
}

