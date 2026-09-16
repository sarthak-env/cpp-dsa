// Problem: Print the factorial of a given number.
// Phase: 2 - Loops & Patterns
// Level: 1 [Q9]

#include <iostream>
using namespace std;

int main() {
    int num;
    int factorial=1;

    cout<<"What's the number? ";
    cin>>num;

    for(int i=num; i>=1; i--){
        factorial=factorial*i;
    }
    
    cout<<"The factorial of "<<num<<" is "<<factorial<<endl;

    return 0;
}
