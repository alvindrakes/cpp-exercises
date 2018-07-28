// using nested loops to iterate elements in a multudimensional array of integers

#include <iostream>
using namespace std;

int main()
{
    const int NUM_ROWS = 3;
    const int NUM_COLS = 4;

    // 2d arrays of integers
    int myInts[NUM_ROWS] [NUM_COLS] = { {1,2,3},
                                        {4,5,6},
                                        {7,8,9} };

    // iterate rows, each array of int
    for (int row = 0; row < NUM_ROWS; row++)
    {
        for (int col = 0; col < NUM_COLS; col++)
        {
            cout << "Integers[" << row << "] [" << col << "]: " \
            << myInts[row][col] << endl;
        }
    }

    return 0;
}