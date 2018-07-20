// using bitwise right and left shft to quater, half / double, quadruple an input interger

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter an input integer: " << endl;
    int inputNum = 0;
    cin >> inputNum;

    int halfNum = inputNum >> 1;
    int quarterNum = inputNum >> 2;
    int doubleNum = inputNum << 1;
    int quadrupleNum =  inputNum << 2;

    cout << "\nQuater: " << quarterNum << endl;
    cout << "Half: " << halfNum << endl;
    cout << "Double: " << doubleNum << endl;
    cout << "Quadruple: " << quadrupleNum << endl;

    return 0;
}