// using auto as return types for function

#include <iostream>
using namespace std;

const double pi = 3.1416;

auto Area(double radius)
{
    return pi * radius * radius;
}

int main()
{
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    cout << "Area is : " << Area(radius) << endl;
    return 0;
}