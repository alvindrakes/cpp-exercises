// for loops access array in descending order

#include <iostream>
using namespace std;

int main()
{
    int numArray[4] = {1, 2, 3, 4};

    cout << "Array elements in descending order: " << endl;
    for (int i = 3; i >= 0 ; i--)
    {
        cout << numArray[i] << endl;
    }

    return 0;
}