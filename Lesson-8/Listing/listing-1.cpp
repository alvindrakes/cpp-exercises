/// determining the address if an int and double

#include <iostream>
using namespace std;

int main()
{
    int age = 30;
    const double pi = 3.1416;

    // use & to find the address in memory
    cout << "Integer age is located at address: " << &age << endl;
    cout << "Double pi is located at address: " << &pi << endl;

    return 0;


}