#include<iostream>

using namespace std;

int main()
{
    string subjectCode;

    cout << "Enter your Subject Code: ";
    cin >> subjectCode;

    subjectCode.replace(4, 5, "CS");

    cout << "Your subject code is: " + subjectCode << endl;

    return 0;
}