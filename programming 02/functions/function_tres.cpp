#include <iostream>

using namespace std;

void content(string a[]){

    cout << "C++ Fundamentals" << endl;

    for(int i = 0; i < 6; i++){
        cout << a[i] << "\n";
    }
}

int main(){

    string book[6] = {"Introduction to c++", "History of C++", "C++ Fundamentals", "Data types and Bariables", "Operators", "Basic Syntax"};

    content(book);
    return 0;
}