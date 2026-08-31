/* 
Header Files in C++ :
There are two types of header files in C++:
1. Standard Header Files: These are the header files that come with the C++ standard library
2. User-defined Header Files: These are the header files that are created by the user to include their own functions, classes, and variables
*/

#include<iostream> //This is a standard header file that contains the declarations of the input/output stream objects
#include "user-header.h" //This is a standard header file that contains the declarations of the string class and its member functions
using namespace std;

void sayHello() {
    cout << "Hello from my header!\n";
}

int main() {
    sayHello();
    return 0;
}

// Note: You need to create a file named "user-header.h" in the same directory as this cpp file for the code to compile successfully