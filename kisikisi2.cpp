#include <iostream>
using namespace std;

void input (int& t){
    cout << "Masukan tinggi segitiga siku siku : "; cin >> t;
}

void segitiga (int t){
    for (int i=1; i <=t;i++){
        for (int j=1; j <= (i*2)-1;j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main (){
    int t;
    input(t);
    segitiga(t);
    cout << endl;
}