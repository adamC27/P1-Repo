#include <iostream>
#include "VideoGameLibrary.h"
#include "VideoGameReview.h"

using namespace std;

int main()
{
    int choice;
    char filename[100];
    int maxSize;

    cout << "What is the maximum size of your library? ";
    cin >> maxSize;
    cout << endl;
    
    VideoGameLibrary* library = new VideoGameLibrary (maxSize);
    VideoGameReview Review;

    do{
        cout << "\n\nWhat would you like to do?" << endl;
        cout << "1. Load video games from a file" << endl;
        cout << "2. Save video games to a file" << endl;
        cout << "3. Add a video game" << endl;
        cout << "4. Remove a video game" << endl;
        cout << "5. Display Video Games" << endl;
        cout << "6. Add Video Game Review" << endl;
        cout << "7. Display reviews" << endl;
        cout << "8. Remove ALL games and END program" << endl;
        cout << "Choose 1 - 8: ";
        cin  >> choice;

            switch (choice)
            {
                case 1: 
                    {
                        cin.ignore();
                        cout << "\nWhat is the name of the file you want to load from? ";
                        cin.getline(filename, 100);
                        library->loadVideoGameFromFile(filename);
                    }
                    break;
                
                case 2:
                    {
                        cin.ignore();
                        cout << "\nWhat is the name of the file you want to save to? ";
                        cin.getline(filename,100);
                        library->saveToFile(filename);
                    }
                    break;
                
                case 3:
                    {
                        library->addVideoGametoArray();
                    }
                    break;
                
                case 4:
                    {
                        library->removeVideoGameFromArray();
                    }
                    break;
                
                case 5:
                    {
                        library->displayVideoGames();
                    }
                    break;
                case 6:
                    {
                        cin.ignore();
                        Review.WriteToFile();
                    }
                    break;
                case 7:
                    {
                        Review.loadReviewFromFile();
                    }
                    break;
            }
    } while(choice != 8);

    if(choice == 8)
    {
        delete library;
        return 0;
    }

    return 0;
           
}
