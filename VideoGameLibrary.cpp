#include "VideoGameLibrary.h"

void VideoGameLibrary::resizeVideoGameArray()
{
    maxGames = maxGames * 2;
    VideoGame** newArr = new VideoGame* [maxGames];
    //this will double the size and make a new array

    for (int i = 0; i < numGames; i++)
    {
        newArr[i] = videoGamesArray[i];
    }

    delete [] videoGamesArray;

    videoGamesArray = new VideoGame* [maxGames];
    //makes new array to move pointers over

    for (int x = 0; x < numGames; x++)
    {
        videoGamesArray[x] = newArr[x];
    }
    //increases array size for the number of games

    delete [] newArr;
}

VideoGameLibrary::VideoGameLibrary(int g)
{
    maxGames = g;
    videoGamesArray = new VideoGame* [maxGames];
    numGames = 0;
    //sets the current amount of games to zero for new array
}

VideoGameLibrary::~VideoGameLibrary()
{
    for (int i = 0; i < numGames; i++)
    {
        delete videoGamesArray[i];
    }
    delete [] videoGamesArray;
    //deletes all memory of the array
}

void VideoGameLibrary::addVideoGametoArray()
{
    int yearNum;
    char* holder = new char[10000]; 
    //holds large string of 10000 characters if needed

    cin.ignore();

    cout << "\nTitle: ";
    cin.getline(holder, 10000);
    Text* til = new Text(holder);

    cout << "\nDeveloper: ";
    cin.getline(holder, 10000);
    Text* dev = new Text(holder);

    cout << "\nPublisher: ";
    cin.getline(holder, 10000);
    Text* pub = new Text (holder);

    cout << "\nYear: ";
    cin >> yearNum;

    VideoGame *nGames = new VideoGame(til, dev, pub, yearNum);
    //makes completely new game and game info

    if (numGames == maxGames)
    {
        cout << "Resize array from " << maxGames / 2 << " to " << maxGames << "\n";
        resizeVideoGameArray(); 
    }
    //checks if a bigger size is needed for the array

    videoGamesArray[numGames] = nGames;

    numGames++;

    delete [] holder;
}

void VideoGameLibrary::displayVideoGames()
{
    for (int i = 0; i < numGames; i++)
    {
        videoGamesArray[i]->printVideoGameDetails();
    }
    //calls each function through array
}

void VideoGameLibrary::displayVideoGameTitles()
{
    for (int i = 0; i < numGames; i++)
    {
        cout << "\n";
        videoGamesArray[i]->getVideoGameTitle()->displayText();
    }
}
//prints title of each game through the array

void VideoGameLibrary::loadVideoGameFromFile(const char* file)
{
    fstream infile;
    int yrs;
    int x; //for counter

    char* hldr = new char[10000];
    infile.open(file, ios::in); //open file
    if(!infile)//checks if file was opened or not
    {
        cout << "Unable to open file";
        return;
    }

    while(!infile.eof())
    {
        if(infile.good())
        {
            infile.getline(hldr, 10000);
            Text* titles = new Text(hldr);

            infile.getline(hldr, 10000);
            Text* developr = new Text(hldr);
           
            infile.getline(hldr, 10000);
            Text* publishr = new Text(hldr);

            infile >> yrs;

            infile.ignore();

            VideoGame* nGM = new VideoGame(titles, developr, publishr, yrs);
            //makes new video game object with the data just taken in

            if(numGames == maxGames)
            {
                resizeVideoGameArray();
                cout << "\nResizing array from " << maxGames / 2 << " to " << maxGames << "\n";
            }
            //array can be resized if needed

            videoGamesArray[numGames] = nGM;
            x++;
            numGames++;

            cout << "\n" << nGM->getVideoGameTitle()->getText() << " was added successfully";
        }
    }
    cout << "\n" << x << " video games were read from the file and added to your VideoGame library";
   
    infile.close();
}

void VideoGameLibrary::removeVideoGameFromArray()
{
    int opt;

    if (numGames < 1)
    {
        cout << "\nThere must be at least one video game in the library";
        return;
    }
    //stops if not a game in library

    displayVideoGameTitles();

    cout << "\nChoose a video game to be removed between 1 and " << numGames << ": ";
    cin >> opt;

    if (opt < 1 || opt > numGames)
    {
        do
        {
            cout << "\nIvalid. Enter between 1 and " << numGames << ": ";
            cin >> opt;
        } while (opt < 1 || opt > numGames);
    }
    //checks for valid input

    opt = opt - 1;

    for (int i = opt; i < numGames - 1; i++)
    {
        videoGamesArray[i] = videoGamesArray[i+1]; //deletes selected title
    }
    //moves all of the games back one since one is being deleted

    cout << "\nVideo Game Title has been successfully deleted";
    numGames--;
}

void VideoGameLibrary::saveToFile(const char* file)
{
    fstream outfile;
    outfile.open(file, ios::out);

    for (int i = 0; i < numGames; i++)
    {
        videoGamesArray[i]->printVideoGameDetailsToFile(outfile);
    }
    outfile.close();
    //opens file and prints the details to file

    cout << "\nAll video Games have been printed to " << file << "\n";
}