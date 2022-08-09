/*
 No. 3 | Programming 1 Finals
 */


#include <iostream>

using namespace std;


int main()
{
    int print = 0;

    cout << "Insert integer: ";
    cin >> print;

    // condition
    if(print <= 10 && print >= 5) {

        for(int i = print; i > 0; --i){

            // left side loop
            for(int j = 0; j < i; j++)
                cout << "@";

            // handle spaces
            for (int k = 0; k < print - i; k++)
                cout << "  ";

            // right side loop
            for(int l = 0; l < i; l++)
                cout << "@";

            // Ending line each loop
            cout << "\n";
        }

    } else cout << "Invalid integer";

    return 0;
}