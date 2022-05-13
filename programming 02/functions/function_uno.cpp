#include <iostream>

using namespace std;

string name;
int salary;
float Fwt, Fica;

string getName(){
    return name;
}

int getSalary(){
    return salary;
}

void displayInfo(string employeeName, float fwt, float fica, int netPay){

    cout << "Employee Name: " << employeeName << endl;
    cout << "federal withholding tax(FWT): " << fwt << endl;
    cout << "federal insurance contribution act (FICA): " << fica << endl;
    cout << "Net Pay: " << netPay << endl;
}

void calcNetPay(float &fwt, float &fica){

    float netPay = getSalary() - fwt - fica;

    displayInfo(getName(), fwt, fica, netPay);
}

void CalcFica(){

    float ficaRate = .08;
    Fica = getSalary() * ficaRate;

    calcNetPay(Fwt, Fica);
}

// calculate federal withholding tax(FWT) (function)
void calcFwt(){

    float fwtRate = .20;
    Fwt = getSalary() * fwtRate;

    CalcFica();
}

// main function
int main()
{

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your weekly salary: ";
    cin >> salary;

    calcFwt();

    return 0;
}
