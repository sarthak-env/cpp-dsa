// Problem: Print the sum of first n natural numbers.
// Phase: 2 - Loops & Patterns
// Level: 1 [Q6]

#include <iostream>
using namespace std;

int main() {
    int n;
    int n_sum=0;

    cout<<"What's the natural number?";
    cin>>n;

    for(int i=1; i<=n; i++){
        n_sum=n_sum+i;   
    }
    cout<<"The sum of all natural numbers up to "<<n<<" is "<<n_sum;

    return 0;
}
