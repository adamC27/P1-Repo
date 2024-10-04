#ifndef VIDEOGAMEREVIEW_H
#define VIDEOGAMEREVIEW_H

#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

class VideoGameReview
{
public:
	void loadReviewFromFile();
	void WriteToFile();

private:
	string review;
	string rating;
};

#endif