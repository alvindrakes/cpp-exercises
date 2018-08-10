// Allcoating using new[...] and Deleting using delete[...]

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "How many integers should I reserve memory for? " << endl;
    int numEntries = 0;
    cin >> numEntries;

    int* myNumbers = new int[numEntries];

    cout << "Memory allocated at " << myNumbers << hex << endl;

    // de-ellocate before exiting
    delete[] myNumbers;

    return 0;
}