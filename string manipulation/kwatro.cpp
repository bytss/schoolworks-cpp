#include<iostream>

using namespace std;

int main()
{
    string areaCode;

    cout << "Enter your Area Code: ";
    cin >> areaCode;

    string displayAreaCode = "(" + areaCode + ")";

    cout << displayAreaCode << endl;

    return 0;
}
