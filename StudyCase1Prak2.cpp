#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () {
    float nt;
    float nut;
    float nua;
    int kkm;
    float na;
    int npm;
    string nama;

    cout << "Masukan nama anda : " << endl;
    getline (cin,nama);
    cout << "Masukan 3 Digit Terakhir NPM (Tanpa 0 diawal) : " << endl; cin >> npm;
    cout << "Masukan nilai tugas : "<< endl;  cin>>nt;
    do{
        cout << "Masukan nilai tugas : "<< endl;  cin>>nt;
        if (nt>100) {
        cout << "Nilai maksimal adalah 100"<<endl;
        }
    }while (nt > 100);
    do{
        cout << "Masukan nilai UTS : "<< endl;  cin>>nut;
        if (nut>100) {
        cout << "Nilai maksimal adalah 100"<<endl;
        }
    }while (nut > 100);
    do{
        cout << "Masukan nilai UAS : "<< endl;  cin>>nua;
        if (nua>100) {
        cout << "Nilai maksimal adalah 100"<<endl;
        }
    }while (nua > 100);

    na=(nt*0.3)+(nut*0.3)+(nua*0.4);
    kkm=60 + ((npm*2)%15);


    cout << left <<setw(32)<<"--- Kalkulator Nilai Praktikum ---" << endl;
    cout << left <<setw(32)<< "Nama Praktikan " << ":" << nama << endl;
    cout << left <<setw(32)<< "3 NPM Akhir " << ":" << npm << endl;
    cout << left <<setw(32)<< "Nilai Tugas " << ":" << nt << endl;
    cout << left <<setw(32)<< "Nilai UTS " << ":" << nut << endl; 
    cout << left <<setw(32)<< "Nilai UAS " << ":" << nua << endl;
    cout << left <<setw(32)<<"\n\nHasil Perhitungan : "<<endl;
    cout << left <<setw(32)<<"Nilai Akhir Kamu adalah " << ":" << na << endl;
    cout << left <<setw(32)<<"KKM Unik Kamu adalah " << ":" << kkm<<endl;
    return 0;


}