// Problem: Print all prime numbers between 1 and 100.
// Phase: 2 - Loops & Patterns
// Level: 2 [Q7]

#include <iostream>
using namespace std;

int main() {

    for(int i=1; i<=100; i++){
        bool is_prime=true;

        if(i==1){
            continue;
        }
        for( int j=2; j*j<=i; j++){
            if(i%j==0){
                is_prime=false;
                break;
            }
        }
        if(is_prime){
            cout<<i<<endl;
        }
        
    }

    return 0;
}
