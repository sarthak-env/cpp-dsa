// Problem: If the sides form a valid triangle, determine whether it is equilateral, isosceles, or scalene
// Phase: 1 - Conditionals 
// Level: 2 [Q2]

#include<iostream>
using namespace std;

int main(){
    int side_1, side_2, side_3;
    cout<<"Enter the three sides of the triangle: "<<endl;
    cin>>side_1>>side_2>>side_3;

    if(side_1>0 && side_2>0 && side_3>0){
        if((side_1 + side_2 > side_3) && (side_1 + side_3 > side_2) && (side_2 + side_3 > side_1)){
            cout<<"The given sides form a valid triangle."<<endl;

            if((side_1 == side_2) && (side_2 == side_3)){
                cout<<"The triangle is equilateral."<<endl;
            }
            else if((side_1 == side_2) || (side_1 == side_3) || (side_2 == side_3)){
                cout<<"The triangle is isosceles."<<endl;
            }
            else{
                cout<<"The triangle is scalene."<<endl;
            }
        }
        else{
            cout<<"The given sides do not form a valid triangle."<<endl;
        }
    }
    else{
        cout<<"Invalid input. Sides must be positive integers."<<endl;
    }

    return 0;
}