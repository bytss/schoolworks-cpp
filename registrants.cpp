/*
 No. 01 | Programming 1 Finals
 */

#include <iostream>

using namespace std;

int main()
{
    //data type
    int registrants = 0;

    cout << "Enter a number of registrants: ";
    cin >> registrants;

    if(registrants >= 1 && registrants <= 4)
        cout << "The total amount company owed is: " << registrants * 2000 << endl;

    if(registrants >= 5 && registrants <= 10)
        cout << "The total amount company owed is: " << registrants * 1800 << endl;

    if(registrants >= 11)
        cout << "The total amount company owed is: " << registrants * 1500 << endl;


    return 0;
}

