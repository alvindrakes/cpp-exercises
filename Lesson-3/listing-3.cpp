// using global variables

#include <iostream>
using namespace std;

// 3 global variables
int firstNumber = 0;
int secondNumber = 0;
int multiplicationResult = 0;

void MultiplyNumbers() 
{
    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    multiplicationResult = firstNumber * secondNumber;

    // display resultys
    cout << "Displaying from MultiplyNumbers: ";
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;
}

int main() 
{
    cout << "this program will help you multiply 2 numbers" << endl;

    MultiplyNumbers();

    cout << "Displaying from main(): ";

    // this still works as it is using a global variables
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;

    return 0;
}