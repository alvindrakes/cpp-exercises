// demonstration of Declaration and initialization of pointer

#include <iostream>
using namespace std;

int main()
{
    int age = 30;
    int* pointsToInt = &age;   //pointer initialized to &age

    // Displaying the value of pointer 
    cout << "Integer age is at: " << hex << pointsToInt << endl;

    return 0; 


}