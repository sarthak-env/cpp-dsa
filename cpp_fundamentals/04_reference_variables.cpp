// Reference Variables in C++ :
// A reference variable is an alias for another variable 
// It is created using the '&' operator
// Once a reference variable is initialized to a variable, it cannot be changed to refer to another variable 
// Reference variables are often used to pass arguments to functions by reference, allowing the function to modify the original variable

#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int &ref = a; // ref is a reference variable to a
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of ref: "<<ref<<endl;

    return 0;
}