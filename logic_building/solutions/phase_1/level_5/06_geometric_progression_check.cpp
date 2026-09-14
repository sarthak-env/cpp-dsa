// Problem: Take three numbers and check if they are in geometric progression.
// Phase: 1 - Conditionals
// Level: 5 [Q6]

#include <iostream>
#include<iostream>
using namespace std;

int main(){
int num_1,num_2,num_3;

cout<<"What's the first number? "<<endl;
cin>>num_1;

cout<<"What's the second number? "<<endl;
cin>>num_2;

cout<<"What's the third number? "<<endl;
cin>>num_3;

if(num_1!=0 && num_2!=0 && num_2*num_2==num_1*num_3){
    cout<<"The three numbers "<<num_1<<", "<<num_2<<", "<<num_3<<" are in Geometric progression"<<endl;
}
else{
    cout<<"The three numbers "<<num_1<<", "<<num_2<<", "<<num_3<<" are not in Geometric progression"<<endl;
}

return 0;
}
