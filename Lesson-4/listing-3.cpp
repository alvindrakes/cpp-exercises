// accessing elements in multidimensional array

#include <iostream>
using namespace std;

int main()
{
    int threeRowsAndColumns [3] [3] = 
    { {1,2,3}, {34, 65, 234}, {12, 432, 425} };

    cout << "Row 0: " << threeRowsAndColumns[0] [0] << " " 
         << threeRowsAndColumns[0][1] << " " 
         << threeRowsAndColumns[0][2] << endl;

    cout << "Row 1: " << threeRowsAndColumns[1][0] << " "
         << threeRowsAndColumns[1][1] << " "
         << threeRowsAndColumns[1][2] << endl;

    cout << "Row 2: " << threeRowsAndColumns[2][0] << " "
         << threeRowsAndColumns[2][1] << " "
         << threeRowsAndColumns[2][2] << endl;

         return 0;
}