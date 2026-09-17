// Problem: Print Fibonacci series up to n terms.
// Phase: 2 - Loops & Patterns
// Level: 2 [Q9]

#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<"Fibonacci series up to how many terms? ";
    cin>>num;

    int first = 0;
    int second = 1;

    for(int i=0; i<=num; i++){
        cout<<first<<endl;
        
        int next = first+second;
        first = second;
        second = next;
    }
    return 0;
}


