// break and continue statements in C++:

// Treasure Hunt Challenge:
//
// Explore rooms 1 to 20:
// If you reach room 13, find the treasure and stop the loop
// If a room is divisible by 3, skip that room
// If a room is even, print "Nothing here..."
// If a room is odd, print "You found a clue!"

#include <iostream>
using namespace std;

int main() {
    for (int room = 1; room <= 20; room++) {

        if (room == 13) {
            cout << "TREASURE FOUND!" << endl;
            break; // stop execution if the condition returns true
        }
        else if (room % 3 == 0) {
            continue; // continue execution if the condition returns true
        }

        else if (room % 2 == 0) {
            cout << "Nothing here..." << endl;
        }
        else {
            cout << "You found a clue!" << endl;
        }
    }
}