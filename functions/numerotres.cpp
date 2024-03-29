#include <iostream>

using namespace std;

bool is_member(char member){

    if(member == 'Y' || member == 'y')
        return true;
    else
        return false;
}

bool is_senior(int age){

    if(age >= 60)
        return true;
     else
         return false;
}

void totalBills(float amount){

    cout << "Account Balance: " << amount << endl;
}

void checkBill(int age, char member, float bills){

    float amount;

    if(is_member(member) && is_senior(age))
        amount = (bills * .85) * .80;
     else if (is_member(member))
         amount = bills * .85;
      else if (is_senior(age))
          amount = bills * .80;
       else
           amount = bills;

    totalBills(amount);
}

int main()
{

    string name;
    int age;
    float bills;
    char member;

    cout << "Name of Patient: ";
    cin >> name;

    cout << "Age of Patient: ";
    cin >> age;

    cout << "Are you a Philhealth Member ? [Y or N]: ";
    cin >> member;

    cout << "Total hospital bill in pesos: ";
    cin >> bills;

    checkBill(age, member, bills);

    return 0;
}
