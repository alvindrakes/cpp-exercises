// using nested loop to multiply elements of 1 array to another array

#include <iostream>
using namespace std;

int main()
{
    const int ARRAY1_LEN = 3;
    const int ARRAY2_LEN = 2;

    int myNum1[ARRAY1_LEN] = {35, -12, 8};
    int myNum2[ARRAY2_LEN] = {332, 15};

    cout << "Multiplying each int in myNum1 with myNum2:" << endl;

    for (int i = 0; i < ARRAY1_LEN; i++)
    {
        for (int i2 = 0; i2 < ARRAY2_LEN; i2++)
            cout << myNum1[i] << " x " << myNum2[i2] \
            << " = " <<  myNum1[i] *  myNum2[i2] << endl; 
    }

    return 0;

}