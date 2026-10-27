#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukan Ukuran : ";cin >> n;
    for (int i = n / 2; i <= n; i += 2) {
        for (int j = 1; j < n - i; j += 2) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        cout << "\n";
    }
    for (int i = n; i > 0; i--) {
        for (int j = i; j < n; j++) cout << " ";
        for (int j = 1; j <= i * 2; j++) cout << "*";
        cout << "\n";
    }

    return 0;
}