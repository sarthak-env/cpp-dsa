// Problem: Take three sides and check if they form a valid triangle.
// Phase: 1 - Conditionals 
// Level: 2 [Q1]

#include<iostream>
using namespace std;

int main(){
    int side_1, side_2, side_3;
    cout<<"Enter the three sides of the triangle: ";
    cin>>side_1>>side_2>>side_3;

    if(side_1>0 && side_2>0 && side_3>0){
        if((side_1 + side_2 > side_3) && (side_1 + side_3 > side_2) && (side_2 + side_3 > side_1)){
            cout<<"The given sides form a valid triangle."<<endl;
        }
        else{
            cout<<"The given sides do not form a valid triangle."<<endl;
        }
    }
    else{
        cout<<"Invalid input. Sides must be positive integers."<<endl;
    }
}