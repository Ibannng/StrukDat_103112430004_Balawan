#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    string NIM;
};

int main()
{
    Mahasiswa mhs;
    mhs.nama = "balawan";
    mhs.NIM = "103112430004";

    cout << "nama : " << mhs.nama << endl 
         << "NIM  : " << mhs.NIM;
}