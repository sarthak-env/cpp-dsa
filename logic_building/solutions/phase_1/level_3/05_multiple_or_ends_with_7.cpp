// Problem: Check if a number is a multiple of 7 or ends with 7
// Phase: 1 - Conditionals
// Level: 3 [Q5]

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an number: ";
    cin >> number;

    if(number % 7 == 0 && number % 10 == 7){
        cout<<"The number is a multiple of 7 and ends with 7"<<endl;
    }
    else if(number % 7 == 0){
        cout << "The number is a multiple of 7" << endl;
    }
    else if(number % 10 == 7){
        cout << "The number ends with 7" << endl;
    }
    else {
        cout << "Neither condition is satisfied" << endl;
    }

    return 0;
}
