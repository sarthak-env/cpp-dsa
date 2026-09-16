// Problem: Count the number of digits in a given number.
// Phase: 2 - Loops & Patterns
// Level: 2 [Q1]

#include <iostream>
using namespace std;

int main() {
    int num;
    int counter=0;

    cout<<"What's the number? ";
    cin>>num;

    int temp=num;

    for(;num !=0; num/=10){
        int digit=num%10;
        counter++;
    }

    cout<<"The number "<<temp<<" is a "<<counter<<" digit number"<<endl;

    return 0;
}
