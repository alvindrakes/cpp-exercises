// calculate the area and circumference of a circle 

#include <iostream>
using namespace std;

constexpr double GetPi() { return 22.0 / 7; }

double CalculateCircleArea(int radius)
{
    double area = GetPi() * radius * radius ;
    return area; 
}

double CalculateCircleCircum(int radius)
{
    double circumference = 2 * GetPi() * radius;
    return circumference;
}

int main()
{
    cout << "Please enter the radius of the circle: " << endl;
    int radius = 0;
    cin >> radius;
    
    cout << "The area of your circle is: " << CalculateCircleArea(radius) << endl;
    cout << "The circumference of your circle is: " << CalculateCircleCircum(radius) << endl;

    return 0; 
}