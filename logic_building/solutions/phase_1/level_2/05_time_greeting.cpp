// Problem: Take the hour of the day (0-23) and print the appropriate greeting
// Phase: 1 - Conditionals
// Level: 2 [Q5]

#include <iostream>
using namespace std;

int main(){
    int hour;
    cout<<"Enter the hour of the day (0-23): ";
    cin>>hour;

    if(hour>=0 && hour<=23){
        if(hour>=5 && hour<12){
            cout<<"Good Morning!"<<endl;
        }
        else if(hour>=12 && hour<17){
            cout<<"Good Afternoon!"<<endl;
        }
        else if(hour>=17 && hour<21){
            cout<<"Good Evening!"<<endl;
        }
        else{
            cout<<"Good Night!"<<endl;
        }
    }
    else{
        cout<<"Please enter a valid hour (0-23)."<<endl;
    }
    return 0;
}