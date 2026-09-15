// Problem: Print the table of a given number (n × 1 to n × 10).
// Phase: 2 - Loops & Patterns
// Level: 1 [Q5]

#include <iostream>
using namespace std;

int main() {
    int table_of;

    cout<<"What number's table would you like to print? ";
    cin>>table_of;

    for(int i=1; i<=10; i++){
        cout<<table_of<<" x "<<i<<" = "<<table_of*i<<endl;
    }

    return 0;
}
