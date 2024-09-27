#ifndef VIDEOGAMELIBRARY_H
#define VIDEOGAMELIBRARY_H

#include <iostream>
#include <fstream>
#include <cstring>
#include "VideoGame.h"
using namespace std;




class VideoGameLibrary
{
    public: 
    void resizeVideoGameArray();
    VideoGameLibrary(int maxSize);
    ~VideoGameLibrary();
    void addVideoGametoArray();
    void removeVideoGameFromArray();
    void loadVideoGameFromFile(const char* filename);
    void saveToFile(const char *filename);
    void displayVideoGames();
    void displayVideoGameTitles();


    private:
    VideoGame** videoGamesArray;
    int maxGames;
    int numGames;
};





#endif