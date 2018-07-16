// constant expression allows function-like declaration of constants

#include <iostream>
 constexpr double GetPi() { return 22.0 / 7; }
 constexpr double TwicePi() { return 2 * GetPi(); }

 int main() 
 {
     using namespace std;
     const double pi = 22.0 / 7;

     cout << "Constant Pi contains value " << pi << endl;
     cout << "Constexpr GetPi() returns value  " << GetPi() << endl;
     cout << "Constexpr TwicePi() returns value " << TwicePi() << endl;

     return 0;
 }