// Problem: Check if a number is a perfect number.
// Phase: 2 - Loops & Patterns
// Level: 2 [Q6]

#include <iostream>
using namespace std;

int main() {
    int num;
    int divisor_sum=0;

    cout<<"What's the number? ";
    cin>>num;

    int original_num=num;

    for( int i=1; i<num; i++){
        if(num%i==0){
            divisor_sum=divisor_sum+i;
            cout<<divisor_sum<<endl;
        }
    }

    
    if(divisor_sum==original_num){
        cout<<"The number "<<original_num<<" is an perfect number"<<endl;
    }
    else{
        cout<<"The number "<<original_num<<" is not a perfect number"<<endl;
    }

    return 0;
}
