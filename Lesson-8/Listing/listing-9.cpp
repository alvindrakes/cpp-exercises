// using offset Values and Operators to increment and decrement Pointers

#include <iostream>
using namespace std;

int main()
{
    cout << "How manu integers do you wish to enter? ";
    int numEntries = 0;
    cin >> numEntries;

    int* pointToInt = new int[numEntries];

    cout << "Allocated for " << numEntries << " integers" << endl;
    for (int i = 0; i < numEntries; i++)
    {
        cout << "Enter number: " << i << ": ";
        cin >> *(pointToInt + i);
    }

    cout << "Display all numbers entered: " << endl;
    for (int i = 0; i < numEntries; i++)
        cout << *(pointToInt++) << " ";

    cout << endl;

    // return pointer to initial position
    pointToInt -= numEntries;

    // done with using memory, release
    delete[] pointToInt;
   
    return 0;
}