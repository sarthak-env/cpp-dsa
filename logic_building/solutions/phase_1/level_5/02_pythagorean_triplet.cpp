// Problem: Take three numbers and check if they can form a Pythagorean triplet.
// Phase: 1 - Conditionals
// Level: 5 [Q2]

#include <iostream>
using namespace std;

int main() {
    int side_1, side_2, side_3;

    cout<<"What's the first side? "<<endl;
    cin>>side_1;

    cout<<"What's the second side? "<<endl;
    cin>>side_2;

    cout<<"What's the third side? "<<endl;
    cin>>side_3;

    if(side_1>0 && side_2>0 && side_3>0){
        int largest_side;
        int other_side_1;
        int other_side_2;

        if(side_1>=side_2 && side_1>=side_3){
            largest_side=side_1;
            other_side_1=side_2;
            other_side_2=side_3;
        }
        else if(side_2>=side_1 && side_2>=side_3){
            largest_side=side_2;
            other_side_1=side_1;
            other_side_2=side_3;
        }
        else{
            largest_side=side_3;
            other_side_1=side_1;
            other_side_2=side_2;
        }

        if(other_side_1*other_side_1+other_side_2*other_side_2 == largest_side*largest_side){
            cout<<"They form a Pythagorean triplet"<<endl;
        }
        else{
            cout<<"They do not form a Pythagorean triplet"<<endl;
        }
    }
    else{
        cout<<"Please make sure that all the sides entered are positive"<<endl;
    }

    return 0;
}
