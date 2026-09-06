// Problem: Take a month number (1-12) and print the number of days in that month
// Phase: 1 - Conditionals
// Level: 2 [Q10]

#include <iostream>
using namespace std;

int main() {

    cout << "Enter the suitable month number:" << endl;
    cout << "1  - January" << endl;
    cout << "2  - February" << endl;
    cout << "3  - March" << endl;
    cout << "4  - April" << endl;
    cout << "5  - May" << endl;
    cout << "6  - June" << endl;
    cout << "7  - July" << endl;
    cout << "8  - August" << endl;
    cout << "9  - September" << endl;
    cout << "10 - October" << endl;
    cout << "11 - November" << endl;
    cout << "12 - December" << endl;

    int month_no;
    cout << "Enter the month number: ";
    cin >> month_no;

    if (month_no >= 1 && month_no <= 12) {

        if (month_no == 1 || month_no == 3 || month_no == 5 || month_no == 7 || month_no == 8 || month_no == 10 || month_no == 12) {
            cout << "The month has 31 days";
        }

        else if (month_no == 4 || month_no == 6 || month_no == 9 || month_no == 11) {
            cout << "The month has 30 days";
        }

        else {
            cout << "The month has 28 days";
        }

    }
    else {
        cout << "Enter a valid month";
    }

    return 0;
}
