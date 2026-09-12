// Problem: Check whether a number is a perfect square without using sqrt
// Phase: 1 - Conditionals
// Level: 3 [Q10]

#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"What's the number? "<<endl;
    cin>>num;

    for(int i=1; i*i<=num; i++){
        if(i*i == num){
            cout<<num<< " is a perfect square"<<endl;
            return 0;
        }
    }
    cout<<num<<" is not a perfect square"<<endl;

    return 0;
}
