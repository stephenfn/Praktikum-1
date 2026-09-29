#include <iostream>
using namespace std;

int main (){
    int a;
    int s1;
    int s2;
    int t;
    do{
        cout << "====================================\n";
        cout << " E-LEARNING BANGUN DATAR YAZIDIZAY\n";
        cout << " Designer: Kang Stephen\n";
        cout << "====================================\n";
        cout << "\n1. Persegi Panjang \n2. Segitiga\n3. Hentikan Program\n";
        cout << "------------------------------------\n";
        cout << "Pilih menu (1-3) : ";cin>>a;
        if (a==1){
            do{
                cout << "[MEMASUKI MENU PERSEGI]"<<endl;
                cout << "Masukan kolom : ";cin >> s1;
                cout << "Masukan baris : ";cin >> s2;
                if (s1>1&&s2>1) {
                for(int ai=1;ai <= s1;ai++){
                    for (int oi=1;oi<=s2;oi++){
                        cout << "*";
                    }
                    cout << endl;
                }
            
            }else{
                cout << "Baris dan Kolom minimal 2";
                continue;
            }
            }while (s1==1&&s2==1);
            break;
        }
        if (a==2) {
            do{
            cout << "[MEMASUKI MENU SEGITIGA]"<<endl;
            cout << "Masukan tinggi segitiga : ";cin >> t;
            if (t>=2) {
                for(int ai=1;ai <= t;ai++){
                    for (int ss=1;ss<=t-ai;ss++){
                        cout << " ";
                    }

                    for (int oi=1;oi<=(ai*2) - 1;oi++){
                        cout << "*";
                    }
                    cout << endl;
                }
            
            }else{
                cout << "Tinggi minimal 2";
                continue;
            }
            }while (t<2);
            break;
        }
        if (a!=2 && a !=1 &&a!=3){
            cout << "\n\nInput anda salah, Coba lagi!";
        }
    }while (a!=3);
    cout << 
}