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

// Write a C++ Program to Remove Characters in String Except Alphabet

#include <iostream>

using namespace std;

int main() {

    // set an array for the alphabet characters
    char chrs[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    // initialize the value of str variable when the client/user's input a data using the program
    string str;

    // checking if the character exist.
    bool isExist;

    // client side
    cout << "Enter any strings: ";
    getline(cin, str);

    /*
     *  using for loop, we can check the existing of non-alphabet characters,
     *  so we need to remove it by checking each char using looping and array,
     *  in order to print w/o non-alphabet characters.
     *
     *  we use nested for loop, to check every character in the string
     */

    for (int i = 0; i < str.size(); i++){

        // nested for loop
        for (int j = 0; j < 52; j++){
            //an if else statement to check the existing of every character inside an array
            if(str[i] == chrs[j]){
                cout << str[i];
                isExist = true;
                break; // stop looping when the condition is met.
            } else {
                isExist = false;
            }
        }

        if(!isExist)
            cout << " ";
    }

    return 0;
}
