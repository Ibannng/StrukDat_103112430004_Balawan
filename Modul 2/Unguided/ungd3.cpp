#include <iostream>
using namespace std;

float hitungRataRata(int arr[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];
    return total / n;
}

void cariNilai(int arr[], int n, int &maks, int &min) {
    maks = arr[0];
    min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maks) maks = arr[i];
        if (arr[i] < min) min = arr[i];
    }
}

int main() {
    int N;
    cout << "Masukkan jumlah siswa: ";
    cin >> N;
    int nilai[N];

    for (int i = 0; i < N; i++) {
        cout << "Nilai siswa ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    float rata = hitungRataRata(nilai, N);
    int maks, min;
    cariNilai(nilai, N, maks, min);

    cout << "\nRata-rata kelas : " << rata << endl;
    cout << "Nilai tertinggi : " << maks << endl;
    cout << "Nilai terendah  : " << min << endl;

    return 0;
}
