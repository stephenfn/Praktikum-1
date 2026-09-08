#include <iostream>
using namespace std;

int main () {
    int a;
    string b;
    char publish;
    cout << "Masukan nilai anda : "; cin>>a;
    if (a>=65){
        b="Lulus";
    }
    else {
        b="Tidak Lulus";
    }
    if (a>=80){
        cout << "Nilai anda : " << a << " " << b << " dan tergolong nilai mutu A";
    }
    else if (68<=a && a<80){
        cout << "Nilai anda : " << a << " " << b << " dan tergolong nilai mutu B";
    }
    else if (65<=a && a<68){
        cout << "Nilai anda : " << a << " " << b << " dan tergolong nilai mutu C";
    }
    else if (56<=a && a<65){
        cout << "Nilai anda : " << a << " " << b << " dan tergolong nilai mutu C";
    }
    else if (45<=a && a<56){
        cout << "Nilai anda : " << a << " " << b << " dan tergolong nilai mutu D";
    }
    else{
        cout << "Nilai anda : " << a << " " << b << " dan tergolong nilai mutu E";
    }

    cout << "\n\n\nApakah kalian mau publish nilai (y/n) :";
    cin >> publish;

    return 0;
}