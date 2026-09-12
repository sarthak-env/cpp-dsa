// Problem: Take coordinates (x, y) and determine which quadrant the point lies in
// Phase: 1 - Conditionals
// Level: 3 [Q6]

#include<iostream>
using namespace std;

int main(){
    int x,y;

    cout<<"What's the X coordinate? "<<endl;
    cin>>x;

    cout<<"What's the Y coordinate? "<<endl;
    cin>>y;

    if(x>0 && y>0){
        cout<<"The point lies in the first quadrant"<<endl;
    }
    else if(x<0 && y>0){
        cout<<"The point lies in the second quadrant"<<endl;
    }
    else if(x<0 && y<0){
        cout<<"The point lies in the third quadrant"<<endl;
    }
    else if(x>0 && y<0){
        cout<<"The point lies in the fourth quadrant"<<endl;
    }
    else if(x==0 && y==0){
        cout<<"The point lies on the origin"<<endl;
    }
    else if(x==0){
        cout<<"The point lies on the Y-axis"<<endl;
    }
    else{
        cout<<"The point lies on the X-axis"<<endl;
    }

    return 0;
}