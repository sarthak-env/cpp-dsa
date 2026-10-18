// pointers in C++:

#include<iostream>
using namespace std;

int main(){
    int data=125;
    int* data_ptr=&data;

    cout<<"The data is "<<data<<endl;
    cout<<"The data is stored in the location "<<data_ptr<<endl;

    return 0;
}
/*
Here, 
- 1.* --> The asterisk (*) is used to declare a pointer variable.
- 2.& --> The ampersand (&) is used to get the address of a variable.
*/