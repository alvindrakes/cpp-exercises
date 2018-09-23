// Handle exceptions, Exit Gracefully when 'new' fail

#include <iostream>
using namespace std;

int main()
{
    try
    {
        // request a lot of memory!!!!!!!
        int* pointsToManyNums = new int [0x1fffffff];

        // use the allocated memory 
        delete[] pointsToManyNums;
    }
    catch (bad_alloc)
    {
        cout << "Memory allocation failed, Ending program." << endl;
    }

    return 0;
}
