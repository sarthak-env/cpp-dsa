// Problem: Take a 3-digit number and check if the sum of the first and last digit equals the middle digit.
// Phase: 1 - Conditionals
// Level: 5 [Q7]

#include <iostream>
using namespace std;

int main() {
    int num;

    cout<<"What the three digit number? "<<endl;
    cin>>num;

    int first=num/100;
    int middle=(num/10)%10;
    int last=num%10;

    if(first+last==middle){
        cout<<"The sum of the first and last digit equals the middle digit"<<endl;
    }
    else{
        cout<<"The sum of the first and last digit does not equal the middle digit"<<endl;
    }

    return 0;
}
