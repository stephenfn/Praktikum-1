#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int minum;
    float uang;
    float kembali;

    cout << left << setw(32) << "=== VENDING MACHINE AUTOMAT ==="<<endl;
    cout << left << setw(32) << "Pilihan Minuman :"<<endl;
    cout << left << setw(32) << "1. Air Mineral (Rp 4000)"<<endl;
    cout << left << setw(32) << "2. Teh Botol (Rp 6000)"<<endl;
    cout << left << setw(32) << "3. Kopi Susu (Rp 10000)"<<endl;
    cout << left << setw(32) << "Pilih kode minuman (1-3) : ";
    cin >> minum;

    switch (minum) {
        case 1 :
            cout << left << setw(32) << "Masukan uang Anda (Rp)"<<":";cin>>uang;
            cout << left << setw(32) << "\n\n=== DETAIL TRANSAKSI ===" << endl;
            if (uang <4000){
                kembali = 4000-uang;
                cout << "Transaksi Gagal! Uang Anda kurang Rp " << kembali << endl;
            } else if (uang == 4000) {
                cout << "Transaksi Berhasil! Terimakasih sudah berbelanja"<<endl;
            } else{
                kembali = uang - 4000;
                cout << "Transaksi Berhasil! Uang kembalian anda Rp " << kembali<<endl;
            }
            break;
        case 2:
            cout << left << setw(32) << "Masukan uang Anda (Rp)"<<":";cin>>uang;
            cout << left << setw(32) << "\n\n=== DETAIL TRANSAKSI ===" << endl;
            if (uang <6000){
                kembali = 6000-uang;
                cout << "Transaksi Gagal! Uang Anda kurang Rp " << kembali << endl;
            } else if (uang == 6000) {
                cout << "Transaksi Berhasil! Terimakasih sudah berbelanja"<<endl;
            } else{
                kembali = uang - 6000;
                cout << "Transaksi Berhasil! Uang kembalian anda Rp " << kembali<<endl;
            }
            break;
        case 3:
            cout << left << setw(32) << "Masukan uang Anda (Rp)"<<":";cin>>uang;
            cout << left << setw(32) << "\n\n=== DETAIL TRANSAKSI ===" << endl;
            if (uang <10000){
                kembali = 10000-uang;
                cout << "Transaksi Gagal! Uang Anda kurang Rp " << kembali << endl;
            } else if (uang == 10000) {
                cout << "Transaksi Berhasil! Terimakasih sudah berbelanja"<<endl;
            } else{
                kembali = uang - 10000;
                cout << "Transaksi Berhasil! Uang kembalian anda Rp " << kembali<<endl;
            }
            break;
        default :
            cout << "Nomor minuman yang anda masukan tidak ada";
            


    }
    return 0;
}