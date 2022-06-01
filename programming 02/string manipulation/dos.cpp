#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    bool isExist = false;

    cout << "Enter a word: ";
    cin >> str;

    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'X' || str[i] == 'x'){
            isExist = true;
            break;
        }
    }

    transform(str.begin(), str.end(), str.begin(),::tolower);

    if(isExist)
        cout << "The character of X or x is exists in " + str << endl;
     else
        cout << "The character of X or x doesn't exists in " + str << endl;


    return 0;
}