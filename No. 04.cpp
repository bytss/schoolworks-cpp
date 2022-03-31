/*
 No. 4 | Programming 1 Finals
 */

#include <iostream>

using namespace std;

int main()
{
    string name;

    cout << "Enter your First Name: ";
    cin >> name;

    for (int i = 0; i < name.size(); i++)
    {
        // loop for spaces
        for(int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        // print name at left position

        if(i != name.size() - 1)
            cout << name[i];

        // loop for spaces
        for(int j = 0; j < name.size() - i; j++)
        {
            if(i != name.size() - 1)
                cout << "  ";
             else
                cout << " ";
        }
        // print name at right position
        cout << name[i];

        cout << endl;
    }

    return 0;
}