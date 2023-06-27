#ifndef ID_H
#define ID_H
#include<iostream>
#include<QString>
class userID{
    QString username;
    QString password;
    //qstrign token

public:
    //constructor
    userID() = default;

    userID(QString username , QString password){
        this->username = username;
        this->password = password;
    }

    // getters;
    QString getUsername() const{return username;}
    QString getPassword() const{return password;}

    // settes
    void setUsername(QString username){this->username = username;}
    void setPassword(QString password){this->password = password;}

    //current User
};

class chat:public userID{
public:
    QString chat_label_display;
    QString path_to_chat_profile;
    void get_user_profile(QString dst){
       ///kamel beshe bayad profile ro to path zakhireh cone
    }


};
class group:public chat{

};
class chanel:public chat{

};

#endif // ID_H
