#include <iostream>

using namespace std;

string name = "";
int salary = 0;

string getName(){
    return name;
}

int getSalary(){
    return salary;
}

void displayInfo(string name, float fwt, float fica, int netPay){

    cout << "Employee Name: " << name << endl;
    cout << "federal withholding tax(FWT): " << fwt << endl;
    cout << "federal insurance contribution act (FICA): " << fica << endl;
    cout << "Net Pay: " << netPay << endl;
}

void calcNetPay(float &fwt, float &fica){

    float netPay = getSalary() - (fwt + fica);

    displayInfo(getName(), fwt, fica, netPay);
}

void CalcFica(float fwt){

    float ficaRate = .08;

    float fica = getSalary() * ficaRate;

    calcNetPay(fwt, fica);
}

// calculate federal withholding tax(FWT) (function)
void calcFwt(){

    float fwtRate = .20;

    float fwt = getSalary() * fwtRate;

    CalcFica(fwt);
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
