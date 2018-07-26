// using conditional operator (?:) to find MAX of 2 numbers

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter two numbers: " << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;

    int max = (num1 > num2) ? num1 : num2;
    cout << "The greatest number of " << num1 << " and " << num2 \
            << " is " << max << endl;

    return 0;
}