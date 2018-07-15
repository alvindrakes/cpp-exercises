#include <iostream>
using namespace std;

// function declaration and definition 
int DemoConsoleOutput()
{
    cout << "This is a simple literal string" << endl;
    cout << "writing number 5: " << 5 << endl;
    cout << "Performing division of 10 / 5: " << 10 / 5 << endl;
    cout << "Pi when approximated is 22 / 7: " << 22 / 7 << endl;
    cout << "Pi is 22 / 7: " << 22.0 / 7 << endl;  // the compiler know and treat the 22.0 / 7 as a float number

    return 0;
}

int main()
{
    // fucntion called and use value returned to exit 
    return DemoConsoleOutput();
}



