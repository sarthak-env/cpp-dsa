// Problem: Print a square of stars (n × n).
// Phase: 2 - Loops & Patterns
// Level: 4 [Q4]

#include <iostream>
using namespace std;

int main(){
    int stars;

    cout<<"How many stars would you like? ";
    cin>>stars;

    for(int i=0; i<stars; i++){
        for(int j=1; j<stars; j++){
            cout<<"*";
        }
        cout<<"*"<<endl;

    }
}
