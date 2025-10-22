#include <iostream>
using namespace std;

// Struktur data mahasiswa
struct Mahasiswa {
    string nama;
    string nim;
    float uts, uas, tugas, nilaiAkhir;
};

// Fungsi untuk menghitung nilai akhir
float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

int main() {
    Mahasiswa data[10];
    int jumlah;

    cout << "Masukkan jumlah mahasiswa (max 10): ";
    cin >> jumlah;

    if (jumlah > 10) {
        cout << "Jumlah melebihi batas maksimum (10)!" << endl;
        return 0;
    }

    // Input data mahasiswa
    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama   : ";
        cin.ignore();
        getline(cin, data[i].nama);
        cout << "NIM    : ";
        cin >> data[i].nim;
        cout << "Nilai UTS  : ";
        cin >> data[i].uts;
        cout << "Nilai UAS  : ";
        cin >> data[i].uas;
        cout << "Nilai Tugas: ";
        cin >> data[i].tugas;

        data[i].nilaiAkhir = hitungNilaiAkhir(data[i].uts, data[i].uas, data[i].tugas);
    }

    // Tampilkan data mahasiswa
    cout << "\n=== Data Mahasiswa ===\n";
    for (int i = 0; i < jumlah; i++) {
        cout << "\nNama   : " << data[i].nama;
        cout << "\nNIM    : " << data[i].nim;
        cout << "\nUTS    : " << data[i].uts;
        cout << "\nUAS    : " << data[i].uas;
        cout << "\nTugas  : " << data[i].tugas;
        cout << "\nNilai Akhir : " << data[i].nilaiAkhir << endl;
    }

    return 0;
}
