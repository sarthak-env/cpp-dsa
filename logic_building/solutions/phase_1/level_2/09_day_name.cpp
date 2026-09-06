// Problem: Take a day number (1-7) and print the corresponding day name
// Phase: 1 - Conditionals
// Level: 2 [Q9]

#include <iostream>
using namespace std;

int main() {
    int day_no;

    cout << "Enter the day number (1-7): ";
    cin >> day_no;

    if (day_no == 1) {
        cout << "Monday";
    }
    else if (day_no == 2) {
        cout << "Tuesday";
    }
    else if (day_no == 3) {
        cout << "Wednesday";
    }
    else if (day_no == 4) {
        cout << "Thursday";
    }
    else if (day_no == 5) {
        cout << "Friday";
    }
    else if (day_no == 6) {
        cout << "Saturday";
    }
    else if (day_no == 7) {
        cout << "Sunday";
    }
    else {
        cout << "Enter a valid day number";
    }

    return 0;
}
