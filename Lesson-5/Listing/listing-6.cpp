//  using logical AND and OR to decide whether to workout

#include <iostream>
using namespace std;

int main()
{
    cout << "Answer questions with 1 and 0." << endl;
    cout << "Do you think you should go work out? " << endl;
    bool shouldWorkout = false;
    cin >> shouldWorkout;

    cout << "Do you need to great body to look good? " << endl;
    bool greatBody = false;
    cin >> greatBody;

    
    if (shouldWorkout || greatBody) {
        cout << "Yes you should workout!" << endl;
    } else {
        cout << "You need to work harder in life." << endl;
    }

    
    if (!shouldWorkout) {
        cout << "Workout can improve your life, do it no matter what!" << endl;
    }

    return 0;
    
    
}