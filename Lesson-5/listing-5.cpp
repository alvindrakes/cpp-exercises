// using logical AND and NOT for conditional processing 

#include <iostream>
using namespace std;

int main()
{
    cout << "Use boolean value(1 / 0) to answer the following questions: " << endl;
    cout << "Is it raining? " << endl;
    bool isRaining = false;
    cin >> isRaining;

    cout << "Is your life pefect? " << endl;
    bool lifePerfect = false;
    cin >> lifePerfect;

    // conditional statement using AND and NOT
    
    if (isRaining && (!lifePerfect)) {
        cout << "You should go and run to improve your life!" << endl;
    }

    if ((!isRaining) && lifePerfect ) {
        cout << "You can take today off, but that doesn't mean you can slack off." << endl;
    }

    return 0;
    
}