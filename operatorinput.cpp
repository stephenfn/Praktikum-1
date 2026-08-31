#include <iostream>

using namespace std;

int main(){
    double phi = 3.14;
    float r;
    float t;

    cout << "Masukan Jari-jari : ";
    cin >> r;
    cout << "Masukan Tinggi : ";
    cin >> t;   
    cout << "Volume Kerucut : " << (phi * r * r * t)/3<< endl;

}