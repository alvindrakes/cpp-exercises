// rewrite listing 6.14 that add elements in 2 arrays, in reverse order

#include <iostream>
using namespace std;

int main()
{
    const int ARRAY1_LEN = 3;
    const int ARRAY2_LEN = 2;

    int myNum1[ARRAY1_LEN] = {35, -12, 8};
    int myNum2[ARRAY2_LEN] = {332, 15};

    cout << "Adding each int in myNum1 with myNum2:" << endl;

    for (int i = (ARRAY1_LEN - 1); i >= 0; i--)
    {
        for (int i2 = (ARRAY2_LEN - 1); i2 >= 0; i2--)
            cout << myNum1[i] << " + " << myNum2[i2] \
            << " = " <<  myNum1[i] + myNum2[i2] << endl; 
    }

    return 0;

}