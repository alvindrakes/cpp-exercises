// Manipulating Data using a Pointer and the Deference Operator (*)

#include <iostream>
using namespace std;

int main()    
{
    int dogAge = 9;
    cout << "Initialized dogAge = " << dogAge << endl;

    int* pointsToInt = &dogAge;
    cout << "pointsToInt points to dogAge" << endl;

    cout << "Enter an age for your dog: ";

    cin >> *pointsToInt;

    // Displaying the address where the age is stored
    cout << "Input stored at " << hex << pointsToInt << endl;

    cout << "Integer dogAge: " << *pointsToInt << endl;

    return 0;
}
