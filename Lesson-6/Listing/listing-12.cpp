// Range-based for loop over arrays and std: String

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int someNums[] = {1, 101, 2, 4, 6};

    for (const int& aNum : someNums)
        cout << aNum << ' ';
    cout << endl;

    for (auto anElement : { 5, 6, 7, 8, 9})
        cout << anElement << ' ';
    cout << endl;

    char charArray[] = {'h', 'e', 'l', 'l', 'o'};
    for (char aChar : charArray)
        cout << aChar << ' ';
    cout << endl;

    double moreNums[] = {3.154, 56.8, 30.2};
    for (auto anElement : moreNums)
        cout << anElement << ' ';
    cout << endl;

    string sayHello{"Hello world!"};  // a string literal must use double quotes " "
    for (auto anElement : sayHello)
        cout << anElement << ' ';
    cout << endl;

    return 0;
}