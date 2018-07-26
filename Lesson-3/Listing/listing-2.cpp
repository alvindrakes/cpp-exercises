// Demonstarting the scope of variables

#include <iostream>
using namespace std;

int MultiplyNumber()
{
    cout << "Enter the first number: ";
    int firstNumber = 0;
    cin >> firstNumber;

    cout << "Enter the second number: ";
    int secondNumber = 0;
    cin >> secondNumber;

    int multiplicationResults = firstNumber * secondNumber;

    // display resultys
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResults << endl;

    return 0;
}

int main() 
{
    cout << "this program will help you multiuply 2 numbers" << endl;

    MultiplyNumber();

    return 0; 
}