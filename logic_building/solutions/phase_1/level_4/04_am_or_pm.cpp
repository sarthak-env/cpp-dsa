// Problem: Take 24-hour time (hours and minutes) and print whether it is AM or PM.
// Phase: 1 - Conditionals
// Level: 4 [Q4]

#include <iostream>
using namespace std;

int main() {
    int hrs, mins;

    cout<<"Enter the time (hours and minutes) in 24 hr format: "<<endl;
    cin>>hrs>>mins;

    if(hrs>=0 && hrs<=23 && mins>=0 && mins<=59) {
        if(hrs<12){
            cout<<"AM"<<endl;
        }
        else{
            cout<<"PM"<<endl;
        }
    }
    else{
        cout<<"Invalid time"<<endl;
    }

    return 0;
}
