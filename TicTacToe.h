#include <string>
#include <iostream>
#include <map>
using namespace std;

class ticTacToe {
private:
    string board[9];
    map<string,int> translator;
    map<string,bool> left;

public:
    ticTacToe() {
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

    void makeMove(){
        printBoard();
        string inpt = getInput();
        left[inpt] = false;
        updateCell(translator[inpt],true);
    }

    void updateCell(int spot, bool player) {
        if (player) {
            board[spot] = "X";
        } else {
            board[spot] = "O";
        }
    }

     string getInput() {
         bool acceptable = false;
         cout << "Please enter the cell you would like to play in (for example, "
                 "to play in the middle you would type \'b2\'): ";
         string inpt;
         cin >> inpt;
         cout << endl;
         if (left.count(inpt) && left[inpt]) {
             cout << "Great move!" << endl << endl;
             acceptable = true;
         }
         while (!acceptable) {
             if (left.count(inpt) && left[inpt]) {
                cout << "Great move!" << endl << endl;
                acceptable = true;
             }
             else if (left.count(inpt)) {
                 cout << "That spot is already taken. Select another spot. ";
                 cin >> inpt;
                 cout << endl;
             } else {
                cout << "Invalid input. Please re-enter the cell you would like to play in: ";
                cin >> inpt;
                cout << endl;
             }
         }
         return inpt;
     }

    void printBoard() {
        char let[] = {'a','b','c'};
        cout << "   1   2   3" << endl;
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