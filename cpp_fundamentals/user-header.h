/*
This is a user-defined header file that declares the function sayHello()
The implementation of this function is provided in the corresponding source file (cpp_fundamentals/07_header_files.cpp)
The header file uses include guards to prevent multiple inclusions, which can lead to compilation errors
*/
#ifndef USER_HEADER_H //This is an include guard that checks if USER_HEADER_H is not defined
#define USER_HEADER_H // This line defines USER_HEADER_H to prevent multiple inclusions of this header file

void sayHello();

#endif //This line ends the include guard