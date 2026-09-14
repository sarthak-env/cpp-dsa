// Problem: Take time (hours and minutes) and print the smaller angle between the hour and minute hands.
// Phase: 1 - Conditionals
// Level: 5 [Q4]

#include <iostream>
using namespace std;

int main() {
    int hrs, mins;

    cout<<"What's the time (in hours and minutes)? "<<endl;
    cin>>hrs>>mins;

    double hrs_angle = hrs*30 + mins*0.5;
    double mins_angle = mins*6;

    double angle =abs(hrs_angle - mins_angle);

    if(angle > 180){
        angle = 360-angle;
    }

    cout<<"The smaller angle is "<<angle<<" degrees"<<endl;

    return 0;
}
