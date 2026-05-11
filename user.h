#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>
using namespace std;

class user {
public:
    static int globalId;
    int id;
    string nama;
    string email;

    user(string pNama, string pEmail) : nama(pNama), email(pEmail) {
        id = generateId();
    }
    int generateId() {
        return ++globalId;
    }
};
int user::globalId = 0;
#endif