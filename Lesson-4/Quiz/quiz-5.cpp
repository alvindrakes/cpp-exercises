// composing dynamic array that contains element type char

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> dynArray(3); // dynamic array of int

    dynArray[0] = 'A';
    dynArray[1] = 'l';
    dynArray[2] = 'v';

    cout << "Number of characters in array: " << dynArray.size() << endl;

    cout << "Enter another element to insert: ";
    char newValue = 0;
    cin >> newValue;
    dynArray.push_back(newValue);

    cout << "Number of characters in array: " << dynArray.size() << endl;
    cout << "Last element in array: ";
    cout << dynArray[dynArray.size() - 1] << endl;

    return 0;
}