#include "Singlylist.h"
#include "Singlylist.cpp"
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    list L;
    address P;

    createList(L);
    cout << "Mengisi list menggunakan insertLast" << endl;

    //Mengisi list sesuai urutan
    P = alokasi(9);
    insertLast(L, P);
    P = alokasi(12);
    insertLast(L, P);
    P = alokasi(8);
    insertLast(L, P);
    P = alokasi(0);
    insertLast(L, P);
    P = alokasi(2);
    insertLast(L, P);

    cout << "Isi list: ";
    printInfo(L);

    system("pause");
    return 0;
}