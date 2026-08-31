#include<iostream>
using namespace std;

int c=50; // global variable c

int main(){
    int a=10, b=20;
    int c=30; // local variable c

    cout<<"Local variable c: "<<c<<endl;
    cout<<"Global variable c: "<<::c<<endl; // ::c is used to access the global variable c
}

/*
Note: '::' is the scope resolution operator in C++
It is used to access global variables or functions when there is a local variable or function with the same name
In this case, '::c' refers to the global variable 'c', while 'c' refers to the local variable 'c' defined within the main function
*/