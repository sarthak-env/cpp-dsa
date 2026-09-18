// Problem: Print cubes of numbers from 1 to n.
// Phase: 2 - Loops & Patterns
// Level: 3 [Q2]

#include <iostream>
using namespace std;

int main() {
    int num;

    cout<<"Square up to number? : ";
    cin>>num;

    for(int i=1; i<=num; i++){
        cout<<i*i*i<<endl;
    }

    return 0;
}
