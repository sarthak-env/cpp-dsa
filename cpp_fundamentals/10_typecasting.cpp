#include<iostream>
#include <typeinfo>
using namespace std;

int main(){
    float pi = 3.14f; // f is used to indicate that the literal is a float
    long double piLong = 3.14L; // L is used to indicate that the literal is a long double

    cout<<"Float pi: "<<pi<<endl;
    cout<<typeid(pi).name() << endl; // typeid returns the type of the variable
    cout<<"Size of float: "<<sizeof(pi)<<endl; // sizeof returns the size of the variable in bytes
    cout<<endl;

    cout<<"Long double pi: "<<piLong<<endl;
    cout<<typeid(piLong).name() << endl;
    cout<<"Size of long double: "<<sizeof(piLong)<<endl; // sizeof returns the size of the variable in bytes
}