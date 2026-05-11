#ifndef ADMIN_H
#define ADMIN_H
#include <vector>
#include "user.h"
#include "member.h"

class admin : public user {
public:
    admin(string pNama, string pEmail) : user(pNama, pEmail) {}

    void showAllMember(vector<member>& daftar) {
        for (int i = 0; i < daftar.size(); i++) {
            cout << i+1 << ". " << daftar[i].nama << " [" << daftar[i].status << "]" << endl;
        }
    }
    void toggleActivationMember(member& m) {
        m.status = (m.status == "Aktif") ? "Non-Aktif" : "Aktif";
    }
};
#endif