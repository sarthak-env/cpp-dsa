// Problem: Check if an amount can be evenly divided into 2000, 500, and 100 currency notes
// Phase: 1 - Conditionals
// Level: 3 [Q7]

#include<iostream>
using namespace std;

int main(){
    int amount;

    cout<<"What's the amount? "<<endl;
    cin>>amount;

    if(amount % 2000 == 0){
        cout<<"Your Amount "<<amount<<" can be evenly divided into 2000 currency notes"<<endl;
        int in_2000s=amount/2000;
        cout << "You would get " << in_2000s <<"2000 notes"<<endl;
    }
    if(amount % 500 == 0){
        cout<<"Your Amount "<<amount<<" can be evenly divided into 500 currency notes"<<endl;
        int in_500s=amount/500;
        cout << "You would get " << in_500s <<"500 notes"<<endl;
    }
    if(amount % 100 == 0){
        cout<<"Your Amount "<<amount<<" can be evenly divided into 100 currency notes"<<endl;
        int in_100s=amount/100;
        cout << "You would get " << in_100s <<"100 notes"<<endl;
    }
    return 0;
}