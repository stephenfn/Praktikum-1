/*
Nama Program : Membuat Character
Nama : Stephen Tio Fransisko Njo
NPM : 140810260089
Kelas : C
Tanggal : 22 September 2026

Deskripsi :
Program ini adalah program pembuatan character yang berisi data nama, attack, crit rate, crit damage, dan tipe character tersebut.
program ini juga bisa menghitung total attack berdasarkan syarat syarat tertentu.
*/

#include <iostream> //Libary normal C++
#include <iomanip> //Libary untuk menggunakan fungsi setw dan left, untuk membuat table yang rapi
#include <cctype> //libary untuk menggunakan toupper atau otomatis kapital
using namespace std; //membuat seluruh program cout, endlin, cin tidak perlu menggunakan std::

//penggunaan left untuk membuat program rata / dimulai dari kiri
//penggunaan setw(n) untuk membuat panjang spasi dari 1 baris. dengan n = spasi

void header (){ //void untuk membuat header awal.
    for (int x=1;x<52;x++){ //print = sebanyak 52x untuk header awal
        cout <<  "=";
    }
    cout << "\nHai Developer! Silahkan masukan data karakter.\n";
    for (int x=1;x<52;x++){//print = sebanyak 52x untuk header awal
        cout << "=";
    }
    cout << "\n";
}
void namaa (string& nama){ //cout nama karakter, menggunakan getline agar bisa mengambil nama lebih dari 1 kata. Menggunakan pass by referance agar nilai aslinya berubah
    cout << left << setw(32) << "Masukan nama karakter " <<  ": " ; getline (cin,nama);
}
void attacks (int& attack){//cout atk, dan menggunakan cin untuk mengambil attack tipe int. Menggunakan pass by referance agar nilai aslinya berubah
    cout << left << setw(32) <<  "Masukan ATK " << ": "; cin >> attack;
}
void critra (float& critr){//cout crit rate, dan menggunakan cin untuk mengambil crit rate dengan tipe float  Menggunakan pass by referance agar nilai aslinya berubah
    cout << left << setw(32) <<  "Masukan Crit Rate " << ": "; cin >> critr;

}
void critda (float& critd){//cout crit damage, dan menggunakan cin untuk mengambil crit damage dengan tipe float.  Menggunakan pass by referance agar nilai aslinya berubah
    cout << left << setw(32) <<  "Masukan Crit Damage " << ": "; cin >> critd;
}
void inputa (char& tipe){//cout tipe kelas, dan menggunakan cin untuk mengambil tipe kelas dengan tipe data char.  Menggunakan pass by referance agar nilai aslinya berubah
    cin.ignore();//cin ignore ini digunakan untuk menghapus enter dari cin
    cout << left << setw(32) <<  "Masukan tipe kelas "  << ": ";cin >> tipe;
    tipe = toupper(tipe);//penggunaan toupper untuk membuat huruf yang dimasukan otomatis kapital. Jika dimasuk w akan otomatis jadi W
    if (tipe == 'A' || tipe == 'W' || tipe == 'M'){ //syarat IF, jika tipenya sudah benar A/W/M, otomatis akan menjalankan fungsi return. menyelesaikan void.
        return;
    } else { 
        inputa(tipe);//jika condition dari ifnya salah, akan memanggil ulang void inputa. Akan loop sampai input tipenya A/W/M/a/w/m
    }
}

void akhiran (){//void untuk membuat akhiran atau bagian bawah, dengan cara print = sebanyak 52x
    for (int x=1;x<52;x++){
        cout << "=";
    }
}

void output (string nama,int attack,float critr,float critd,char tipe){//void untuk ngeprint output atau hasil akhir statistik dari character.
    cout << left << setw(32) << "\nNama Karakter " << " : " << nama << endl; //mengeluarkan nama
    cout << left << setw(32) << "ATK " << ": " << attack << endl; //mengeluarkan ATK
    cout << left << setw(32) << "Crit Rate " << ": " << critr << "%" << endl; //mengeluarkan Crit Rate
    cout << left << setw(32) << "Crit Damage " << ": " << critd << endl;// mengeluarkan Crit Damage
    switch (tipe){
        case 'A' : //Jika tipe yang dimasukan adalah A, maka akan print Archer
        cout << left << setw(32) << "Tipe Kelas " << ": " << "Archer" << endl;
        break;
        case 'W' : //jika tipe yang dimasukan adalah W, maka akan print Warrior
        cout << left << setw(32) << "Tipe Kelas " << ": " << "Warrior" << endl;
        break;
        default : //jika bukan w atau a yang psti adalah M maka akan print mage.
        cout << left << setw(32) << "Tipe Kelas " << ": " << "Mage" << endl;
    }
}
void hitungcrit(float critr, int attack, float critd,char tipe){//void untuk menghitung damage critikal, berdasarkan syarat tertentu
    double tot; //declare dulu tipe data double, karna kita gatau yakan damagenya sebanyak apaa
    if (critr>=80){//syarat ketika critratenya >= 80 , maka damage hasilnya tinggal atk * crit damage.
        float tot = attack * critd; //menggunakan float diawal, biar perhitungannya akurat.
    } else {
        switch (tipe){ //ini khusus jika critratenya di bawah 80% yaitu 79% kebawah
            case 'W' : //Syarat warior, ketika tipenya warior attacknya akan di x2. 
            float tot = attack *2;
            break;
            default : 
            float tot = attack *1.5;//syarat untuk mage dan archer, attacknya di x1.5
            
        }
    }
    cout << left << setw(32) << "\nHasil Perhitungan Crit Damage " << ": " << tot << endl;//untuk mengeluarkan perhitungan akhir, atau total damage


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
    output(nama,attack,critr,critd,tipe);
    akhiran();
    hitungcrit(critr, attack, critd,tipe);
    

    return 0;
}