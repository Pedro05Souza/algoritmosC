#include <user.h>

User::User(string username, string password){
    this->username = username;
    this->password = password;
}

void User::setUsername(string username){
    this->username = username;
}

void User::setPassword(string password){
    this->password = password;
}

string User::getUsername(){
    return this->username;
}

string User::getPassword(){
    return this->password;
}