#include <iostream>
using std::cout; using std::cin; using std::endl;

void kabisat(int& tahun){
    cout << "Masukan tahun : "; cin >> tahun;
    if (tahun%400 == 0 || (tahun%4==0 && tahun%100 !=0)){
        cout << "Tahun " << tahun << " memiliki 366 hari\n";
    }else {
        cout << "Tahun " << tahun << " memiliki 365 hari\n";
    }
}

int main () {
    int tahun;
    kabisat(tahun);
}