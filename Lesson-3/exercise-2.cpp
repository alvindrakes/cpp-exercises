// demontsating size of insigned and signed int are the same

#include <iostream>
using namespace std;

int main()
{
    unsigned int unsignedInt = 0;
    signed int signedInt = 0;
    long int longInt = 0;

    cout << "Unsigned int size is: " << sizeof(unsignedInt) << endl;
    cout << "Signed int size is: " << sizeof(signedInt) << endl;
    cout << "Both signed and unsigned int is smaller than long int which size is: " << 
    sizeof(longInt) << endl;
}