// Problem: Print stars in even numbers per row (2, 4, 6, 8, 10).
// Phase: 2 - Loops & Patterns
// Level: 4 [Q7]

#include <iostream>
using namespace std;

int main(){
    int stars;

    cout<<"How many stars would you like? ";
    cin>>stars;

    for(int i=2; i<=stars; i+=2){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
