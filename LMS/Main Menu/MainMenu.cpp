#include <iostream>
#include <string>
#include <time.h>
#include <iomanip>
#include "../Functions.h"

using namespace std;

void mainMenu(string* books, string* authorname, bool* available, int* books_arr_size, int* total_arr_size)
{

    int option = 0;

    while (option != 5)
    {

        cout << setfill('-') << setw(85) << "" << setfill(' ') << endl;

        cout << "\nMain Menu\n"
            << endl;

        cout << "1. List Books." << endl
            << "2. Search Books." << endl
            << "3. Add Books." << endl
            << "4. Lend Book." << endl
            << "5. exit." << endl;

        cout << "\nChoose one of em with sr.no : ";

        cin >> option;

        // Function you made individually are going to be used in these cases

        switch (option)
        {
        case 1:
            // books Function
            listBooks(books, authorname, books_arr_size, total_arr_size);
            break;

        case 2:
            // Search Function
            search(books, authorname, available, total_arr_size);
            break;

        case 3:

            addingBooks(books, authorname, available, books_arr_size, total_arr_size);
            break;

        case 4:

            // Lend Function
            search(books, authorname, available, total_arr_size);
            break;

        case 5:

            // exit
            cout << "\nYou are leaving library\n" << endl;
            break;
        default:

            cout << "\nPlease choose the given option with refrence of sr.no" << endl;
            break;
        }
    }
}
