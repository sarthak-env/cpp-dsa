// Problem: Take two angles of a triangle and compute the third angle
// Phase: 1 - Conditionals
// Level: 3 [Q9]

#include<iostream>
using namespace std;

int main(){
    int angle_1,angle_2;
    int angle_3;

    cout<<"What's the first angle? "<<endl;
    cin>>angle_1;

    cout<<"What's the second angle? "<<endl;
    cin>>angle_2;

    if(angle_1>0 && angle_2>0 && angle_1+angle_2<180){
        angle_3=180-(angle_1+angle_2);
        cout<<"The third angle is "<<angle_3<<endl;
    }
    else{
        cout<<"A triangle cannot be formed"<<endl;
    }

    return 0;
}