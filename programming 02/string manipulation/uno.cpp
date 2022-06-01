#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    string employeeName;

    cout << "Enter your Name: ";
    getline(cin, employeeName);
    
    transform(employeeName.begin(), employeeName.end(), employeeName.begin(),::toupper);

    cout << employeeName << endl;

    return 0;
}
