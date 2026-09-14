// Problem: Take day and month and check if it forms a valid calendar date (ignoring leap years).
// Phase: 1 - Conditionals
// Level: 5 [Q3]

#include <iostream>
using namespace std;

int main() {
    int day,month;

    cout<<"Enter day: ";
    cin>>day;

    cout<<"Enter month (1-12): ";
    cin>>month;

    if(month>0 && month<=12){
        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
            if(day>0 && day<=31){
                cout<<"The day and month are valid"<<endl;
            }
            else{
                cout<<"The day and month are invalid"<<endl;                
            }
        }
        else if(month==4||month==6||month==9||month==11){
            if(day>0 && day<=30){
                cout<<"The day and month are valid"<<endl;
            }
            else{
                cout<<"The day and month are invalid"<<endl;                
            }
        }
        else if(month==2){
            if(day>0 && day<=28){
                cout<<"The day and month are valid"<<endl;
            }
            else{
                cout<<"The day and month are invalid"<<endl;                
            }            
        }
        else{
            cout<<"The day and month are invalid"<<endl;
        }
    }
    else{
        cout<<"Please enter a valid date and month"<<endl;
    }
    
    return 0;
}
