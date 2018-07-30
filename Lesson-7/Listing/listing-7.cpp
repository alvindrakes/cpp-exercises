// using overloaded functions to calcuate the area of a circle or a cylinder

#include <iostream>
using namespace std;

const double pi = 3.14159265;

double Area(double radius);
double Area(double radius, double height);   // functions with the same name but different parameters are called 'Overloaded Functions'

int main()
{
    cout << "Enter z for cylinder, c for circle: ";
    char userSelection = 'z';
    cin >> userSelection;

    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    if (userSelection == 'z')
    {
        cout << "Enter height: ";
        double height = 0;
        cin >> height;

        // invoke overloaded variant of area for cylinder
        cout << "Area of cylinder is " << Area(radius, height) << endl;

    }
    else
        cout << "Area of circle is " << Area(radius) << endl;

    return 0;
}

// for cylinder
double Area(double radius, double height)
{
    return 2 * Area(radius) + 2 * pi * radius * height;
}

// for circle
double Area(double radius)
{
    return pi * radius * radius;
}