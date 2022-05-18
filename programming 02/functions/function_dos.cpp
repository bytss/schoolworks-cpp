#include <iostream>

using namespace std;

void info(float x, float y, int i, char c){
    cout << "Weight: " << x << endl;
    cout << "Height: " << y << endl;
    cout << "Age: " << i << endl;
    cout << "Gender: " << c << endl;
}

int main()
{
    float weight, height;
    int age;
    char gender;

    cout << "Enter your weight (pounds): ";
    cin >> weight;

    cout << "Enter your height (inches): ";
    cin >> height;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Gender [M/F]: ";
    cin >> gender;

    info(weight, height, age, gender);

    return 0;
}
