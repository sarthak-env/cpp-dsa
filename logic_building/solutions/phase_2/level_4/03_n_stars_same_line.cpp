// Problem: Print n stars on the same line.
// Phase: 2 - Loops & Patterns
// Level: 4 [Q3]

#include <iostream>
using namespace std;

int main(){
    int stars;

    cout<<"How many stars would you like? ";
    cin>>stars;

    for(int i=0; i<stars; i++)
    cout<<"*"<<" ";
}