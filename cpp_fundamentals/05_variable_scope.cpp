#include <iostream>
using namespace std;

string wifiPassword = "12345678"; // This is a global variable

void checkWifi()
{
    // We can access the global variable from this function.
    cout << "Wi-Fi Password: " << wifiPassword << endl;
}

int main()
{
    string phonePassword = "9876"; // This is a local variable

    cout << "Phone Password: " << phonePassword << endl;
    cout << "Wi-Fi Password: " << wifiPassword << endl;

    checkWifi(); // This works because wifiPassword is a global variable.

    return 0;
}

/*
    Here,

    phonePassword is a local variable.
    It can only be used inside main().

    wifiPassword is a global variable.
    It can be accessed from different functions
    because it is declared outside all functions.
*/