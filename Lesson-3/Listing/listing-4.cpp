// demonstrating overflow problem where variable types are very important and specific

#include <iostream>
using namespace std;

int main() 
{
    unsigned short uShortValue = 65535;
    cout << "Incrementing unsigned short " << uShortValue << " gives: ";
    cout << ++uShortValue << endl;

    short signedShort = 32767;
    cout << "Incrementing signed short " << signedShort << " gives: ";
    cout << ++signedShort << endl;

    int MoneyTest = 70000;
    cout << "Money test number: " << MoneyTest;

    return 0;
}