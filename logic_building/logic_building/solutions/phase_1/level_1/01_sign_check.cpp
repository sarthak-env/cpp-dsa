// Problem: Take a number and print whether it’s positive, negative, or zero
// Phase: 1 - Conditionals 
// Level: 1 [Q1]

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "What's the number?" << endl;
    cin >> number;

    if (number > 0) {
        cout << "The number is positive" << endl;
    }
    else if (number == 0) {
        cout << "The number is zero" << endl;
    }
    else {
        cout << "The number is negative" << endl;
    }

    return 0;
}
