// Problem: Take marks (0-100) and print the corresponding grade (A/B/C/D/F)
// Phase: 1 - Conditionals
// Level: 2 [Q3]

#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter the marks (0-100): "<<endl;
    cin>>marks;

    if(marks>=0 && marks<=100){
        if(marks>=90){
            cout<<"Grade: A"<<endl;
        }
        else if(marks>=80){
            cout<<"Grade: B"<<endl;
        }
        else if(marks>=70){
            cout<<"Grade: C"<<endl;
        }
        else if(marks>=60){
            cout<<"Grade: D"<<endl;
        }
        else{
            cout<<"Grade: F"<<endl;
        }
    }
    else{
        cout<<"Invalid marks entered. Please enter marks between 0 and 100."<<endl;
    }
    
    return 0;
}