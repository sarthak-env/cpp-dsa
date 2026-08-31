#include<iostream>
using namespace std;

int main(){
    string firstName, lastName, collegeName, ProgrammingLanguage;
    int age;
    float gpa;

    cout<<"Enter your first name:" <<endl; //This is a prompt for the user to enter their first name
    cin>>firstName; //This line reads the input from the user and stores it in the variable firstName

    cout<<"Enter your last name:" <<endl; //This is a prompt for the user to enter their last name
    cin>>lastName; //This line reads the input from the user and stores it in the variable lastName

    cout<<"Enter your college name:" <<endl; //This is a prompt for the user to enter their college name
    cin>>collegeName; //This line reads the input from the user and stores it in the variable collegeName

    cout<<"Enter your age:" <<endl; //This is a prompt for the user to enter their age
    cin>>age; //This line reads the input from the user and stores it in the variable age

    cout<<"Enter your GPA:" <<endl; //This is a prompt for the user to enter their GPA
    cin>>gpa; //This line reads the input from the user and stores it in the variable gpa

    cout<<"Enter your favorite programming language:" <<endl; //This is a prompt for the user to enter their favorite programming language
    cin>>ProgrammingLanguage; //This line reads the input from the user and stores it in the variable ProgrammingLanguage

    cout<<"Name: " << firstName << " " << lastName << endl;
    cout<<"Age: " << age << endl;
    cout<<"College: " << collegeName << endl;
    cout<<"GPA: " << gpa << endl;
    cout<<"Favorite Language: " << ProgrammingLanguage << endl;
    

    cout<<"\nHello " << firstName << "! You are "<< age << " years old and your GPA is " << gpa << "." << endl;



    return 0;
}

/*
Note:
- "cin >> variable" reads input only until the first whitespace
- Therefore, it cannot read multi-word input such as: "Watumull Institute of Engineering and Technology"
- For now, use single-word input for strings
- Later, getline() will be used to read complete lines containing spaces
*/

