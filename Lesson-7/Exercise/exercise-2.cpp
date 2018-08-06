// write a function that accepts an array of double as input

#include <iostream>
using namespace std;

void printNums (double myNums[])
{

    cout << "Best number in the world: ";
    for (int i = 0; i < 5; i++)
    {
        cout << myNums[i] << " ";
    }
}

int main()
{
     double myNums[5] = {3, 6, 8, 7, 12};

    printNums(myNums);

    return 0;
}