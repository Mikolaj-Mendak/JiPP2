//
// Created by User on 08.12.2021.
//

#ifndef JIPP_MUSICPLAYER_H
#define JIPP_MUSICPLAYER_H

#include <iostream>
#include <vector>
using namespace std;


class Song{
    string SongName;
public:
    Song() {};
    Song(const string &name);
    void print();
};


class Playlist{
    vector<Song *> songs;
public:
    void addMusic(Song * song);
    void delMusic();
    void print();

};





#endif //JIPP_MUSICPLAYER_H
