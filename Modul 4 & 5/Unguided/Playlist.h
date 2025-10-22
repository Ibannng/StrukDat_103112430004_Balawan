#ifndef PLAYLIST_H_INCLUDED
#define PLAYLIST_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

struct Lagu {
    string judul;
    string penyanyi;
    float durasi;
    Lagu* next;
};

struct Playlist {
    Lagu* first;
};

void createPlaylist(Playlist &P);
Lagu* alokasi(string judul, string penyanyi, float durasi);
void insertFirst(Playlist &P, Lagu* L);
void insertLast(Playlist &P, Lagu* L);
void insertAfter3(Playlist &P, Lagu* L);
void deleteByJudul(Playlist &P, string judul);
void printPlaylist(Playlist P);

#endif
