// Problem: Take a character and check if it’s a vowel or consonant
// Phase: 1 - Conditionals 
// Level: 1 [Q9]

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        cout<<ch<<" is a vowel";
    }
    else{
        cout<<ch<<" is a consonant";
    }
    return 0;
}