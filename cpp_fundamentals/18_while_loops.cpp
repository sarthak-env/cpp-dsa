// while loop in C++

#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 50) {
        if (i % 3 == 0 and i % 5 == 0) { 
            cout << "FizzBuzz" << endl; // if the number is divisible by both 3 and 5, print "FizzBuzz"
        }
        else if (i % 3 == 0) {
            cout << "Fizz" << endl; // if the number is divisible by 3, print "Fizz"
        }
        else if (i % 5 == 0) {
            cout << "Buzz" << endl; // if the number is divisible by 5, print "Buzz"
        }
        else {
            cout << i << endl; //else print the number itself
        }
        i++; // increment the value of i by 1
    }
}