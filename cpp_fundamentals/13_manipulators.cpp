// Manipulators in C++
// Manipulators are the operators that are used to format the display of the output

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
     // endl is a manipulator that inserts a new line
    cout << "Hello, World!" << endl;
    
    // setw is a manipulator that sets the width of the output field
    cout << setw(10) << "Hello" << endl;
    cout << setw(20) << "World" << endl;

    return 0;
}
