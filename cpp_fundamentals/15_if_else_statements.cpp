// if-else statements in C++

#include<iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number > 0) {
        cout << "You entered a positive number." << endl; //check some condition
    } else if (number < 0) {
        cout << "You entered a negative number." << endl; // check some other condition
    } else {
        cout << "You entered zero." << endl; // if all conditions fail, execute this
    }
    return 0;
}