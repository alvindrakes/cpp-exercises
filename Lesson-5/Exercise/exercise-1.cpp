// improve codes in quiz question 5

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number: " << endl;
    int inputNum = 0;
    cin >> inputNum;

    int result = ((inputNum << 1) + 5) << 1;
    cout << "The inputNum being doubled, added 5 and doubled again is: " << result << endl;

    return 0;
}