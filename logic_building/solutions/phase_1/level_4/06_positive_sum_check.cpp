// Problem: Take two numbers and check if both are positive and their sum is less than 100.
// Phase: 1 - Conditionals
// Level: 4 [Q6]

#include <iostream>
using namespace std;

int main() {
    int num_1, num_2;
    cout<<"What are the two numbers? "<<endl;
    cin>>num_1>>num_2;

    if (num_1>0 && num_2>0 && num_1+num_2<100){
        cout <<"Both the numbers are positive and their sum is less than 100"<<endl;
        cout<<"Their sum is "<<num_1+num_2<<endl;
    } else {
        if(num_1<0){
            cout<<"The first number of the two numbers is not positive"<<endl;
        }
        else if(num_2<0){
            cout<<"The second number of the two numbers is not positive"<<endl;
        }
        else if(num_1>0 && num_2>0 && num_1+num_2>=100) {
            cout<<"Their sum is not less than 100"<<endl;
        }
    }

    return 0;
}
