// Fetching area of a circle by reference not by return value

#include <iostream>
using namespace std;

const double pi = 3.1416;

void Area(double radius, double& result)  // 'result' parameter is passed by reference
{
    result = pi * radius * radius;
}

int main()
{
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    double areaFetched = 0;
    Area(radius, areaFetched);

    cout << "The area is: " << areaFetched << endl;
    return 0;
}