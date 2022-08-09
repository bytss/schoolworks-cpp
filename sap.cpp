/*
 No. 8 | Programming 1 Finals
 */

#include <iostream>

using namespace std;

int main()
{
    // datatypes
    int family_monthly_income = 0, familyMembers = 0;
    char entry = 'Y', pwd_or_senior;

    // while loop
    while(entry == 'Y'){
        cout << "Enter total monthly income: ";
        cin >> family_monthly_income;

        cout << "How many members of the family?: ";
        cin >> familyMembers;

        cout << "Is there a pwd or senior citizen in your family? ( Y / N ): ";
        cin >> pwd_or_senior;

        // condition for SAP Approval
        if((pwd_or_senior == 'Y' || family_monthly_income < 10000) && familyMembers > 4)
            cout << "SAP Php 8,000.00: Approved" << endl;
         else
            cout << "SAP Php 8,000.00: Disapproved" << endl;

         // asking user for another entry
         cout << "More Entry [Y/N] ?: ";
         cin >> entry;
    }

    return 0;
}