// Problem: Print all factors of a given number.
// Phase: 2 - Loops & Patterns
// Level: 3 [Q6]

#include <iostream>
using namespace std;

int main() {
    int num;

    cout<<"What's the number? ";
    cin>>num;

    cout<<"The factors of "<<num<<" are:"<<endl;

    for(int i=1; i<=num; i++){
        if(num%i==0){
            cout<<i<<endl;
        }

    }

    return 0;
}
