// Problem: Find LCM of two numbers using loops.
// Phase: 2 - Loops & Patterns
// Level: 3 [Q5]

#include <iostream>
using namespace std;

int main(){
    int a,b;
    int lcm;

    cout<<"What's the value of a? ";
    cin>>a;

    cout<<"What's the value of b? ";
    cin>>b;

    for(int i=a; ; i+=a) {
        if (i%b==0) {
            lcm=i;
            break;
        }
    }

    cout<<"The LCM of "<<a<<" and "<<b<<" is "<<lcm;

    return 0;
}