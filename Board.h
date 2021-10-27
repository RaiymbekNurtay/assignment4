//
// Created by Raiymbek Nurtay on 26.10.2021.
//

#ifndef ASSIGNMENT5_BOARD_H
#define ASSIGNMENT5_BOARD_H
#include <iostream>


class Board {
public:
    char matrix[3][3] = {'1','2','3','4','5','6','7','8','9'};
    char board[3][3] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    void showMatrix();
    void showLine();
    void showBoard();
};


#endif //ASSIGNMENT5_BOARD_H
