#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include <iostream>
#include <cstring>
#include <fstream>
#include "Text.h"
using namespace std;


class VideoGame
{
    public:
    VideoGame(Text* , Text* , Text*, int);
    ~VideoGame();
    Text* getVideoGameTitle();
    void printVideoGameDetails();
    void printVideoGameDetailsToFile(fstream&);

    private:
    Text* title;
    Text* developer;
    Text* publisher;
    int year; 
};

#endif