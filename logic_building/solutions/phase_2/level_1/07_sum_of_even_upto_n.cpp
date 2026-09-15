// Problem: Print the sum of all even numbers up to n.
// Phase: 2 - Loops & Patterns
// Level: 1 [Q7]

#include <iostream>
using namespace std;

int main() {
    int n;
    int n_sum=0;

    cout<<"What's the natural number?";
    cin>>n;

    for(int i=2; i<=n; i+=2){
        n_sum=n_sum+i;
    }
    cout<<"The sum of all even numbers up to "<<n<<" is "<<n_sum;

    return 0;
}
