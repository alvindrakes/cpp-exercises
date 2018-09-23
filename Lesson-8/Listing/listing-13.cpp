// poor pointer hygiene in a program that stores a boolean value using pointers

#include <iostream>
using namespace std;

int main()
{
    // uninitialised pointer BAD
    bool* isSunny;

    cout << "Is it sunny (y/n): ";
    char userInput = 'y';
    cin >> userInput;

    if (userInput == 'y')
    {
        isSunny = new bool;
        *isSunny = true;
    }

    // isSunny containes invalid value if user enter 'n'
    cout << "Boolean flag sunny says: " << *isSunny << endl;

    delete isSunny; // BAD as not allocated for using 'new'

    return 0;
}