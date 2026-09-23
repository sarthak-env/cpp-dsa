// Problem: Print a right-aligned triangle of stars.
// Phase: 2 - Loops & Patterns
// Level: 4 [Q6]

#include<iostream>
using namespace std;

int main(){
    int stars;

    cout<<"How many stars would you like to print? ";
    cin>>stars;

    for(int i=0; i<stars; i++){
        for(int j=0; j<stars-i-1; j++){ //This prints the spaces first
            cout<<" ";
        }
        for(int k=0; k<=i; k++){ //This prints the stars after the spaces are printed
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}