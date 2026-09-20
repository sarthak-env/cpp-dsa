// Problem: Print first n terms of an arithmetic progression (a, d).
// Phase: 2 - Loops & Patterns
// Level: 3 [Q9]

#include <iostream>
using namespace std;

int main() {
    int a,d,n;

    cout<<"What's the first term [a] ? ";
    cin>>a;

    cout<<"What's the common difference [d] ? ";
    cin>>d;

    cout<<"Up to how many terms [n] ? ";
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<a<<endl;
        a = a + d;
    }

    return 0;
}
