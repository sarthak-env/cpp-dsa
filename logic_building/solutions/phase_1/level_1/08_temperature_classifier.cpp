// Problem: Take a temperature value and print “Cold”, “Warm”, or “Hot” using range conditions
// Phase: 1 - Conditionals 
// Level: 1 [Q8]

#include<iostream>
using namespace std;

int main(){
    int temperature;
    cout<<"What's the temperature?  ";
    cin>>temperature;

    if(temperature<20){
        cout<<"The temperature is cold";
    }
    else if(temperature>=20 && temperature<=30){
        cout<<"The temperature is warm";
    }
    else{
        cout<<"The temperature is hot";
    }
    return 0;
}