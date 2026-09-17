// Problem: Print sum of first n terms of Fibonacci series.
// Phase: 2 - Loops & Patterns
// Level: 2 [Q10]

#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<"Fibonacci series up to how many terms? ";
    cin>>num;

    int first = 0;
    int second = 1;
    int sum = 0;

    for(int i=0; i<num; i++){
        sum = sum + first;
        
        int next = first+second;
        first = second;
        second = next;
    }
    cout << "The sum of first " << num << " in Fibonacci series is " << sum << endl;

    return 0;
}


