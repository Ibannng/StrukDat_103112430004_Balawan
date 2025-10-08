#include <iostream>
using namespace std;

int main() {
    string nama[5];
    float nilai[5][3];
    float rata[5];
    int indeksTerbaik = 0;

    // Input nama dan nilai
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan nama mahasiswa ke-" << i + 1 << ": ";
        cin >> nama[i];
        float total = 0;
        for (int j = 0; j < 3; j++) {
            cout << "  Masukkan nilai mata kuliah ke-" << j + 1 << ": ";
            cin >> nilai[i][j];
            total += nilai[i][j];
        }
        rata[i] = total / 3;
    }

    // Cari indeks mahasiswa dengan rata-rata tertinggi
    for (int i = 1; i < 5; i++) {
        if (rata[i] > rata[indeksTerbaik]) {
            indeksTerbaik = i;
        }
    }

    // Tampilkan hasil
    cout << "\nData Mahasiswa dan Nilainya:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Nama: " << nama[i] << endl;
        cout << "Nilai: ";
        for (int j = 0; j < 3; j++) {
            cout << nilai[i][j] << " ";
        }
        cout << "\nRata-rata: " << rata[i];
        if (i == indeksTerbaik) {
            cout << " <-- TERBAIK";
        }
        cout << "\n\n";
    }

    return 0;
}
