#include<iostream>

using namespace std;

int main()
{
    string address, city = "Manila";

    cout << "Enter your Address: ";
    getline(cin, address);

    if(address.find(city) != -1){
        cout << city << " found in " << address << " at " << address.find(city) << " pos" << endl;
    } else {
        cout << "Not found!" << endl;
    }

    return 0;
}
