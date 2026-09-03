// switch-case statements in C++

#include<iostream>
using namespace std;

int main() {
    int choice;

    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch(choice) {
        case 1: 
            cout << "You selected option 1." << endl;
            break; // exit the switch block after executing this case
        case 2:
            cout << "You selected option 2." << endl;
            break;
        case 3:
            cout << "You selected option 3." << endl;
            break;
        default: // if none of the above cases match, execute this block
            cout << "Invalid choice." << endl;
    }
    return 0;
}