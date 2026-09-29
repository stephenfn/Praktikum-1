#include <iostream>

using namespace std;

int main (){
    int n=1;
    int na;
    int nb;
    for (int oi=1;oi <=5;oi++){
        cout << "Murid ke-"<<n<<endl;
        cout << "Masukan nilai Ujian A: ";cin>>na;
        if (na==100){
            cout << "Perwakilan ditemukan!";
            break;
        } else if (na>=80 && na<100){
            cout << "Masukan nilai Ujian B: ";cin >> nb;
            if (nb>90){
                cout  << "Perwakilan ditemukan!";
                break;
            }
            cout << "Murid belum memenuhi syarat."<<endl;
            n+=1;
        }else {
            cout << "Murid dilewati."; cout << endl;
            n+=1;
        }
    }
    cout << "\n\nProgram Berhenti."<<endl;

}