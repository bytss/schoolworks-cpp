#include <iostream>

using namespace std;

void report_card(int x, int y, int z){

    cout << "Lowest grade obtained: " << x << endl;
    cout << "Highest grade obtained: " << y << endl;
    cout << "Grade in 5th subject: " << z << endl;
}

int main()
{
    int subjects = 8, lowestGrade = 75, highestGrade = 99;
    int student_grade[subjects];

    for(int i = 0; i < subjects; i++){
        cout << "Enter your grade in subject no." << i + 1 << ": ";
        cin >> student_grade[i];
    }

    // Loop to store largest number to student_grade[0]
    for(int k = 1; k < subjects; k++) {
        // an if statement to find and switch highest grade
        if(student_grade[0] < student_grade[k])
            student_grade[0] = student_grade[k];
    }

    // Loop to store lowest number to student_grade[subjects - 1]
    // index always start at 0
    for(int k = 1; k < subjects; k++) {
        // an if statement to find and switch the lowest grade
        if(student_grade[subjects - 1] > student_grade[k])
            student_grade[subjects - 1] = student_grade[k];
    }

    highestGrade = student_grade[0];
    lowestGrade = student_grade[subjects - 1];

    report_card(lowestGrade, highestGrade, student_grade[4]);
    return 0;
}
