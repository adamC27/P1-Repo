#ifndef VIDEOGAMELIBRARY_H
#define VIDEOGAMELIBRARY_H

#include "VideoGame.h"

class VideoGameLibrary
{
    public: 
    VideoGameLibrary(int maxSize);
    ~VideoGameLibrary();
    void addVideoGametoArray();
    void removeVideoGameFromArray();
    void loadVideoGameFromFile(const char* filename);
    void saveToFile(const char *filename);
    void displayVideoGames();


    private:
    VideoGame* game;
    int maxGames;
    int numGames;
};





#endif