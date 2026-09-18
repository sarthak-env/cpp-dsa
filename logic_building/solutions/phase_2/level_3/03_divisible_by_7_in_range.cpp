// Problem: Print all numbers between a and b divisible by 7.
// Phase: 2 - Loops & Patterns
// Level: 3 [Q3]

#include <iostream>
using namespace std;

int main() {
    int a,b;

    cout << "What's the value of a: ";
    cin >> a;

    cout << "What's the value of b: ";
    cin >> b;

    cout << "The numbers divisible by 7 between "<<a<<" and "<<b<<" are : ";

    for(int i=a; i<=b; i++){
        if(i%7==0){
            cout<<i<<" ";
        }
    }

    return 0;
}
