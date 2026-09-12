// Problem: Check if a number lies within the range [100, 999]
// Phase: 1 - Conditionals
// Level: 3 [Q8]

#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"What's the number? "<<endl;
    cin>>num;

    if(num>=100 && num<=999){
        cout<<"The number lies within the range '100 to 999'"<<endl;
    }
    else{
        cout<<"The number doesn't lie within the range '100 to 999'"<<endl;
    }

    return 0;
}