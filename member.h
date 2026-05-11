#ifndef MEMBER_H
#define MEMBER_H
#include "user.h"

class member : public user { // Turunan dari user
public:
    string status; 
    // id, nama, email tidak ditulis lagi karena sudah warisan dari user

    member(string pNama, string pEmail) : user(pNama, pEmail) {
        status = "Aktif";
    }
    void showProfile() {
        cout << "Nama: " << nama << "\nID: " << id << "\nStatus: " << status << endl;
    }
};
#endif