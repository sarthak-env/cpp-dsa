// Problem: Check if a number is a strong number (sum of factorials of digits = number).
// Phase: 2 - Loops & Patterns
// Level: 3 [Q8]

#include <iostream>
using namespace std;

int main() {
    int num;
    int fact_sum=0;

    cout<<"What's the number? ";
    cin>>num;

    int original_num=num;

    while (num > 0) {
        int digit=num%10;

        int fact=1;
        for (int i=1; i<=digit; i++) {
            fact=fact*i;
        }

        fact_sum=fact_sum+fact;
        num=num/10;
    }

    if (fact_sum==original_num)
        cout<<"The number "<<original_num<<"is a strong number";
    else
        cout<<"The number "<<original_num<<"is not a strong number";

    return 0;
}
