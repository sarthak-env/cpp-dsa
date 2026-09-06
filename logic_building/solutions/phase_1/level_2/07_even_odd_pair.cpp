// Problem: Take two numbers and determine if both are even, both odd, or one of each
// Phase: 1 - Conditionals
// Level: 2 [Q7]

#include <iostream>
using namespace std;

int main() {
    int num_1, num_2;

    cout << "Enter the first number: ";
    cin >> num_1;

    cout << "Enter the second number: ";
    cin >> num_2;

    if (num_1 % 2 == 0){
        if (num_2 % 2 == 0) {
            cout << "Both numbers are even";
        } 
        else {
            cout << "First is even and second is odd";
        }
    } 
    else{
        if (num_2 % 2 == 0) {
            cout << "First is odd and second is even";
        } else {
            cout << "Both numbers are odd";
        }
    }

    return 0;
}
