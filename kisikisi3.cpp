#include <iostream>
using namespace std;

int jumlah (int n){
    if (n == 1){
        cout << "1 = ";
        return 1;
    }
    cout << n;
    if (n > 1){
        cout << " * ";
    }
    return n * jumlah (n-1);
}

int main (){
    int n;
    cout << "Masukan angka : "; cin >> n;
    cout << "Jumlah " << "(" << n << ") " << "adalah "<<jumlah (n)<< endl;

}