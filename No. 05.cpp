/*
 No. 05 | Programming 1 Finals
 */

#include <iostream>

using namespace std;

int main()
{
    //datatype
    int n = 0;
    bool isPrime;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 2; i <= n; i++)
    {
        // Assume that the current number is Prime
        isPrime = true;

        // Check if the current number i is prime or not 
        for(int j = 2 ; j <= i/2; j++)
        {
            /*
             * If i is divisible by any number other than 1 and self
             * then it is not prime number
             */
            if(i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        // display if the number is prime number
        if(isPrime)
        {
           cout << i << " ";
        }
    }

    return 0;
}

