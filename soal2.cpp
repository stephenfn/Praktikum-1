#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string NamaToko= "Toko Buah Segar";
    string NamaKasir= "Andi";
    string kasir = "(A)"; //kodekasir
    int apel = 15500;
    int jeruk = 12750;
    float min = 0.5;
    float pajak = 11.5;
    float apelorder;
    float jerukorder;
    string customer;

    cout << "Masukan Nama Pembeli : " << endl;
    cin >> customer;
    cout << "Berat apel yang dibeli dalam kg : " << endl;
    cin >> apelorder;
    cout << "Berat jeruk yang dibeli dalam kg : " << endl;
    cin >> jerukorder; 
    
    cout << left << setw(32) << "\n\nNama Toko" << ": " << NamaToko << endl;
    cout << left << setw(32) << "Kasir" << ": " << NamaKasir << kasir<< endl;
    cout << left << setw(32) << "\n\nInput Transaksi" << endl;
    cout << left << setw(32) << "Nama Pembeli" << ": " << customer << endl;
    cout << left << setw(32) << "Berat Apel (kg)" <<  ": " << apelorder << endl;
    cout << left << setw(32) << "Berat Jeruk (kg)" << " : " << jerukorder << endl;
    cout << left << setw(32) << "\n\nStruk Belanja" <<endl;
    cout << left << setw(32) << "Nama Pembeli" << " : " << customer << endl;
    cout << left << setw(32) << "Apel" << " : " << apelorder << "kg" << endl;
    cout << left << setw(32) << "Jeruk" << " : " << jerukorder << "kg" << endl;


    
    return 0;
}