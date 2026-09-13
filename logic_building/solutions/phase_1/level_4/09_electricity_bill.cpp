// Problem: Take electricity units consumed and calculate the bill as per slabs (using if-else).
// Phase: 1 - Conditionals
// Level: 4 [Q9]

/*
Here, I have considered,
- 0 to 100 units: ₹5 per unit
- 101 to 200 units: ₹7 per unit
- Above 200 units: ₹10 per unit
*/

#include <iostream>
using namespace std;

int main() {
    int units;
    int bill;

    cout<<"Enter electricity units consumed:"<<endl;
    cin>>units;

    if(units<0){
        cout<<"Invalid units"<<endl;
    }
    else if(units<=100){
        bill=units*5;
        cout<<"Electricity Bill: ₹"<<bill<<endl;
    }
    else if(units<=200){
        bill=units*7;
        cout<<"Electricity Bill: ₹"<< bill<<endl;
    }
    else{
        bill=units*10;
        cout<<"Electricity Bill: ₹"<<bill<<endl;
    }

    return 0;
}
