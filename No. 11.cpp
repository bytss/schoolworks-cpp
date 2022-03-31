/*
 No. 11 | Programming 1 Finals
 */

#include <iostream>

using namespace std;

int main()
{
    int size = 15, totalMonthlyExpense = 0;
    string category[size] = {};
    int monthlyExpenses[size] = {};
    bool swapped;

    cout << "Monthly Household Expense" << endl;
    // store data
    for(int i = 0; i < size; i++){
        // category
        cout << "Enter Category #" << i + 1 << ": ";
        cin >> category[i];

        // monthly expense
        cout << "Amount Spent: ";
        cin >> monthlyExpenses[i];
        totalMonthlyExpense += monthlyExpenses[i];
    }

    // bubble sorting
    for (int j = 0; j < size; j++) {
        swapped = false;

        for (int k = 0; k < size - j; k++) {
            if (monthlyExpenses[k] > monthlyExpenses[k + 1]) {
                swap(monthlyExpenses[k], monthlyExpenses[k + 1]);
                swap(category[k], category[k + 1]);
                swapped = true;
            }
        }

        if (!swapped) 
            break;
    }

    // display descending
    for(int l = size; l > 0; l--)
        cout << category[l] << " : " << monthlyExpenses[l] << endl;
    
    // display total
    cout << "Total Monthly Expense: " << totalMonthlyExpense;

    return 0;
}