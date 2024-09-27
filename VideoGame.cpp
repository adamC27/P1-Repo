#include "VideoGame.h"

VideoGame::VideoGame(Text* tl, Text* dv, Text* pb, int yr)
{
    title = new Text(tl->getText());
    developer = new Text(dv->getText());
    publisher = new Text(pb->getText());
    year = yr;
}
//Video Game Constructor

 VideoGame::~VideoGame()
{
    delete title;
    delete developer;
    delete publisher;
    cout << "\nVideoGame destructor: Released memory for VideoGame object.\n";
}
//Video Game Destructor

void VideoGame::printVideoGameDetails()
{
    int gamenum; //variable for keeping track of game number

    cout << "\n\n                 ------- Video Game " << gamenum + 1 << " ------- ";
    cout << "\n         Game Title: ";
    title->displayText();
    cout << "\n         Developer: ";
    developer->displayText();
    cout << "\n         Publisher: ";
    publisher->displayText();
    cout << "\n         Year: " << year;

    gamenum += 1; //increment num to keep track of each number
}
//prints info for each vide game 

void VideoGame::printVideoGameDetailsToFile(fstream& outfile)
{
    outfile << title->getText() << "\n";
    outfile << developer->getText();
    outfile << "\n" << publisher->getText();
    outfile << "\n" << year << "\n";
}
//prints game info to outfile

Text* VideoGame::getVideoGameTitle()
{
    return title;
}
