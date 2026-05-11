#ifndef anak_h
#define anak_h

#include <iostream>
#include <string>

class anak {
public: // <-- Tambahkan titik dua di sini
    std::string nama;

    anak(std::string pNama) : nama(pNama) {
        std::cout << "Anak \"" << nama << "\" ada\n";
    }

    ~anak() {
        std::cout << "Anak \"" << nama << "\" tidak ada\n";
    }
};

#endif