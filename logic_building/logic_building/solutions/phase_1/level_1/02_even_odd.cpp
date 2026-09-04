// Problem: Check if a number is even or odd
// Phase: 1 - Conditionals 
// Level: 1 [Q2]

#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "What's the number?" << endl;
    cin >> number;

    if(number % 2 == 0){
        cout<<"The number is Even"<<endl;
    }
    else{
        cout<<"The number is odd"<<endl;
    }
}