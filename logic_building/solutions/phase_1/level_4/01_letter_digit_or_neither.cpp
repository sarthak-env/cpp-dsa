// Problem: Take a character and check if it is a letter, a digit, or neither.
// Phase: 1 - Conditionals
// Level: 4 [Q1]

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char character;

    cout<<"What's the character? "<<endl;
    cin>>character;

    if(isalpha(character)){
        cout<<"The character is a letter"<<endl;
    }
    else if(isdigit(character)){
        cout<<"The character is a number"<<endl;
    }
    else{
        cout<<"The character is neither a letter nor a number"<<endl;
    }

    return 0;
}
