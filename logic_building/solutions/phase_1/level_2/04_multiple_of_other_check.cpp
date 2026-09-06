// Problem: Check if one of two given numbers is a multiple of the other
// Phase: 1 - Conditionals
// Level: 2 [Q4]

#include <iostream>
using namespace std;

int main() {
    int num_1, num_2;
    cout << "Enter two numbers: ";
    cin >> num_1 >> num_2;

    if (num_1 > 0 && num_2 > 0) {
        if (num_1 % num_2 == 0 || num_2 % num_1 == 0) {
            cout << "One of the numbers is a multiple of the other." << endl;
        } 
        else {
            cout << "Neither number is a multiple of the other." << endl;
        }
    } else {
    cout << "Please enter positive numbers only." << endl;
    }
}
