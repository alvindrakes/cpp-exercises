// analyzing null terminator in a C-style string

#include <iostream>
using namespace std;

int main()
{
    char hello[] = {'H', 'e', 'l', 'l', 'o' , ' ', 'w', 'o', 'r', 'l', 'd', '\0'};
    cout << hello << endl;
    cout << "Size of array: " << sizeof(hello) << endl;

    cout << "Replacing space with null" << endl;
    hello[5] = '\0';
    cout << hello << endl;
    cout << "Size of array now: " << sizeof(hello) << endl;

    return 0;

}