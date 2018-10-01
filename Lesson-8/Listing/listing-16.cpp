#include <iostream>
using namespace std;

int main()
{
    // Request lots of memory space and use nothrow
    int* pointToManyNums = new(nothrow) int [0x1fffffff];

    if (pointToManyNums) 
    {
        // use allocated memory
        delete[] pointToManyNums;
    }
    else
        cout << "Memory allocation failed. Ending program." << endl;

    return 0;
}