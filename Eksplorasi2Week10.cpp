#include <iostream>
using namespace std;

int main (){    
    int a = 10;
    char b = 'A';
    double c = 3.14;

    int *pA = &a;
    char *pB = &b;
    double *pC = &c;

    cout << "Untuk INT a" << endl;
    // Cetak alamat awal pA, abis itu pointernya geser maju (nambah 4 byte karena int)
    cout << pA++ << endl;
    // Cetak alamat baru setelah digeser
    cout << pA << endl;
    // alamat awal 0x16f566a20 ketika di geser jadi 0x16f566a24 karena bergeser 4 byte, sesuai dengan memori int

    cout << "Untuk CHAR b" << endl;
    // Khusus char*, C++ nganggep ini teks (C-string), bukan sekadar alamat memori.
    // Jadi pas di-print, yang keluar isinya ('A') dulu. Habis itu pointernya baru geser 1 byte.
    cout << pB++ << endl;
    
    // Sekarang posisi pB udah geser ke memori di sebelahnya.
    // Karena blok memori sebelahnya kosong (isinya karakter null atau sisa memori), 
    // cout tetep nyoba baca sebagai teks dan akhirnya outputnya kelihatan nge-blank.
    cout << pB << endl;
    
    //di cast ulang pake void* karena pointer biasa khusus char punya karakteristik yang berbeda sama pointer lainnya.
    cout << (void*)pB++ << endl;
    cout << (void*)pB << endl;
    //alamat awal 0x16b936a20 pas di geser jadi 0x16b936a21 karena di geser 1 byte.

    cout << "Untuk DOUBLE c" << endl;
    // Cetak alamat awal pC, abis itu geser maju (nambah 8 byte karena double)
    cout << pC++ << endl;
    // Cetak alamat baru
    cout << pC << endl;
    //alamat awal 0x16b936a10 pas di geser jadi 0x16b936a18, karena bergeser 8 byte, sesuai dengan size double
    return 0;
}
