// Problem: Check if a number is a palindrome.
// Phase: 2 - Loops & Patterns
// Level: 2 [Q3]

#include <iostream>
using namespace std;

int main() {
    int num;

    cout<<"What's the number? ";
    cin>>num;

    int original_num=num;
    int reversed_num=0;

    while(num!=0){
        int digit= num%10;
        reversed_num= reversed_num*10+digit;
        num/=10;
    }

    if(original_num==reversed_num){
        cout<<"The number "<<original_num<<" is a palindrome"<<endl;
    }
    else{
        cout<<"The number "<<original_num<<" is not a palindrome"<<endl;        
    }

    return 0;
}
