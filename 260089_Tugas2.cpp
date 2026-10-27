#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Data hasil pengukuran badan
struct badan{
    float massal;   // massa lemak
    float massao;   // massa otot
};

// Data tanggal pengukuran
struct waktu{
    int tanggal;
    int bulan;
    int tahun;
};

// Profil lengkap: nama + hasil pengukuran + tanggal pengukuran (nested struct)
struct profile{
    string nama;
    badan pengukuranb;
    waktu waktupeng;
};

// Wadah untuk profil hasil simulasi
struct profilesimulasi{
    profile sim;
};

// Mengisi data profil dari input user (pass by reference supaya isinya tersimpan)
void input(profile &prof){
    cout << left << setw(32) << "Nama" << ": "; getline(cin,prof.nama);
    cout << left << setw(32) << "Massa Lemak" << ": "; cin >> prof.pengukuranb.massal;
    cout << left << setw(32) << "Massa Otot"  << ": "; cin >> prof.pengukuranb.massao;
    // Syarat tanggal: input diulang terus selama tanggal kurang dari 1 (0 atau minus) atau lebih dari 14
    do {
    cout << left << setw(32) << "Tanggal" << ": "; cin >> prof.waktupeng.tanggal;
    if (prof.waktupeng.tanggal < 1){
        cout << "Tanggal tidak boleh 0 atau minus" << endl;
    } else if (prof.waktupeng.tanggal > 14){
        cout << "Program ini hanya berlaku sampai tanggal 14" << endl;
    }
    }while (prof.waktupeng.tanggal < 1 || prof.waktupeng.tanggal > 14);
    // Syarat bulan: input diulang terus selama bulan 0 atau minus
    do {
    cout << left << setw(32) << "Bulan" << ": "; cin >> prof.waktupeng.bulan;
    if (prof.waktupeng.bulan < 1){
        cout << "Bulan tidak boleh 0 atau minus" << endl;
    }
    }while (prof.waktupeng.bulan < 1);
    // Syarat tahun: input diulang terus selama tahun 0 atau minus
    do {
    cout << left << setw(32) << "Tahun" << ": "; cin >> prof.waktupeng.tahun;
    if (prof.waktupeng.tahun < 1){
        cout << "Tahun tidak boleh 0 atau minus" << endl;
    }
    }while (prof.waktupeng.tahun < 1);
    cout << endl;
}

// Menampilkan profil saat ini
void profilenow(profile p){
    cout << "=== PROFILE SAAT INI ===" << endl;
    cout << left << setw(32) << "Nama" << ": " << p.nama << endl;
    cout << left << setw(32) << "Massa Lemak" << ": " << p.pengukuranb.massal << endl;
    cout << left << setw(32) << "Massa Otot" << ": " << p.pengukuranb.massao << endl;
    cout << left << setw(32) << "Tgl Pengukuran" << ": " << p.waktupeng.tanggal << "-" << p.waktupeng.bulan << "-" << p.waktupeng.tahun << endl;
    cout << endl;
}

// Menghitung dan menampilkan hasil simulasi 1 minggu kemudian:
// lemak turun jadi 80%, otot naik jadi 150%, tanggal maju 7 hari
void profiles(profile p, profilesimulasi &s){
    cout << "=== HASIL SIMULASI (1 MINGGU KEMUDIAN) ===" << endl;

    // Nama hasil simulasi diberi awalan "Brother " di depan nama asli
    s.sim.nama = "Brother " + p.nama;
    // Tanggal, bulan, dan tahun disalin dari profil asli supaya bulan & tahun tidak kosong
    s.sim.waktupeng = p.waktupeng;

    // Hitung hasil simulasi
    s.sim.pengukuranb.massal = p.pengukuranb.massal * 0.8;   // lemak ngurang 20%
    s.sim.pengukuranb.massao = p.pengukuranb.massao * 1.5;   // otot naik 50%
    s.sim.waktupeng.tanggal = p.waktupeng.tanggal + 7;       // maju 1 minggu

    // Tampilkan hasil simulasi
    cout << left << setw(32) <<  "Nama" << ": "<< s.sim.nama << endl;
    cout << left << setw(32) <<  "Massa Lemak" << ": " << s.sim.pengukuranb.massal << endl;
    cout << left << setw(32) <<  "Massa Otot" << ": " << s.sim.pengukuranb.massao << endl;
    cout << left << setw(32) <<  "Tgl Pengukuran" << ": " << s.sim.waktupeng.tanggal << "-" <<   s.sim.waktupeng.bulan << "-" <<   s.sim.waktupeng.tahun << endl;
}

int main(){
    profile p;              // profil asli dari input user
    profilesimulasi s;      // profil hasil simulasi

    input(p);               // isi data profil
    profilenow(p);          // tampilkan profil saat ini
    profiles(p, s);         // hitung dan tampilkan hasil simulasi
}