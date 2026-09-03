// do-while loop in C++

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int secret_number = rand() % 100 + 1; // generate a random number between 1 and 100
    int guess;

    do {
        cout << "Guess the secret number between 1 and 100: ";
        cin >> guess;

        if (guess < secret_number) {
            cout << "Too low!" << endl;
        }
        else if (guess > secret_number) {
            cout << "Too high!" << endl;
        }
        else {
            cout << "Correct!" << endl;
        }

    } while (guess != secret_number); 
}