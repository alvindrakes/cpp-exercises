// 2 functions that compute the area and circumference of a circle given the radius

#include <iostream>
using namespace std;

const double pi = 3.14159265;

// Functions prototypes
double Area(double radius);
double Circumference(double radius);

int main()
{
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    cout << "Area is " << Area(radius) << endl;

    cout << "Circumference is " << Circumference(radius) << endl;

    return 0;
}

double Area(double radius)
{
    return radius * radius * pi;
}

double Circumference(double radius)
{
    return 2 * pi * radius;
}