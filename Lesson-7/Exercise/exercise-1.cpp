// Overloaded functions that calculate the volume if sphere and cylinder

#include <iostream>
using namespace std;

const double pi = 3.1416; 

double Volume (double radius);
double Volume (double radius, short unsigned height);

int main()
{
    cout << "Enter the radius of the shape: ";
    double radius = 0;
    cin >> radius;

    cout << "Is this a cylinder or sphere? \nEnter 's' for sphere \nEnter 'c for cylinder" << endl;
    char shape = '\0';
    cin >> shape;

    if (shape == 'c')
    {
        cout << "\nEnter the height: ";
        short unsigned height = 0;
        cin >> height;

        cout << "\nThe area of cylinder is: " << Volume(radius, height);
    }
    else 
    {
        cout << "\nThe area of sphere is: " << Volume(radius);
    }

    return 0;
}

double Volume (double radius)
{
   return (4 * pi * radius * radius * radius) / 3;
}

double Volume (double radius, short unsigned height)
{
    return pi * radius * radius * height;
}