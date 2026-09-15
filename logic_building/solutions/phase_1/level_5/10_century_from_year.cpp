// Problem: Take a year and print the corresponding century (e.g., “19th century”, “20th century”).
// Phase: 1 - Conditionals
// Level: 5 [Q10]

#include <iostream>
using namespace std;

int main() {
    int year;

    cout<<"Enter a year: ";
    cin>>year;

    if(year%100==0){
        cout<<year/100<<"th century";
    }
    else{
        cout<<year/100+1<<"th century";
    }

    return 0;
}
