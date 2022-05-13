/**
 * @file uno
 * @author Jefferson Alaiza (jeffersonalaiza@outlook.com)
 * @brief 
 * @version 3.0
 * @date 2022-05-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// Write a C++ Program to Display First and Last element of an array.

#include <iostream>

using namespace std;

int main() {

    int arySize;
    float ary[50];

    cout << "Enter array size (Max: 50): ";
    cin >> arySize;

    // add an error message, when the size exceeded
    if(arySize > 50){
        cout << "Error!, array size exceeded";
    } else {

        // input data per array position using for loop
        for(int i = 0; i < arySize; i++){
            cout << "Enter " << i << " Element: ";
            cin >> ary[i];
        }

        // print the first and last element of an array
        cout << "First Number in the Array = " << ary[0] << endl;
        cout << "Last Number in the Array = " << ary[arySize - 1] << endl;
    }

    return 0;
}
