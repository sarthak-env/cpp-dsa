// Problem: Print the product of digits of a given number.
// Phase: 2 - Loops & Patterns
// Level: 1 [Q10]

#include <iostream>
using namespace std;

int main() {
    int num;
    int product=1;

    cout<<"What's the number? ";
    cin>>num;

    int temp=num;

    for(; num != 0; num /= 10) {
        int digit = num % 10;
        product *= digit;
    }

    cout<<"The product of digits of the number "<<temp<<" is "<<product<<endl;

    return 0;
}
