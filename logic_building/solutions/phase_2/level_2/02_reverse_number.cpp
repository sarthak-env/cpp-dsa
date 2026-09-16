// Problem: Print the reverse of a given number.
// Phase: 2 - Loops & Patterns
// Level: 2 [Q2]

#include <iostream>
using namespace std;

int main() {
    int num;
    int reverse=0;

    cout<<"What's the number? ";
    cin>>num;

    int temp=num;

    for(;num !=0; num/=10){
        int digit=num%10;
        reverse=reverse*10+digit;
    }
    cout<<"The reverse of the number "<<temp<<" is "<<reverse<<endl;

    return 0;
}
