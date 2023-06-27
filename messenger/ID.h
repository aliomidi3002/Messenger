#ifndef ID_H
#define ID_H
#include<iostream>
#include<QString>
class userID{
    std::string username;
    std::string password;
    std::string firstName;
    std::string lastName;
    //qstrign token

public:
    //constructor
    userID() = default;

    userID(std::string username , std::string password , std::string firstName , std::string lastName){
        this->username = username;
        this->password = password;
        this->firstName = firstName;
        this->lastName = lastName;
    }

    // getters;
    std::string getUsername() const{return username;}
    std::string getPassword() const{return password;}
    std::string getFirstName() const{return firstName;}
    std::string getLastName() const{return lastName;}

    // settes
    void setUsername(std::string username){this->username = username;}
    void setPassword(std::string password){this->password = password;}
    void setFirstName(std::string firstName){this->firstName = firstName;}
    void setLastName(std::string lastName){this->lastName = lastName;}

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
