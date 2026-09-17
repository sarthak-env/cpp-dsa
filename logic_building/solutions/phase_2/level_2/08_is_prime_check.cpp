// Problem: Check if a number is prime or not.
// Phase: 2 - Loops & Patterns
// Level: 2 [Q8]

#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<"What's the number? ";
    cin>>num;

    int original_num=num;

    bool is_prime=true;

        if(num<2){
            cout<<"The number "<<original_num<<" is neither a prime number nor a composite number"<<endl;
            return 0;
        }

        for( int j=2; j*j<=num; j++){
            if(num%j==0){
                is_prime=false;
                break;
            }
        }
        
        if(is_prime){
            cout<<"The number "<<original_num<<" is a prime number"<<endl;
        }
        else{
            cout<<"The number "<<original_num<<" is not a prime number"<<endl;        
        }

    return 0;
}
