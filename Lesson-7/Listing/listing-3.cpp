// using a void function with no parameters

#include <iostream>
using namespace std;

void SayHello();

int main()
{
    SayHello();
    return 0;
}

void SayHello()
{
    cout << "Hello World, my name is Alvin!" << endl;
}