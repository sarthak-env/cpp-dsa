// Problem: Take a 4-digit number and check if the first and last digits are equal
// Phase: 1 - Conditionals
// Level: 3 [Q3]


#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a four digit number: ";
    cin >> number;

    if (number >= 1000 && number <= 9999) {
        int firstDigit = number / 1000;
        int lastDigit = number % 10;

        if (firstDigit == lastDigit) {
            cout << "First and last digits are equal." << endl;
        }
        else {
            cout << "First and last digits are not equal." << endl;
        }
    }
    else {
        cout << "Enter a valid four digit number." << endl;
    }

    return 0;
}