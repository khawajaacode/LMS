#include <iostream>
#include <string>
#include <time.h>
#include "../Functions.h"

using namespace std;

bool login(int usersIDs[], int size)
{

    int id;

    bool returning = 0;

    cout << "\nPlease enter your id : ";

    cin >> id;

    for (int i = 0; i < size; i++)
    {

        if (id == usersIDs[i])
        {

            cout << "\nCorrect ID" << endl;

            returning = 1;

            break;
        }

        else if (i == size - 1)
        {

            cout << "\nyou have entered wrong id\n"
                << endl;

            cout << "If you want to make account please press \"1\"  " << endl;

            cout << "If you want to retry please press \"2\" " << endl;

            cout << "\nPlease enter your choice : ";

            int accountchoice;

            cin >> accountchoice;

            if (accountchoice == 1)
            {

                signup(usersIDs, size);

                return 1;
            }
            else if (accountchoice == 2)
            {

                returning = 0;
            }
            
        }
    }

    return returning;
}
