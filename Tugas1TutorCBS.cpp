/*
Nama Program : Membuat Table
Nama         : Myriad
NPM          : 140810260089
Tanggal Buat : 31 Agustus 2026
Deskripsi    : Membuat Table dengan npm 5 teman
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int npm = 1408102600;

    cout << "+-------------------------------------------" << endl;
    cout << "|\t\t CBS 2026 \t\t   |" << endl;
    cout << "+-------------------------------------------" << endl;
    cout << left << setw(32) << "NAMA" << "NPM" << endl;
    cout << left << setw(32) << "Muhammad Fazlee Maulana" << npm << 32 << endl;
    cout << left << setw(32) << "Kana Ekmal Hanana" << npm << 70 << endl;
    cout << left << setw(32) << "M. Hafiz Fatonih" << npm << 25 << endl;
    cout << left << setw(32) << "Regan Philips MacQueen" << npm << 46 << endl;
    cout << left << setw(32) << "Syahdira Mufti" << npm << 43 << endl;

    return 0;
}