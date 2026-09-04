// Problem: Check if a number is divisible by both 3 and 5 
// Phase: 1 - Conditionals 
// Level: 1 [Q4]

#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "What's the number?" << endl;
    cin >> number;

    if(number % 3 == 0 && number % 5 == 0){
        cout<<"The number is divisible by both 3 and 5"<<endl;
    }
    else if(number % 3 == 0){
        cout<<"The number is divisible by 3"<<endl;
    }
    else if(number % 5 == 0){
        cout<<"The number is divisible by 5"<<endl;
    }
    else {
        cout<<"The number is divisible by neither 3 nor 5"<<endl;
    }
}
