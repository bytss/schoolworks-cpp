/**
 * @file uno
 * @author Jefferson Alaiza (jeffersonalaiza@outlook.com)
 * @brief 
 * @version 1.0
 * @date 2022-05-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// Write a C++ Program to find Largest Element in an Array.

#include <iostream>

using namespace std;

int main() {
    int arySize;

    float ary[50];

    cout << "Enter array size (Max: 50): ";
    cin >> arySize;

    if(arySize > 50){
        cout << "Error!, array size exceeded";
    } else {

        // input data per array position using for loop
        for(int i = 0; i < arySize; i++){
            cout << "Enter " << i << " Element: ";
            cin >> ary[i];
        }

        // print the stored data in array using for loop
        cout << "Stored data in array \n";
        for(int j = 0; j < arySize; j++){
            cout << ary[j] << " ";
        }

        // Loop to store largest number to arr[0]
        for(int k = 1; k < arySize; k++) {
            // an if statement to switch the position of small and largest data
            if(ary[0] < ary[k])
                ary[0] = ary[k];
        }

        // print the largest element
        cout << "Largest element = " << ary[0];
    }

    return 0;
}
