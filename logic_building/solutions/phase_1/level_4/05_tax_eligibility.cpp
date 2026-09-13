// Problem: Take income and age, and check if eligible for tax (age > 18 and income > 5 L).
// Phase: 1 - Conditionals
// Level: 4 [Q5]

#include <iostream>
using namespace std;

int main() {
    int age;
    double income;

    cout<<"What's your age? "<<endl;
    cin>>age;

    cout<<"What's your income (in INR)? "<<endl;
    cin>>income;

    if(age > 18 && income > 500000){
        cout<<"You are eligible for Tax"<<endl;
    }
    else{
        cout<<"You are not eligible for Tax yet"<<endl;
    }

    return 0;
}
