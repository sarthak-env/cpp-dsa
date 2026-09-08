// Problem: Take a 3-digit number and determine if the middle digit is largest, smallest, or neither
// Phase: 1 - Conditionals
// Level: 3 [Q2]

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string number;

    cout << "Enter a three digit number: ";
    cin >> number;

    if (number.length() == 3 &&
        isdigit(number[0]) &&
        isdigit(number[1]) &&
        isdigit(number[2])) {

        if (number[1] > number[0] && number[1] > number[2]) {
            cout << "Middle digit is the largest." << endl;
        }
        else if (number[1] < number[0] && number[1] < number[2]) {
            cout << "Middle digit is the smallest." << endl;
        }
        else {
            cout << "Middle digit is neither largest nor smallest." << endl;
        }
    }
    else {
        cout << "Enter a valid three digit number." << endl;
    }

    return 0;
}
