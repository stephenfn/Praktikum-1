#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    float belanja;
    float diskon;
    float bayar;

    cout << left << setw(32)<< "=== Kalkulator Kasir Toko Buku === "<<endl;
    cout << left << setw(32)<< "Masukan total belanja (Rp) : "; cin >> belanja;
    cout << left << setw(32)<< " \n--- Ringkasan Pembayaran --- ";
    if (belanja < 100000) {
        
        cout << left << setw(32) << "\nDiskon (0%) " << ":" << "Rp " << "0";
        cout << left << setw(32) << "\nTotal Bayar " << ":" << "Rp " << belanja<<endl;
    }
    else if (100000<=belanja && belanja <=299000) {
        diskon = 0.1*belanja;
        bayar = belanja - diskon;
        cout << left << setw(32) << "\nDiskon (10%) " << ":" << "Rp " << diskon;
        cout << left << setw(32) << "\nTotal Bayar " << ":" << "Rp " << bayar<<endl;

    }
    else {
        diskon = 0.2*belanja;
        bayar = belanja-diskon;
        cout << left << setw(32) << "\nDiskon (20%) " << ":" << "Rp " << diskon;
        cout << left << setw(32) << "\nTotal Bayar " << ":" << "Rp " << bayar<<endl;
    }
    return 0;
}