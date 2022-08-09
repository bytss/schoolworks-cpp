#include <iostream>

using namespace std;

void calculator(int x, int y){

    int sum, difference, product, modulo;
    float quotient;

    // Adding two numbers
    sum = x + y;
    // Subtracting two numbers
    difference = x - y;
    // Multiplying two numbers
    product = x * y;
    // Dividing two numbers
    quotient = x / y;
    // Modulo
    modulo = x % y;

    cout << "Sum = " << sum << endl;
    cout << "Difference  = " << difference << endl;
    cout << "Multiplication = " << product << endl;
    cout << "Division = " << quotient << endl;
    cout << "Remainder = " << modulo << endl;
}

int main()
{
    int first, second;

    cout << "Enter first number: ";
    cin >> first;

    cout << "Enter second number: ";
    cin >> second;

    calculator(first, second);

    return 0;
}
