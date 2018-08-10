// Accessing memory Allocated using new via Operator (*) and Releasing it using delete

#include <iostream>
using namespace std;

int main()
{
    // Request for memory space for an int
    int* pointToAge = new int;

    // Use the allocated memory to store a number
    cout << "Enter your dog's age: ";
    cin >> *pointToAge;

    // use indirection operator to access value 
    cout << "Age " << *pointToAge << " is stored at " << hex << pointToAge << endl;

    delete pointToAge;  // release memory

    return 0;
}