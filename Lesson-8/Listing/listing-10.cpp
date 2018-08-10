// use the const keyword in Calculating the Area of Circle

#include <iostream>
using namespace std;

void CalArea (const double* const ptrRadius, 
                const double* const ptrPi,
                double* const ptrArea)
                {
                    // check pointers validity before calculation
                    if (ptrRadius && ptrPi && ptrArea)
                    {
                        *ptrArea = (*ptrRadius) * (*ptrRadius) * (*ptrPi);
                    }
                }


int main()
{
    const double pi = 3.1416;

    cout << "Enter the radius of circle: ";
    double radius = 0;
    cin >> radius; 

    double area = 0;
    CalArea (&radius, &pi, &area);

    cout << "The area of the circle is: " << area << endl;

    return 0;

}