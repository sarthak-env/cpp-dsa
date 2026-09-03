// for loops in C++

#include <iostream>
using namespace std;

int main(){
    for (int bottle_count=100; bottle_count>0; bottle_count--){
        cout << bottle_count << " bottles of beer on the wall, "<<bottle_count<<" bottles of beer, take one down, pass it around "<<bottle_count-1<<" bottles of beer on the wall"<<endl;
    }
}
