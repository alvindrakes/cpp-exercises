// using nested loop to calculate Fibonacci numbers

#include <iostream>
using namespace std;

int main()
{
    const int numToCalculate = 5;
    cout << "This program will calculate " << numToCalculate \
        << " Fibonacci numbers at a time" << endl;

    int num1 = 0, num2 = 1;
    char wantMore = '\0';
    cout << num1 << " " << num2 << " ";

    do    
    {
        for (int i = 0; i < numToCalculate; i++)
        {
            cout << num1 + num2 << " ";

            int num2Temp = num2;
            num2 = num1 + num2;
            num1 = num2Temp;
        }

        cout << "Do you want more numbers? (y/n): " << endl;
        cin >> wantMore;
    } while (wantMore == 'y');

    cout << "Goodbye!" << endl;

    return 0;
}