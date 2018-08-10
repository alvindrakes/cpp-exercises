// pointer reassignment to another variable

#include <iostream>
using namespace std;

int main()
{
    int age = 30;

    int* pointsToInt = &age;
    cout << "PointsToInt points to age now." << endl;

    // Displaying value of pointer
    cout << "PointerToInt: " << hex << pointsToInt << endl;

    int dogAge = 9;
    pointsToInt = &dogAge;
    cout << "PointsToint now points at dogAge." << endl;

    cout << "PointsToInt: " << hex << pointsToInt << endl;

    return 0;

}