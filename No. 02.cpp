/*
 No. 02 | Programming 1 Finals
 */

#include <iostream>

using namespace std;

int main()
{
    int totalMonthlyIncome = 0, totalMonthlyExpense = 0;
    char modelHouse, modeOfPayment;
    float houseModel[3] = {3563890, 2678400, 1980700};
    string amortization[3] = {"25,789.00", "20,675.00", "18,763.00"};

    cout << "Total Monthly Income: ";
    cin >> totalMonthlyIncome;

    cout << "Total Monthly Expense: ";
    cin >> totalMonthlyExpense;

    cout << "----------------------------------------------------------------------------" << endl;
    cout << "| House Model | Total Contract Price | Down Payment | Monthly Amortization |" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "|     A           3,563,890.00          30% of TCP          25,789.00      |" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "|     B           2,678,400.00          20% of TCP          20,675.00      |" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "|     C           1,980,700.00          15% of TCP          18,763.00      |" << endl;
    cout << "----------------------------------------------------------------------------" << endl;

    cout << "Preferred Model House (A, B or C): ";
    cin >> modelHouse;

    cout << "Mode of Payment (C for cash and I for installment): ";
    cin >> modeOfPayment;

    cout << "Total Monthly Income: " << totalMonthlyIncome << endl;
    cout << "Total Monthly Expenses: " << totalMonthlyExpense << endl;
    cout << "House Model: " << modelHouse << endl;
    cout << "Mode of Payment: " << modeOfPayment << endl;

    // checking client modelHouse and his/her payment method
    if(modelHouse == 'A'){
        cout << "Total Contract Price: 3,563,890.00" << endl;

        if(modeOfPayment == 'C'){
            cout << "Discount: " << houseModel[0] * 0.05 << endl;
            cout << "Balance: " << houseModel[0] - (houseModel[0] * 0.05) << endl;
        } else {
            cout << "Down Payment: " << houseModel[0] * 0.30 << endl;
            cout << "Monthly Amortization: " << amortization[0] << endl;
        }
    } else if(modelHouse == 'B'){
        cout << "Total Contract Price: 2,678,400.00" << endl;

        if(modeOfPayment == 'C'){
            cout << "Discount: " << houseModel[1] * 0.05 << endl;
            cout << "Balance: " << houseModel[1] - (houseModel[1] * 0.05)<< endl;
        } else {
            cout << "Down Payment: " << houseModel[1] * 0.20 << endl;
            cout << "Monthly Amortization: " << amortization[1] << endl;
        }
    } else {
        cout << "Total Contract Price: 1,980,700.00" << endl;
        if(modeOfPayment == 'C'){
            cout << "Discount: " << houseModel[2] * 0.05 << endl;
            cout << "Balance: " << houseModel[2] - (houseModel[2] * 0.05) << endl;
        } else {
            cout << "Down Payment: " << houseModel[2] * 0.15 << endl;
            cout << "Monthly Amortization: " << amortization[2] << endl;
        }
    }

    // display if the client's application is approved or disapproved
    if(totalMonthlyExpense > totalMonthlyIncome)
        cout << "Sorry your loan can not approved!" << endl;
     else
        cout << "LOAN APPROVED! Congratulation!" << endl;

    return 0;
}