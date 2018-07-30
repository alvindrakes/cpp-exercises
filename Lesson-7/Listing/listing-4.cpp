// Function that compute the area of a circle, using Pi as a second Parameter with default value 3.14

#include <iostream>
using namespace std;

double Area(double radius, double pi = 3.14);  // has a default value for pi

int main()
{
    cout << "Enter radius: " << endl;
    double radius = 0;
    cin >> radius;

    cout << "Pi is now 3.14, do you wish to change this? (y/n): ";
    char changePi = 'n';
    cin >> changePi;

    double circleArea = 0;
    if (changePi == 'y')
    {
        cout << "Enter new pi: ";
        double newPi = 3.14;
        cin >> newPi;
        circleArea = Area(radius, newPi);
    }
    else
        circleArea = Area(radius);  // ignore 2nd param, use default value

    cout << "Area is " << circleArea << endl;

    return 0;
}

double Area(double radius, double pi)  // Function definition (implementation)
{
    return pi * radius * radius;
}
