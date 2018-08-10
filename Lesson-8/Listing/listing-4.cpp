// demonstrating the use of deference operator (*) to access integer value

#include <iostream>
using namespace std;

int main()
{
    int age = 30;
    int dogAge = 9;

    cout << "Integers age = " << age << endl;
    cout << "Integers dogAge = " << dogAge << endl;


    int* pointsToInt = &age;
    cout << "pointsToInt points to age" << endl;

    // Displaying value of pointer
    cout << "pointsToInt = " << hex << pointsToInt << endl;

    // Displaying the value at the pointed location
    cout << "*pointsToInt = " << dec << *pointsToInt << endl;

    pointsToInt = &dogAge;
    cout << "pointsToInt points to dogAge" << endl;
    cout << "pointsToInt = " << hex << pointsToInt << endl;
    cout << "*pointsToInt = " << dec << *pointsToInt << endl;

    return 0;
}