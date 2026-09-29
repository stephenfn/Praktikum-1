#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

void header (){
    for (int x=1;x<52;x++){
        cout <<  "=";
    }
    cout << "\nHai Developer! Silahkan masukan data karakter.\n";
    for (int x=1;x<52;x++){
        cout << "=";
    }
    cout << "\n";
}
void namaa (string& nama){
    cout << left << setw(32) << "Masukan nama karakter " <<  ": " ; getline (cin,nama);
}
void attacks (int& attack){
    cout << left << setw(32) <<  "Masukan ATK " << ": "; cin >> attack;
}
void critra (float& critr){
    cout << left << setw(32) <<  "Masukan Crit Rate " << ": "; cin >> critr;

}
void critda (float& critd){
    cout << left << setw(32) <<  "Masukan Crit Damage " << ": "; cin >> critd;
}
void inputa (char& tipe){
    cin.ignore();
    cout << left << setw(32) <<  "Masukan tipe kelas "  << ": ";cin >> tipe;
    toupper(tipe);
    if (tipe == 'A' || tipe == 'W' || tipe == 'M'){ 
        return;
    } else { 
        inputa(tipe);
    }
}

void akhiran (){
    for (int x=1;x<52;x++){
        cout << "=" << endl;
    }
}
int main (){
    string nama;
    int attack;
    float critr;
    float critd;
    char tipe;
    header();
    namaa(nama);
    attacks(attack);
    critra(critr);
    critda(critd);
    inputa(tipe);
    akhiran();
    return 0;
}