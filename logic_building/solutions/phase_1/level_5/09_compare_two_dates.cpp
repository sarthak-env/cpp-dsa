// Problem: Take two dates (day and month) and determine which one comes first in the calendar.
// Phase: 1 - Conditionals
// Level: 5 [Q9]

#include <iostream>
using namespace std;

int main(){
    int day1,month1;
    int day2,month2;

    cout<<"Enter the first date (day month): "<<endl;
    cin>>day1>>month1;

    cout<<"Enter the second date (day month): "<<endl;
    cin>>day2>>month2;

    if(month1<month2){
        cout<<"The first date comes earlier in the calendar"<<endl;
    }
    else if(month1>month2){
        cout<<"The second date comes earlier in the calendar"<<endl;
    }
    else{
        if(day1<day2){
            cout<<"The first date comes earlier in the calendar"<<endl;
        }
        else if(day1>day2){
            cout<<"The second date comes earlier in the calendar"<<endl;
        }
        else{
            cout<<"Both dates are the same";
        }
    }

    return 0;
}

