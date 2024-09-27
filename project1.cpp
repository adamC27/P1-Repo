#include <iostream>

using namespace std;

int main()
{
    int choice;
    char filename[100];

    VideoGameLibrary* library = new VideoGamelibrary();

    do{
        cout << "What would you like to do?" << endl;
        cout << "1. Print Menu" << endl;
        cout << "2. Save video games to a file" << endl;
        cout << "3. Add an item to your order" << endl;
        cout << "4. Remove an item from your order" << endl;
        cout << "5. Display your order" << endl;
        cout << "6. Checkout" << endl;
        cout << "Choose 1 - 6: ";
        cin  >> choice;

            switch (choice)
            {
                case 1: 
                    {
                        cout << "Here is the Menu";
                        cin >> filename;
                        cout << "Entrees:";
                        cout << "Hamburger: $2.50";
                        cout << "Cheeseburger: $2.90 ";
                        cout << "Bacon Burger: $3.80";
                        cout << "Chicken Sandwhich: $6.65";
                        cout << "Sides:";
                        cout << "French Fries $3.50";
                        cout << "Onion Rings $3.00";
                        cout << "Chicken Fries (8 count) $4.25";
                        cout << "Cookie $1.00";
                        cout << "Drinks:";
                        cout << "Draft non-import Beer $5.00";
                        cout << "Pepsi Products: $2.00";
                    }
                    break;
                
                case 2:
                    {

                    }
                    break;
                
                case 3:
                    {
                        cout << "You have added " << x << " to your order.";
                    }
                    break;
                
                case 4:
                    {
                        cout << "You have removed " << x << " from your order.";
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