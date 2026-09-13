// Problem: Take a password string and check basic rules (length ≥ 8 and contains at least one digit).
// Phase: 1 - Conditionals
// Level: 4 [Q10]

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string password;
    bool hasDigit=false;

    cout<<"Enter password: "<<endl;
    cin>>password;

    for(char ch : password){
        if(isdigit(ch)){
            hasDigit=true;
            break;
        }
    }

    if(password.length()>=8 && hasDigit){
        cout<<"Valid password"<<endl;
    }
    else {
        cout<<"Invalid password"<<endl;
    }

    return 0;
}
