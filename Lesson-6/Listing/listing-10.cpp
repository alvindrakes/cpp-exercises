// using a for loop to enter elements in a static array and displaying it

#include <iostream>
using namespace std;

int main()
{
    const int ARRAY_LENGTH = 5;
    int myNums[ARRAY_LENGTH] = {0};

    cout << "Populate array of " << ARRAY_LENGTH << " integers" << endl;

    for (int i=0; i < ARRAY_LENGTH; i++)
    {
        cout << "Enter an integer for element " << i << ": " << endl;
        cin >> myNums[i];
    }

    cout << "\nDisplaying contents of the array: " << endl;

    for (int i=0; i < ARRAY_LENGTH; i++)
    {
        cout << "Element " << i << ": " << myNums[i] << endl;
    }

    return 0;
}