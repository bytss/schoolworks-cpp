/*
 No. 10 | Programming 1 Finals
 */

#include <iostream>

using namespace std;

int main()
{
    // datatypes
    int size = 15, male = 0, female = 0, minor = 0, adult = 0, senior = 0;
    int customerAge[size] = {};
    string customerName[size] = {};
    char customerGender[size] = {};

    // store data
    for(int i = 0; i < size; i++){
        // customer name
        cout << "Enter your Name: ";
        cin >> customerName[i];

        //customer gender
        cout << "Enter your Gender: ";
        cin >> customerGender[i];

        // checking the gender
        if(customerGender[i] == 'M')
            male++;
          else if(customerGender[i] == 'F')
              female++;

        //customer age
        cout << "Enter your Age: ";
        cin >> customerAge[i];

        //checking the age
        if(customerAge[i] >= 60)
            senior++;
          else if(customerAge[i] >= 18 && customerAge[i] <= 59)
              adult++;
           else
               minor++;
    }

    cout << "Number of Male Customer: " << male << endl;
    cout << "Number of Female Customer: " << female << endl;
    cout << "Number of Minors: " << minor << endl;
    cout << "Number of Adults: " << adult << endl;
    cout << "Number of Seniors: " << senior << endl;

    return 0;
}