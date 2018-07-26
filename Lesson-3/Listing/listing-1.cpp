// using variables to store numbers and results

#include <iostream>
using namespace std;

int main() 
{
    cout << "this program will help you multiuply 2 numbers" << endl;

    cout << "Enter the first number: ";

// is a good programming practice to initialize the variable 
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