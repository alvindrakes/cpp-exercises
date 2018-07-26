// c++ std::string is safer and better than C-style string as it is not static
// there is no reason to use c-style string anymore!

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string greetString("Hello std::string!");
    cout << greetString << endl;

    cout << "Enter a line of text: " << endl;
    string firstLine;
    getline(cin, firstLine);

    cout << "Enter another line of text: " << endl;
    string secondLine;
    getline(cin, secondLine);

    cout << "Result of concatenation: " << endl;
    string concatenatedString = firstLine + " " + secondLine;
    cout << concatenatedString << endl;

    cout << "Copy of concatenated string: " << endl;
    string aCopy;
    aCopy = concatenatedString;
    cout << aCopy << endl;

    cout << "Length of concat string: " << concatenatedString.length() << endl;

    return 0;
}