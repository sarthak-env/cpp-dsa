// Problem: Find the sum of all factors of a number.
// Phase: 2 - Loops & Patterns
// Level: 3 [Q7]

#include <iostream>
using namespace std;

int main() {
    int num;
    int factor_sum=0;

    cout<<"What's the number? ";
    cin>>num;

    cout<<"The factors of "<<num<<" are:"<<endl;

    for(int i=1; i<=num; i++){
        if(num%i==0){
            factor_sum=factor_sum+i;
        }

    }
    cout<<"The sum of all the factors of "<<num<<" is "<<factor_sum;

    return 0;
}