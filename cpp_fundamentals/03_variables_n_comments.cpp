#include<iostream>
using namespace std;

int main(){
    int age=21; //This stores the age of the person
    /*
    We can change the value of age later in the program
    whenever we need to.
   */
    age=22; //This changes the value of age to 22
    cout << "Your age is:  " << age; // This prints the age of the person to the console
    return 0;       
}

/* 
Note:
- Comments are used to explain the code and make it easier to understand
- Single-line comments are used to write short explanations on one line
- Multi-line comments are used to write longer explanations that span multiple lines

Rules for naming variables:
- Variable names can contain letters, digits, and underscores
- Variable names must begin with a letter or an underscore
- Variable names are case-sensitive (age and Age are different variables)
- Variable names should not be a reserved keyword in C++ (like int, float, return, etc.)
- Variable names should be descriptive and meaningful (like age, marks, price, etc.)
-Variable names can range from 1 to 255 characters in length, but it is recommended to keep them short and concise for better readability


*/