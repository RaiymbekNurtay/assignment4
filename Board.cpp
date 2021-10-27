//
// Created by Raiymbek Nurtay on 26.10.2021.
//
using namespace std;

#include <iostream>
#include "Board.h"

void Board::showMatrix() {
    cout << "The board has the form of:" << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void Board::showLine(){
    cout << "___________________________________________________" << endl;
}

void Board::showBoard(){
    cout << board[0][0] << "|" << board[0][1] << "|" << board[0][2] << endl;
    cout << "-+-+-" << endl;
    cout << board[1][0] << "|" << board[1][1] << "|" << board[1][2] << endl;
    cout << "-+-+-" << endl;
    cout << board[2][0] << "|" << board[2][1] << "|" << board[2][2] << endl;
}

