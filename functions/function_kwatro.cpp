#include <iostream>

using namespace std;

char lister(int i, float &f){

    cout << "Semester: " << i << endl;
    if(f >= 1.0 && f <= 1.75)
        return 'Y';
     else
        return 'N';
}

int main(){

    int x;
    float y;

    cout << "Enter Semester: ";
    cin >> x;

    cout << "Enter GPA: ";
    cin >> y;

    if(lister(x, y) == 'Y')
        cout << "Congratulations!";
     else
         cout << "Keep it up!";

    return 0;
}