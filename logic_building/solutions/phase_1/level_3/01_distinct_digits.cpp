// Problem: Take a 3-digit number and check if all digits are distinct
// Phase: 1 - Conditionals
// Level: 3 [Q1]

#include<iostream>
#include <cctype>
using namespace std;

int main(){
    string number_three_digits;
    
    cout<<"Enter the three numbers:"<<endl;
    cin>>number_three_digits;

    if(number_three_digits.length()==3 &&  isdigit(number_three_digits[0]) && isdigit(number_three_digits[1]) && isdigit(number_three_digits[2])){
        if( number_three_digits[0] != number_three_digits[1] && number_three_digits[0] != number_three_digits[2] && number_three_digits[1] != number_three_digits[2]){
            cout<<"All three digiits are distinct (different)"<<endl;
        }
        else{
            cout<<"All the three digits are not distinct"<<endl;
        }
    }
    else{
        cout<<"Enter a three digit number:"<<endl;
    }

    return 0;

}