#include<iostream>

using namespace std;

int main()
{
    string employeeNum, deptCode;

    cout << "Enter your Employee No.: ";
    cin >> employeeNum;

    deptCode.assign(employeeNum, 2, 2);

    cout << "Employee Number: " + employeeNum << endl;
    cout << "Department Code: " + deptCode << endl;

    return 0;
}
