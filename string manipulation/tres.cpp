#include<iostream>

using namespace std;

int main()
{
    string str;

    cout << "Enter a word: ";
    cin >> str;

    if(str.size() == 5)
        cout << "The string has five characters!" << endl;
     else
         cout << "The string doesn't contain five characters!" << endl;

    return 0;
}
