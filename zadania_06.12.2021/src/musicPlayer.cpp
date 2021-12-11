#include "../include/musicPlayer.h"
#include<iostream>
using namespace std;

/**
 * funkcje dla klasy Song, bedzie ona wykorzystywana w kolejnej klasie Playlist
 */
Song::Song(const string &name)
:SongName(name)
{}

void Song::print() {
    cout<<SongName<<endl;
}

/**
 * funkcje dla klasy Playlist
 */

void Playlist::print()
{
    for(int i=0; i < songs.size(); i++)
    {
        cout<<i<<" ";
        songs[i]->print();
    }
}

void Playlist::addMusic(Song *song)
{
    songs.push_back(song);
}

void Playlist::delMusic()
{
    songs.pop_back();
}





