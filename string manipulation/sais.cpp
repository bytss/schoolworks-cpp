#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    string studName;

    cout << "Enter your Name: ";
    getline(cin, studName);

    transform(studName.begin(), studName.end(), studName.begin(),::toupper);

    cout << studName << endl;

    return 0;
}
