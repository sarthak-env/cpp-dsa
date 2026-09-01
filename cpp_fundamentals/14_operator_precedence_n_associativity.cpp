// Operator Precedence and Association in C++

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5, c = 2;

    // Example of operator precedence
    int result1 = a + b * c; // Multiplication has higher precedence than addition
    cout << "Result of a + b * c: " << result1 << endl; 

    // Example of operator association
    int result2 = (a + b) * c; // Parentheses change the order of evaluation
    cout << "Result of (a + b) * c: " << result2 << endl; 

    // Example of right-to-left association
    int x = 5;
    x += 3; // Equivalent to x = x + 3
    cout << "Value of x after x += 3: " << x << endl; 

    return 0;
}

/*
Note:
- Operator precedence determines which operators are evaluated first.
- The following are some common operators, from higher to lower precedence:
- 1. Postfix operators (e.g., x++, x--)
- 2. Unary operators (e.g., ++x, --x, !x, -x)
- 3. Multiplication, Division, and Modulus (*, /, %)
- 4. Addition and Subtraction (+, -)
*/