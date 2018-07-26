// create an array that represents the squares on the chessboard

#include <iostream>
using namespace std;

enum Square 
{
    Empty = 0,
    Pawn, 
    Rook, 
    Knight, 
    Bishop, 
    King, 
    Queen
};

int main()
{
    Square chessboard [8][8];

    chessboard[0][0] = chessboard[0][7] = Rook;
    chessboard[7][0] = chessboard[7][7] = Rook;

    cout << "The rooks are now printed: " << endl;
    cout << chessboard[0][0] << endl;
    cout << chessboard[0][7] << endl;
    cout << chessboard[7][0] << endl;
    cout << chessboard[7][7] << endl;
}