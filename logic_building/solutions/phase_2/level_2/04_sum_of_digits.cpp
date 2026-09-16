// Problem: Find the sum of digits of a number.
// Phase: 2 - Loops & Patterns
// Level: 2 [Q4]

#include <iostream>
using namespace std;

int main() {
    int num;
    int sum=0;

    cout<<"What's the number? ";
    cin>>num;

    int temp=num;

    for(;num !=0; num/=10){
        int digit=num%10;
        sum += digit;
        
    }

    cout<<"The sum of digits of the number "<<temp<<" is "<<sum<<endl;

    return 0;
}
