// Problem: Take three numbers and print the median value (neither maximum nor minimum).
// Phase: 1 - Conditionals
// Level: 4 [Q3]

#include <iostream>
using namespace std;

int main() {
    int num_1,num_2,num_3;

    cout<<"What's the first number? "<<endl;
    cin>>num_1;

    cout<<"What's the second number? "<<endl;
    cin>>num_2;

    cout<<"What's the third number? "<<endl;
    cin>>num_3;

    if ((num_1>=num_2 && num_1<=num_3) || (num_1<=num_2 && num_1>=num_3)) {
        cout<<"The median value is "<<num_1<<endl;
    }
    else if ((num_2>=num_1 && num_2<=num_3) ||(num_2<=num_1 && num_2>=num_3)) {
        cout<<"The median value is "<<num_2<<endl;
    }
    else {
        cout<<"The median value is "<<num_3<<endl;
    }

    return 0;
}
