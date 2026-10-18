// Pointer-to-pointer in C++: a pointer that stores the address of another pointer.

/*
    *  is the dereference operator --> accesses the value at an address.
    &  is the address-of operator --> gets the address of a variable.
*/

#include <iostream>
using namespace std;

int main() {
    int a = 10;

    int* a_ptr = &a;          // stores the address of a
    int** a_ptr_ptr = &a_ptr; // stores the address of a_ptr

    cout << "The value of a is " << a << endl;
    cout << "The value of a is " << *a_ptr << endl;
    cout << "The value of a is " << **a_ptr_ptr << endl;

    cout << "The address of a is " << &a << endl;
    cout << "The address of a_ptr is " << a_ptr << endl;
    cout << "The address of a_ptr_ptr is " << &a_ptr_ptr << endl;

    return 0;
}
