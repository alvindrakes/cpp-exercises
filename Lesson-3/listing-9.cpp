// using enumerated value to indicate wind directions

#include <iostream>
using namespace std;

enum CardinalDirections
{
    North = 25,
    South,
    East, 
    West
};

int main() 
{
    cout << "Displaying directions and their symbolic values" << endl;
    cout << "North: " << North << endl;
    cout << "South: " << South << endl;
    cout << "East: " << East << endl;
    cout << "West: " << West << endl;

    CardinalDirections windDirection = South;  //compiler will get the value associted with South
    cout << "Wind directions: " << windDirection << endl;

    return 0;
}