// Problem: Check voting eligibility for a given age (18+)
// Phase: 1 - Conditionals
// Level: 2 [Q6]

#include <iostream>
using namespace std;    

int main() {
    int age;
    cout<<"What's your age? "<<endl;
    cin>>age;

    if(age>0 && age<=150){
        if(age>=18){
            cout<<"You are eligible for voting"<<endl;
        }
        else{
            cout<<"You are not eligible for voting"<<endl;
        }
    }
    else{
        cout<<"Please enter a valid age"<<endl;
    }
}