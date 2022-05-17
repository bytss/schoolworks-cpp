#include <iostream>

using namespace std;

void content(string a[]){

    cout << "C++ Fundamentals" << endl;

    for(int i = 0; i < 4; i++){
        cout << a[i] << "\n";
    }
}

int main(){

    string book[4] = {"introduction of c++", "history of c++", "fundamentals of c++", "data types and variables"};

    content(book);
    return 0;
}