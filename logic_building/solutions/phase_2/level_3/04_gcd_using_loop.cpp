// Problem: Find HCF (GCD) of two numbers using loops.
// Phase: 2 - Loops & Patterns
// Level: 3 [Q4]

#include <iostream>
using namespace std;

int main() {
    int a,b;
    int hcf=1;

    cout << "What's the value of a: ";
    cin >> a;

    cout << "What's the value of b: ";
    cin >> b;

    for(int i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0){
            hcf = i;
        }
    }
    cout<<"The HCF of "<<a<<" and "<<b<<" is: "<<hcf<<endl;

    return 0;
}
