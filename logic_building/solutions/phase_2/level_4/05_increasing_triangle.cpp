// Problem: Print an increasing triangle of stars (row i has i stars).
// Phase: 2 - Loops & Patterns
// Level: 4 [Q5]

#include <iostream>
using namespace std;

int main(){
    int stars;

    cout<<"How many stars would you like? ";
    cin>>stars;

    for(int i=1; i<=stars; i++){
        for(int j=1; j<i; j++){
            cout<<"*";
        }
        cout<<"*"<<endl;

    }
}
