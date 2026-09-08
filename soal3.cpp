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
    float pajak = 1.115;
    float apelorder;
    float jerukorder;
    string customer;
    double tagihan;
    bool kondisitoko;
    double totpajak;

    cout << "Masukan Nama Pembeli : " << endl;
    cin >> customer;
    cout << "Berat apel yang dibeli dalam kg : " << endl;
    cin >> apelorder;
    cout << "Berat jeruk yang dibeli dalam kg : " << endl;
    cin >> jerukorder; 
    
    tagihan = (apelorder*apel + jeruk*jerukorder)*pajak; //menghitung tagihan di kali pajak
    totpajak = (apelorder*apel + jeruk*jerukorder)*0.115; //menghitung harga pajaknya

    cout << left << setw(32) << "\n\nNama Toko" << ": " << NamaToko << endl;
    cout << left << setw(32) << "Kasir" << ": " << NamaKasir << kasir<< endl;
    cout << left << setw(32) << "\n\nInput Transaksi" << endl;
    cout << left << setw(32) << "Nama Pembeli" << ": " << customer << endl;
    cout << left << setw(32) << "Berat Apel (kg)" <<  ": " << apelorder << endl;
    cout << left << setw(32) << "Berat Jeruk (kg)" << ": " << jerukorder << endl;
    cout << left << setw(32) << "\n\nStruk Belanja" <<endl;
    cout << left << setw(32) << "Nama Pembeli" << " : " << customer << endl;
    cout << left << setw(32) << "Apel" << " : " << apelorder << "kg" << endl;
    cout << left << setw(32) << "Jeruk" << " : " << jerukorder << "kg" << endl;
    cout << left << setw(32) << "Total yang harus dibayar (sudah termasuk pajak)" << " : " << "Rp" << tagihan << endl;
    cout << left << setw(32) << "Pajak yang harus dibayar"<< " : " << "Rp" << totpajak << endl;
    

    
    return 0;
}