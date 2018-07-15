#include <iostream>
using namespace std;

// Declare a function 
int DemoConsoleOutput();

int main()
{
    // invoke the function
    DemoConsoleOutput();

    return 0;
}

int DemoConsoleOutput()
{
    cout << "This is a simple literal string" << endl;
    cout << "writing number 5: " << 5 << endl;
    cout << "Performing division of 10 / 5: " << 10 / 5 << endl;
    cout << "Pi when approximated is 22 / 7: " << 22 / 7 << endl;
    cout << "Pi is 22 / 7: " << 22.0 / 7 << endl;

    return 0;
}

