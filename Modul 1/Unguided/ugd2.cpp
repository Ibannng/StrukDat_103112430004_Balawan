#include <iostream>
using namespace std;

string satuan[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};

int main() {
    int angka;
    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "Angka di luar jangkauan!" << endl;
    } else if (angka == 100) {
        cout << "seratus" << endl;
    } else if (angka < 10) {
        cout << satuan[angka] << endl;
    } else if (angka < 20) {
        if (angka == 10)
            cout << "sepuluh" << endl;
        else if (angka == 11)
            cout << "sebelas" << endl;
        else
            cout << satuan[angka % 10] + " belas" << endl;
    } else {
        int puluh = angka / 10;
        int sisa = angka % 10;

        if (sisa == 0)
            cout << puluhan[puluh] << endl;
        else
            cout << puluhan[puluh] + " " + satuan[sisa] << endl;
    }

    return 0;
}
