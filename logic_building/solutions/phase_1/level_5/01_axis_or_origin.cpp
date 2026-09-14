// Problem: Take coordinates (x, y) and check if the point lies on the X-axis, Y-axis, or at the origin.
// Phase: 1 - Conditionals
// Level: 5 [Q1]

#include <iostream>
using namespace std;

int main() {
    int x,y;

    cout<<"What are the x and y coordinate values? "<<endl;
    cin>>x>>y;

    if(x==0 && y==0){
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
