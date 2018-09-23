// accessing elements in an array using Deference operator (*) and using array operator ([]) with a pointer

#include <iostream>
using namespace std;

int main()
{
    const int ARRAY_LEN = 5;

    // static array of 5 integers, initialised
    int myNumbers[ARRAY_LEN] = {24, -1, 32, -999, 2011};

    // pointer initialised to 1st element in array 
    int* pointToNums = myNumbers;

    cout << "Display array using pointer syntax, operator*" << endl;
    for (int index = 0; index < ARRAY_LEN; ++index)
    {
        cout << "Element " << index << " = " << *(myNumbers + index) << endl;
    }

    cout << "Display array using ptr with array syntax, operator[]" << endl;
    for (int index = 0; index < ARRAY_LEN; ++index)
    {
        cout << "Element " << index << " = " << pointToNums[index] << endl;
    }

    return 0;
}  