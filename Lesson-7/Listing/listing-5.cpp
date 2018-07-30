// using recursive function to find the Fibonacci Number

#include <iostream>
using namespace std;

int GetFibonacciNumber(int fibIndex)
{
    if (fibIndex < 2)
        return fibIndex; 
    else
        return GetFibonacciNumber(fibIndex - 1) + GetFibonacciNumber(fibIndex - 2);
}


int main()
{
    cout << "Enter a 0-based index of a Fibonacci number: ";
    int index = 0;
    cin >> index;

    cout << "Fibonacci number is: " << GetFibonacciNumber(index) << endl;

    return 0;
}