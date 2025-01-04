#include <iostream>
#include <string>
#include <istream>
#include <iomanip>
#include "../Functions.h"

using namespace std;

void byAuthor(string* books, string* authorName, bool available[], int* arr_size)
{

    string authorname;

    cout << "\nEnter the name of Author : ";

    getline(cin >> ws, authorname);

    for (int i = 0; i < *arr_size; i++)
    {
        if (authorname == authorName[i])
        {
            if (available[i])
            {
                cout << "\nYes, \"" << books[i] << "\" Written by " << authorname << " is currently available." << endl;
                
                cout << "\nDo you want to lend this book\n"
                    << endl;

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
                cout << "\nSorry, \"" << books[i] << "\" written by " << authorname << " is borrowed by someone else." << endl;
                break;
            }
        }

        if (i == *arr_size - 1)

        {
            cout << "\nSorry, there is no book written by " << authorname << " available in our Library." << endl;
        }
    }
}
