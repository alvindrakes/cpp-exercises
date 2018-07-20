// create a program to ask user to input 2 boolean values and demonstrates the result of various bitwise operators on them

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    cout << "Enter two integers: " << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;

    bitset<8> inputBit1 (num1);
    cout << "\n" << num1 << " in binary is: " << inputBit1 << endl;

    bitset<8> inputBit2 (num2);
    cout << num2 << " in binary is: " << inputBit2 << endl;

    cout << "\nPerforming different bitwise operators on them." << endl;
    bitset<8> inputBit1NOT = (~inputBit1);
    cout << "InputBit1 " << inputBit1 << " being NOT = " << inputBit1NOT << endl;
    bitset<8> inputBit2NOT = (~inputBit2);
    cout << "InputBit2 " << inputBit2 << " being NOT = " << inputBit2NOT << endl;

    cout << inputBit1 << " AND " << inputBit2 << " = " << (inputBit1 & inputBit2) << endl;
    cout << inputBit1 << " OR " << inputBit2 << " = " << (inputBit1 | inputBit2) << endl;
    cout << inputBit1 << " XOR " << inputBit2 << " = " << (inputBit1 ^ inputBit2) << endl;

    return 0;
}