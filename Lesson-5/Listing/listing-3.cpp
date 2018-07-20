// demonstrate equality and relational operatora

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter 2 integers: " << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;

    bool isEqual = (num1 == num2);
    cout << "Result of equality test: " << isEqual << endl;
    
    bool isUnequal = (num1 != num2);
    cout << "Result of unequality test: " << isUnequal << endl;
    
    bool isGreaterThan = (num1 > num2);
    cout << "Result of GreaterThan test: " << isGreaterThan << endl;
    
    bool isLesserThan = (num1 < num2);
    cout << "Result of LesserThan test: " << isLesserThan << endl;

    bool isGreaterEqualThan = (num1 >= num2);
    cout << "Result of " << num1 << " >= " << num2 << ": " << isGreaterEqualThan << endl;
    
    bool isLesserEqualThan = (num1 <= num2);
    cout << "Result of " << num1 << " <= " << num2 << ": " << isLesserEqualThan << endl;

    return 0;
}