#include <iostream>
using namespace std;

int main() {
    int n;
    float total = 0;
    cin >> n;
    
    // Array biasa ukurannya dikunci mati di 100.
    // Kalau user input nilai 'n' lebih dari 100 (misal n = 150),
    // program bakal crash / error karena maksa masukin data ke memori yang nggak ada.
    int biasa[100]; 
    
    // Array dinamis yang ukurannya menyesuaikan input 'n' dari user.
    int *dinamis = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> dinamis[i];
        
        // Akan error di baris bawah ini kalau n > 100
        biasa[i] = dinamis[i]; 
        
        total += dinamis[i];
    }

    // Mencari rata-rata
    cout << total / n << "\n";

    // Memori dinamis dibebaskan kembali, TIDAK ADA LEAK.
    delete[] dinamis;
    // Ga harus pakai nullptr, karena sehabis ini program selesai. Jadi memorinya akan dibersihkan sendiri. Kecuali masih akan berjalan suatu program lagi dibawahnya.
    return 0;
}
//Soal 1 
//Menurut saya sendiri, array dinamis lebih baik karena mengikuti input an user sendiri. Jadi bisa menyesuaikan sesuai keinginan, tidak ada patokan batasnya.

//soal 2
//Program akan error, karena ketika n = 150, array biasa tidak memiliki ruang yang cukup. Karena batas tertinggi ruang untuk array biasa adalah 100 bukan 150.

//soal 3
//Bisa membuat memory leak ketika lupa menghapus di akhir program.
//bisa membuat proses menjadi lebih berat dan membuat performa menurun.
//Bisa membuat pemborosan memori di heap.