#include <iostream>

using namespace std;

int main()
{
    int choice;
    char filename[100];

    VideoGameLibrary* library = new VideoGamelibrary();

    do{
        cout << "What would you like to do?" << endl;
        cout << "1. load video games from a file" << endl;
        cout << "2. Save video games to a file" << endl;
        cout << "3. Add a video game" << endl;
        cout << "4. Remove a video game" << endl;
        cout << "5. Display Video Games" << endl;
        cout << "6. Add Video Game Review" << endl;
        cout << "7. Remove Video Game Review" << endl;
        cout << "8. Display reviews" << endl;
        cout << "Choose 1 - 8: ";
        cin  >> choice;

            switch (choice)
            {
                case 1: 
                    {
                       void loadVideoGameFromFile(const char* filename);
                    }
                    break;
                
                case 2:
                    {
                        void saveToFile(const char *filename);
                    }
                    break;
                
                case 3:
                    {
                        void addVideoGametoArray();
                    }
                    break;
                
                case 4:
                    {
                        void removeVideoGameFromArray();
                    }
                    break;
                
                case 5:
                    {
                        void displayVideoGames();
                    }
                    break;
                case 6:
                    {

                    }
                    break;
                case 7:
                    {

                    }
                    break;
                case 8:
                    {

                    }
                    break;
            }
    } while(choice != 8);

    return 0;
           
}