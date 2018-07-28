// what is wrong with the code

#include <iostream>
using namespace std;

int main()
{
    for (int counter = 0; counter == 10; ++counter) // the 2nd condition is not satisfied aand it will execute even once!
    {
        cout << counter << " " << endl;
    } 

    return 0;
}