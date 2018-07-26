// tell what days of the week using switch-case

#include <iostream>
using namespace std;

int main()
{
    enum DaysOfWeek
    {
        Sunday = 0,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };

    cout << "See what day of the week are named after!" << endl;
    cout << "Enter a number for a day (Sunday = 0): ";

    int dayInput = Sunday; //initialize to Sunday
    cin >> dayInput;

    switch (dayInput)
    {
    case Sunday:
        cout << "Sunday was named after the sun." << endl;
        break;
    case Monday:
        cout << "Monday was named after the moon." << endl;
        break;
    case Tuesday:
        cout << "Tuesday was named after Mars." << endl;
        break;
    case Wednesday:
        cout << "Wednesday was named after the Mercury." << endl;
        break;
    case Thursday:
        cout << "Thursday was named after the Jupiter." << endl;
        break;
    case Friday:
        cout << "Friday was named after the Venus." << endl;
        break;

    case Saturday:
        cout << "Saturday was named after the Saturn." << endl;
        break;

    default:
        cout << "Wrong input, execute again.";
        break;
    
    }

    return 0;
}