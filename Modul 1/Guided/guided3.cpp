#include <iostream>
#include <string>
using namespace std;


struct Mahasiswa
{
    string nama;
    string NIM;
};

int main()
{
    Mahasiswa mhs;
    // mhs.nama = "balawan";
    // mhs.NIM = "103112430004";

    cout << "input nama : ";
    getline(cin, mhs.nama);
    cout << "input NIM  : ";
    cin >> mhs.NIM;

    cout << "nama : " << mhs.nama << endl 
         << "NIM  : " << mhs.NIM;
}