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
    string a;
    int b;
    cout <<"Masukan Nama : ";
    getline(cin,a);
    cout <<"Masukan 2 digit terakhir NPM : ";
    cin >> b;
    cout << "+-------------------------------------------" << endl;
    cout << "|\t\t CBS 2026 \t\t   |" << endl;
    cout << "+-------------------------------------------" << endl;
    cout << left << setw(32) << "NAMA" << "NPM" << endl;
    cout << left << setw(32) << a << npm << b << endl;

    return 0;
}