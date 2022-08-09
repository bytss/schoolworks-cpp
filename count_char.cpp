/*
 No. 9 | Programming 1 Finals
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // datatypes
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string name;
    int count = 0;

    cout << "Enter your Name: ";
    getline(cin, name);


    // loop for char in alphabet
    for (int i = 0; i < alphabet.length(); i++){

        // checking the same values
        for(int j = 0; j < name.size(); j++){
            // checking character in the string
            if (alphabet[i] == name[j]){
                count++;
            }
        }

        if(count > 0){
            cout << alphabet[i] << " - " << count << endl;
        }
    
        count = 0;
    }
    
    return 0;
}