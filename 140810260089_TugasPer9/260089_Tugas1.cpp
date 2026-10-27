#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Struct untuk menyimpan data satu jenis barang yang dibeli
struct buy{
        string nb;      // nama barang
        int harga;      // harga satuan
        int jumlah;     // jumlah yang dibeli
};

// Meminta user memasukkan jumlah jenis barang, lalu mengembalikan nilainya
int input (){
    int n;
    cout << "Masukan jumlah jenis barang : "; cin >> n; cout << endl;
    return n;
}

// Mencetak daftar barang beserta subtotal tiap barang (harga x jumlah)
void cetakstruk(int nn,buy b[]){
    for (int i=0 ; i < nn ; i++){
        int ht = b[i].harga * b[i].jumlah;
        cout << i+1 <<"." << b[i].nb << " ("<<b[i].jumlah << "x" << b[i].harga << ") = Rp"<<ht << endl;
    }
    cout << "------------------------------------------------------" << endl;
}

// Mencari index barang dengan harga satuan tertinggi
int highest(int nn,buy b[]){
    int idx;
    idx = 0;
    for (int i = 1; i < nn; i++){
        if (b[idx].harga < b[i].harga){
            idx = i;
        }
    }
    return idx;
}

// Menghitung total bayar dari semua barang
int total (int nn, buy b[]){
    int tot = 0;
    for (int i=0 ; i < nn ; i++){
        int jumlah = b[i].harga * b[i].jumlah;
        tot += jumlah;
    }
    return tot;
}

int main (){
    int nn = input();
    buy b[nn];
    cin.ignore();   // membuang newline sisa input jumlah jenis barang
    // Input data tiap barang
    for (int a=0;a < nn;a++){
        cout << "Barang ke-"<<a+1 << endl;
        // Dengan cin >>, kata kedua nyasar ke input harga dan input berikutnya jadi kacau
        cout << left << setw(24) << "Nama Barang" << " : "; getline(cin, b[a].nb);cout << endl;
        cout << left << setw(24) << "Harga" << " : "; cin >> b[a].harga; cout << endl;
        cout << left << setw(24) << "Jumlah Beli" << " : "; cin >> b[a].jumlah;cout << endl;
        cin.ignore();   // FIX: membuang newline sisa input jumlah, supaya getline barang berikutnya tidak kosong
    }

    // Cetak struk, barang termahal, dan total bayar
    cout << "=== STRUK BELANJA MINIMARKET TETO ===" << endl;
    cetakstruk(nn,b);
    cout << "Harga Barang Tertinggi  : Rp" << b[highest(nn,b)].harga << "(" << b[highest(nn,b)].nb << ")" << endl;
    cout << "Total Bayar Keseluruhan : Rp" << total(nn,b) << endl;
}