#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
    private:
    string password;
    string username;
public:
    User(string password, string username);
    void setPassword(string password);
    void setUsername(string username);
    string getPassword();
    string getUsername();
};

#endif /* USER_H */
