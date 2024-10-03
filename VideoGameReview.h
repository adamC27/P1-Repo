#ifndef VIDEOGAMEREVIEW_H
#define VIDEOGAMEREVIEW_H

#include <iostream>
#include <fstream>
#include <cstring>
#include "VideoGameReview.h"
using namespace std;

class VideoGameReview
{
    public:
    void loadReviewFromFile(const char* filename);
    void saveReviewToFile(const char *filename);
    void displayVideoGames();
 
};

#endif