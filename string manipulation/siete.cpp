#include<iostream>

using namespace std;

int main()
{
    string mobileNo;

    cout << "Enter your Mobile No.: ";
    cin >> mobileNo;

    if(mobileNo.size() == 11)
        cout << "Great! The format of mobile number is correct!" << endl;
      else
        cout << "The mobile number entered is incorrect!" << endl;

    return 0;
}
