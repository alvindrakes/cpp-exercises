// using for Loop, but omiting the Loop Expression 

#include <iostream>
using namespace std;

int main()
{

    for ( char userSelection = 'm'; userSelection != 'x';) // no 3rd loop expression that change the iterator value 
    {
        int num1 = 0, num2 = 0;
        cout << "\nEnter two integers: " << endl;
        cin >> num1;
        cin >> num2;

        cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

        cout << "Press 'x' to exit the program or any other keys to recalculate:  " << endl;
        cin >> userSelection;

    }

    cout << "Goodbye! See you again!" << endl;

    return 0;
}