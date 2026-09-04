// Problem: Check if a number is divisible 5 
// Phase: 1 - Conditionals 
// Level: 1 [Q3]

#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "What's the number?" << endl;
    cin >> number;

    if(number % 5 == 0){
        cout<<"The number is divisible by 5"<<endl;
    }
    else{
        cout<<"The number is not divisible by 5"<<endl;
    }
}