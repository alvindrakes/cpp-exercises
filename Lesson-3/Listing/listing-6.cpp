// using auto keyword and relying on compiler's type inference

#include <iostream>
using namespace std;

int main()
{
    auto coinFlipped = true;
    auto largeNumber = 25000000;

    cout << "coin flipped: " << coinFlipped << endl;
    cout << "Size of coin flipped is: " << sizeof(coinFlipped) << endl;

    cout << "Large number is: " << largeNumber << endl;
    cout << "Size of Large number is: " << sizeof(largeNumber) << endl;

    return 0;
}