// Problem: Check whether a given integer is single-digit, double-digit, or multi-digit
// Phase: 1 - Conditionals
// Level: 3 [Q4]

#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    number = abs(number);

    if (number >= 0 && number <= 9) {
        cout << "Single-digit number." << endl;
    }
    else if (number >= 10 && number <= 99) {
        cout << "Double-digit number." << endl;
    }
    else {
        cout << "Multi-digit number." << endl;
    }

    return 0;
}
