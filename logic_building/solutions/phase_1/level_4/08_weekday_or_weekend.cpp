// Problem: Take a weekday number (1–7) and determine if it is a weekday or weekend.
// Phase: 1 - Conditionals
// Level: 4 [Q8]

#include <iostream>
using namespace std;

int main() {
    int day;

    cout<<"Enter weekday number (1-7): "<<endl;
    cin>>day;

    if(day>=1 && day<=5){
        cout<<"Its a Weekday 😞😭"<<endl;
    }
    else if(day==6 || day==7) {
        cout<<"Itsss aaa Weekendddd 😆🙌"<<endl;
    }
    else{
        cout<<"Invalid weekday number"<<endl;
    }

    return 0;
}
