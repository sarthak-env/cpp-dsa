// Problem: Check if a number is an Armstrong number.
// Phase: 2 - Loops & Patterns
// Level: 2 [Q5]

#include <iostream>
using namespace std;

int main() {
    int num;
    int cubed_sum=0;

    cout<<"What's the number? ";
    cin>>num;

    int original_num=num;

    while(num!=0){
        int digit= num%10;
        cubed_sum=cubed_sum+(digit*digit*digit);
        num/=10;

    }

    if(cubed_sum==original_num){
        cout<<"The number "<<original_num<<" is an armstrong number"<<endl;
    }
    else{
        cout<<"The number "<<original_num<<" is not an armstrong number"<<endl;        
    }

    return 0;
}
