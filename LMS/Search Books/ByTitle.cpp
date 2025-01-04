#include <iostream>
#include <string>
#include <istream>
#include <iomanip>
#include "../Functions.h"

using namespace std;

void byTitle(string* books, string* authorName, bool available[], int* arr_size)
{

    string book;

    cout << "\nEnter the title of book : ";

    getline(cin >> ws, book);

    for (int i = 0; i < *arr_size; i++)
    {

        if (book == books[i])
        {

            if (available[i])
            {

                cout << "\nYes, \"" << book << "\" is currently available" << endl;

                cout << "\nDo you want to lend this book\n" << endl;

                cout << "1. Yes" << endl
                     << "2. No" << endl;

                int lend_option;

                cin >> lend_option;

                int index = i;

                if (lend_option == 1)
                {

                    lend(available, books, index);
                }
                
                break;
            }
            else
            {

                cout << "\nSorry, \"" << book << "\" is borrowed by someone else.\n" << endl;;

                break;
            }
        }

        if (i == *arr_size - 1)

        {

            cout << "\nSorry, \"" << book << "\" is not available in our library.\n" << endl;
        }
    }
}
