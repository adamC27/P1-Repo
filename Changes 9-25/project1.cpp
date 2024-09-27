#include <iostream>

using namespace std;

int main()
{
    int choice;
    char filename[100];

    VideoGameLibrary* library = new VideoGamelibrary();

    do{
        cout << "What would you like to do?" << endl;
        cout << "1. Load video games from a file" << endl;
        cout << "2. Save video games to a file" << endl;
        cout << "3. Add a video game" << endl;
        cout << "4. Remove a video game" << endl;
        cout << "5. Display all video games" << endl;
        cout << "6. Remove all video games from this libraru and end program" << endl;
        cout << "Choose 1 - 6: ";
        cin  >> choice;

            switch (choice)
            {
                case 1: 
                    {
                        cout << "Enter the filename: ";
                        cin >> filename;
                    }
                    break;
                
                case 2:
                    {

                    }
                    break;
                
                case 3:
                    {

                    }
                    break;
                
                case 4:
                    {

                    }
                    break;
                
                case 5:
                    {

                    }
                    break;
            }
    } while(choice != 6);

    return 0;
           
}