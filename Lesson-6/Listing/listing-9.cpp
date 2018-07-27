// using do...while loop for repeating calculation
#include <iostream>
using namespace std;

int main()
{
     char userSelection = 'm';
    do 
    {
        int num1 = 0, num2 = 0;
        cout << "\nEnter two integers: " << endl;
        cin >> num1;
        cin >> num2;

        cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

        cout << "Press 'x' to exit the program or any other keys to recalculate:  " << endl;
        cin >> userSelection;

    } while (userSelection != 'x');

    cout << "Goodbye! See you again!" << endl;

    return 0;
}