// Problem: Check if a given year is a leap year
// Phase: 1 - Conditionals 
// Level: 1 [Q5]

#include <iostream>
using namespace std;    

int main(){
    int year;
    cout<<"Enter a year: ";
    cin>>year;

    if(year%4==0 && year%100!=0 || year%400==0){
        cout<<"Leap Year";
    }
    else{
        cout<<"Not a Leap Year";
    }
    return 0;
}