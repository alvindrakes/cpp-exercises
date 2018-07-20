// difference between prefix and postfix operators

#include <iostream>
using namespace std;

int main()
{
    int startValue = 101;
    cout << "The starting value is=: " << startValue << endl;

    int postfixValue = startValue++;
    cout << "\nThe postfix value is: " <<  postfixValue << endl;
    cout << "After postfix increment, startvalue = " << startValue << endl;
    
    startValue = 101;
    int prefixValue = ++startValue;
    cout << "\nThe prefix value is: " <<  prefixValue << endl;
    cout << "After prefix increment, startvalue = " << startValue << endl;

    startValue = 101;
    int prefixValueDec = --startValue;
    cout << "\nThe prefix value is: " <<  prefixValueDec << endl;
    cout << "After prefix decrement, startvalue = " << startValue << endl;

    startValue = 101;
    int postfixValueDec = startValue--;
    cout << "\nThe postfix value is: " <<  postfixValueDec << endl;
    cout << "After postfix increment, startvalue = " << startValue << endl;

    return 0;
}