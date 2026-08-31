#include<iostream>
using namespace std;

int main(){
    int a=10, b=5;
    cout<<"Operators in C++"<<endl;
    cout<<endl;

    // Arithmetic Operators
    cout<<"The sum of a and b is: "<<a+b<<endl; // Addition
    cout<<"The difference of a and b is: "<<a-b<<endl; // Subtraction
    cout<<"The product of a and b is: "<<a*b<<endl; // Multiplication
    cout<<"The quotient of a and b is: "<<a/b<<endl; // Division
    cout<<"The remainder of a and b is: "<<a%b<<endl; // Modulus
    cout<<endl;

    // Increment and Decrement Operators
    cout<<"The value of a++ is: "<<a++<<endl; // Post-increment
    cout<<"The value of --b is: "<<--b<<endl; // Pre-decrement
    cout<<"The value of --a is: "<<--a<<endl; // Pre-decrement
    cout<<"The value of b++ after --b is: "<<b++<<endl; // Post-increment
    cout<<endl;

    //Assignment Operators
    int c=20;
    cout<<"The value of c is: "<<c<<endl;
    cout<<endl;

    // Comparison Operators
    cout<<"Is a equal to b? "<<(a==b)<<endl; // Equal to
    cout<<"Is a not equal to b? "<<(a!=b)<<endl; // Not equal to    
    cout<<"Is a greater than b? "<<(a>b)<<endl; // Greater than
    cout<<"Is a less than b? "<<(a<b)<<endl; // Less than
    cout<<"Is a greater than or equal to b? "<<(a>=b)<<endl; // Greater than or equal to
    cout<<"Is a less than or equal to b? "<<(a<=b)<<endl; // Less than or equal to
    cout<<endl;

    // Logical Operators
    cout<<"Is a greater than b AND a less than 20? "<<((a>b) && (a<20))<<endl; // Logical AND
    cout<<"Is a greater than b OR a less than 20? "<<((a>b) || (a<20))<<endl; // Logical OR
    cout<<"Is a NOT equal to b? "<<!(a==b)<<endl; // Logical NOT
    cout<<endl;
}