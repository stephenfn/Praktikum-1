#include <iostream>
#include <cctype>
using namespace std;

void input(int &belanja, int &jumlah, char &ukuran) {
    do {
        cout << "Mau beli apa ?\n"
             << "1. Kopi (B/S/K) (Rp. 10.000 / Rp. 5.000 / Rp. 1.000)\n"
             << "2. Gula (B/S/K) (Rp. 20.000 / Rp. 10.000 / Rp. 5.000)\n"
             << "3. Teh  (B/K)   (Rp. 5.000 / Rp. 1.000)\n";
        cout << "Masukan angka : ";
        cin >> belanja;
        if (belanja < 1 || belanja > 3) {
            cout << "Masukan angka yang benar, ulangi.\n";
        }
    } while (belanja < 1 || belanja > 3);

    bool valid;
    do {
        if (belanja == 3) {
            cout << "Ukuran apa ? B/K\n";
        } else {
            cout << "Ukuran apa ? B/S/K\n";
        }
        cout << "Masukan ukuran : ";
        cin >> ukuran;
        ukuran = toupper(ukuran);

        valid = (ukuran == 'B' || ukuran == 'S' || ukuran == 'K');
        if (!valid) {
            cout << "Masukan ukuran yang benar.\n";
        } else if (belanja == 3 && ukuran == 'S') {
            cout << "Teh tidak memiliki ukuran sedang, hanya Besar / Kecil.\n";
            valid = false;
        }
    } while (!valid);

    do {
        cout << "Masukan jumlah pembelian : ";
        cin >> jumlah;
        if (jumlah < 1) {
            cout << "Jumlah minimal 1.\n";
        }
    } while (jumlah < 1);
}

int proses(int belanja, int jumlah, char ukuran) {
    int hargaSatuan;
    if (belanja == 1) {          // Kopi
        switch (ukuran) {
            case 'B': hargaSatuan = 10000; break;
            case 'S': hargaSatuan = 5000;  break;
            default:  hargaSatuan = 1000;
        }
    } else if (belanja == 2) {   // Gula
        switch (ukuran) {
            case 'B': hargaSatuan = 20000; break;
            case 'S': hargaSatuan = 10000; break;
            default:  hargaSatuan = 5000;
        }
    } else {                     // Teh
        if (ukuran == 'B') {
            hargaSatuan = 5000;
        } else {
            hargaSatuan = 1000;
        }
    }
    return hargaSatuan * jumlah;
}

void output(int harga) {
    cout << "Total harga untuk pembelian anda adalah : Rp. " << harga << endl;
}

int main() {
    int belanja = 0, jumlah = 0, harga = 0;
    char ukuran = ' ', pil;

    do {
        input(belanja, jumlah, ukuran);
        harga += proses(belanja, jumlah, ukuran);
        cout << "Subtotal : Rp. " << harga << endl;
        cout << "Mau tambah belanjaan YA/TIDAK ? ";
        cin >> pil;
        pil = toupper(pil);
    } while (pil == 'YA');

    output(harga);
    return 0;
}