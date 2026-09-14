// Problem: Take an integer (1–9999) and check if the sum of its digits is greater than the product of its digits.
// Phase: 1 - Conditionals
// Level: 5 [Q8]

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Write a number between 1 to 9999:"<<endl;
    cin>>num;

    if(num<1 || num>9999){
        cout<<"Invalid input"<<endl;
        return 0;
    }

    int temp = num;
    int sum = 0;
    int product = 1;

    while(temp>0)
    {
        int digit = temp%10;

        sum+=digit;
        product*=digit;

        temp/=10;
    }

    if(sum>product)
        cout<<"Sum is greater than product"<<endl;
    else
        cout<<"Sum is not greater than product"<<endl;

    return 0;
}
