#include <string>
#include <iostream>
using namespace std;

class ticTacToe {
private:
    string board[9] = {".",".",".",".",".",".",".",".","."};

public:
    ticTacToe(void) {
    }

    ~ticTacToe(){}

    // TODO: We need to figure out some stuff
    // First: create the printboard function
    // second: create a function to update a single cell
    // third: create a function to get acceptable input
    // fourth: create a function to parse acceptable input

    void func() {
        board[5] = "Braden";
    }

    void printBoard() {
        cout << "  1   2   3 " << endl;
        for (unsigned int i = 0; i < 9; i++)
        {
            if (i % 3 == 0) {
                cout << "a";
            }
            cout << " " << board[i];
            if (i % 3 == 0 || i % 3 == 1) {
                cout << " |";
            }
            if (i % 3 == 2 && i != 8) {
                cout << endl << " -----------";
                cout << endl;
            }
        }
        cout << endl << endl;
    }
};