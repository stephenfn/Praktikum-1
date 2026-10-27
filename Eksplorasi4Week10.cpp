#include <iostream>
using namespace std;

int main (){
    for (int i = 0; i < 2000; i++){
        // Mengalokasikan array berisi 250.000 integer di heap setiap iterasi.
        // Karena tidak ada perintah 'delete[] p;', memori ini tidak pernah dibebaskan.
        int *p = new int[250000];

        for (int j=0 ; j < 250000; j++) p[j] = j;
        cout << "Iterasi " << i << " | alamat: " << p << endl;
        
        // Saat loop ini berulang, variabel pointer 'p' terganti, 
        // tapi memori lama yang ditunjuk sebelumnya tetap nyangkut dan tidak bisa dipakai lagi (bocor).
    }
    
    // akan terjadi pemborosan RAM sampai program ditutup atau crash.
    cin.get();
    return 0;
}
