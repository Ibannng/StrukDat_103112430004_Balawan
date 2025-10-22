#include "Playlist.h"

// Inisialisasi playlist kosong
void createPlaylist(Playlist &P) {
    P.first = NULL;
}

// Buat node lagu baru
Lagu* alokasi(string judul, string penyanyi, float durasi) {
    Lagu* L = new Lagu;
    L->judul = judul;
    L->penyanyi = penyanyi;
    L->durasi = durasi;
    L->next = NULL;
    return L;
}

// Tambah lagu di awal
void insertFirst(Playlist &P, Lagu* L) {
    L->next = P.first;
    P.first = L;
}

// Tambah lagu di akhir
void insertLast(Playlist &P, Lagu* L) {
    if (P.first == NULL) {
        insertFirst(P, L);
    } else {
        Lagu* temp = P.first;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = L;
    }
}

// Tambah lagu setelah lagu ke-3
void insertAfter3(Playlist &P, Lagu* L) {
    Lagu* temp = P.first;
    int count = 1;
    while (temp != NULL && count < 3) {
        temp = temp->next;
        count++;
    }
    if (temp != NULL) {
        L->next = temp->next;
        temp->next = L;
    } else {
        cout << "Playlist kurang dari 3 lagu!" << endl;
    }
}

// Hapus lagu berdasarkan judul
void deleteByJudul(Playlist &P, string judul) {
    Lagu *temp = P.first, *prev = NULL;
    while (temp != NULL && temp->judul != judul) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Lagu dengan judul \"" << judul << "\" tidak ditemukan!" << endl;
        return;
    }

    if (prev == NULL) {
        P.first = temp->next;
    } else {
        prev->next = temp->next;
    }

    delete temp;
    cout << "Lagu \"" << judul << "\" berhasil dihapus.\n";
}

// Menampilkan seluruh lagu dalam playlist
void printPlaylist(Playlist P) {
    if (P.first == NULL) {
        cout << "Playlist kosong!\n";
    } else {
        Lagu* temp = P.first;
        int i = 1;
        cout << "\n=== Daftar Lagu dalam Playlist ===\n";
        while (temp != NULL) {
            cout << i++ << ". Judul   : " << temp->judul << endl;
            cout << "   Penyanyi: " << temp->penyanyi << endl;
            cout << "   Durasi  : " << temp->durasi << " menit\n";
            temp = temp->next;
        }
        cout << endl;
    }
}
