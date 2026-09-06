// Problem: Take an alphabet character and check if it lies between a-m or n-z
// Phase: 1 - Conditionals
// Level: 2 [Q8]

#include <iostream>
#include <cctype> // This library provides functions for working with characters
using namespace std;

int main() {
    char alpha_char;

    cout << "Enter the alphabet character: ";
    cin >> alpha_char;

    if (isalpha(alpha_char)) {

        alpha_char = tolower(alpha_char);

        if (alpha_char >= 'a' && alpha_char <= 'm') {
            cout << "The entered character lies between a-m";
        } else {
            cout << "The entered character lies between n-z";
        }

    } else {
        cout << "Enter a valid alphabet character";
    }

    return 0;
}


