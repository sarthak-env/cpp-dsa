#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    float pi = 3.14f; // f is used to indicate that the literal is a float
    long double piLong = 3.14L; // L is used to indicate that the literal is a long double

    cout << "Float pi: " << pi << endl;
    cout << typeid(pi).name() << endl; // typeid returns information about the type
    cout << "Size of float: " << sizeof(pi) << endl; // sizeof returns the size of the variable in bytes
    cout << endl;

    cout << "Long double pi: " << piLong << endl;
    cout << typeid(piLong).name() << endl;
    cout << "Size of long double: " << sizeof(piLong) << endl;
    cout << endl;

    // Type Casting
    int a = 45;
    float b = 45.46;

    cout << "The value of a is " << (float)a << endl; 
    cout << "The value of a is " << float(a) << endl;
    cout<<endl;

    cout << "The value of b is " << (int)b << endl;  
    cout << "The value of b is " << int(b) << endl;

    int c = int(b);

    cout << "The value of c is " << c << endl;
}                                   