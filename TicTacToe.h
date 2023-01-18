#include <string>
#include <iostream>
#include <map>
using namespace std;

class ticTacToe {
private:
    string board[9];
    map<string,int> translator;
    map<string,bool> left;
    size_t available;

public:
    ticTacToe() {
        available = 9;
        string temp[] = {"a1","a2","a3","b1","b2","b3","c1","c2","c3"};
        for (int i = 0; i < 9; i++) {
            translator[temp[i]] = i;
            left[temp[i]] = true;
        }
        for (auto & i : board) {
            i = ".";
        }
    }

    ~ticTacToe(){}

    // TODO: We need to figure out some stuff
    // third: create a function to get acceptable input
    // fourth: create a function to parse acceptable input
    // fifth: create a function to check if there is a win

    void updateCell(int spot, bool player) {
        if (player) {
            board[spot] = "X";
        } else {
            board[spot] = "O";
        }
    }

    // string getInput() {
    //     bool acceptable = false;
    //     cout << "Please enter the cell you would like to play in: ";
    //     string inpt;
    //     cin >> inpt;
    //     if (left.count(inpt) && left[inpt] == true) {
    //         cout << "Great move!";
    //         acceptable = true;
    //     }
    //     while (!acceptable) {
    //         if () {

    //         }
    //         else if () {

    //         } else () {

    //         }
    //     }
    //     return inpt;
    // }

    void printBoard() {
        int let[] = {1,2,3};
        cout << "   a   b   c" << endl;
        for (unsigned int i = 0; i < 9; i++)
        {
            if (i % 3 == 0) {
                cout << let[i / 3] << " ";
            }
            cout << " " << board[i];
            if (i % 3 == 0 || i % 3 == 1) {
                cout << " |";
            }
            if (i % 3 == 2 && i != 8) {
                cout << endl << "  -----------";
                cout << endl;
            }
        }
        cout << endl << endl;
    }
};