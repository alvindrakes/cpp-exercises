// using bitwise operators to perform AND, NOR, OR, XOR

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    cout << "Enter a number (0 - 255): " << endl;
    unsigned short inputNum = 0;
    cin >> inputNum;

    bitset<8> inputBits (inputNum);
    cout << inputNum << " in binary is " << inputBits << endl;

    bitset<8> bitwiseNOT = (~inputNum);
    cout << "Logical Not ~" << endl;
    cout << "~" << inputBits << " = " << bitwiseNOT << endl;
    
    cout << "Logical AND and with 00001111" << endl;
    bitset<8> bitwiseAND = (0x0F & inputNum);  // 0x0F is hex for 000011111 
    cout << "00001111 & " << inputBits << " = " << bitwiseAND << endl;

    cout << "Logical OR and with 00001111" << endl;
    bitset<8> bitwiseOR = (0x0F | inputNum); 
    cout << "00001111 | " << inputBits << " = " << bitwiseOR << endl;

    cout << "Logical XOR and with 00001111" << endl;
    bitset<8> bitwiseXOR = (0x0F ^ inputNum); 
    cout << "00001111 ^ " << inputBits << " = " << bitwiseXOR << endl;

    return 0;
}