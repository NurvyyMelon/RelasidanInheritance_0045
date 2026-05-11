#include <iostream>
#include <vector>
#include <string>

// Memanggil file header yang sudah dibuat
#include "user.h"
#include "member.h"
#include "admin.h"

using namespace std;

int main() {
    // Membuat objek admin pakai pointer (biar mirip kodinganmu yang lain)
    admin* varAdmin = new admin("Makoto Yuki", "admin@umy.ac.id");