// write a switch-case staetment to check whether a colour in is in the rainbow

#include <iostream>
#include <string>
using namespace std;

int main()
{
    enum RainbowColour
    {
        Red = 0,
        Orange,
        Yellow,
        Green,
        Blue,
        Indigo,
        Violet, 
        White,
        Black,
        Purple
    };

    char runProgram = 'y';
    do
    {
        cout << "These are the avilable colours to pick from: " << endl;
        cout << "Red: " << Red << endl;
        cout << "Orange: " << Orange << endl;
        cout << "Yellow: " << Yellow << endl;
        cout << "Green: " << Green << endl;
        cout << "Blue: " << Blue << endl;
        cout << "Indigo: " << Indigo << endl;
        cout << "Violet: " << Violet << endl;
        cout << "White: " << White << endl;
        cout << "Black: " << Black << endl;
        cout << "Purple: " << Purple << endl;


        cout << "\nEnter the colour code to check whether it is in the rainbow: " << endl;
        int inputColourCode = 0;
        cin >> inputColourCode;

        switch(inputColourCode)
        {
            case Red: 
            case Orange: 
            case Blue: 
            case Indigo: 
            case Green: 
            case Yellow: 
            case Violet: 
                cout << "The colour you have picked is a rainbow colour!" << endl;
                break;

            default:
                cout << "The colour you have picked is not in the rainbow." << endl;
                break;

        }

    cout << "\nDo you want to run the program again? (y/n): " << endl;
    cin >> runProgram;
        
    } while (runProgram != 'n');

    cout << "Goodbye! Please come again. " << endl;

    return 0;
}