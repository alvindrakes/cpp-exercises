#include <iostream>
#include <string>
using namespace std;

int main()
{
    int inputNumber;

    cout << "Please enter an integer: ";

    cin >> inputNumber;

    cout << "Enter your name: ";
    string inputName;
    cin >> inputName;

    cout << inputName << " entered " << inputNumber << endl;
}