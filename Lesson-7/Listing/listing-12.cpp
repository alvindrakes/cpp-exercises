// using Lambda Functions to display elements in an array and to sort them

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void DisplayNums(vector<int>& dynArray)
{
    for_each (dynArray.begin(), dynArray.end(), \
                [] (int Element) {cout << Element << " ";} );
}

int main()
{
    vector<int> myNums;
    myNums.push_back(501);
    myNums.push_back(1);
    myNums.push_back(41);
    myNums.push_back(89);

    DisplayNums(myNums);

    cout << "\nSorting them in descending order: " << endl;

    sort (myNums.begin(), myNums.end(), \
            [] (int num1, int num2) {return (num2 > num1); } );

    DisplayNums(myNums);

    return 0;
}
