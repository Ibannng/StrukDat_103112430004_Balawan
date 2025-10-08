#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan jumlah elemen: ";
    cin >> N;

    int* arr = new int[N];
    int* p = arr;

    // Input data
    for (int i = 0; i < N; i++) {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> *(p + i);
    }

    int jumlah = 0, maks = *p, min = *p;
    for (int i = 0; i < N; i++) {
        jumlah += *(p + i);
        if (*(p + i) > maks) maks = *(p + i);
        if (*(p + i) < min) min = *(p + i);
    }

    // Output
    cout << "\nJumlah: " << jumlah << endl;
    cout << "Maksimum: " << maks << endl;
    cout << "Minimum: " << min << endl;

    delete[] arr;
    return 0;
}
