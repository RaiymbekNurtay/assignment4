//
// Created by Raiymbek Nurtay on 26.10.2021.
//

#ifndef ASSIGNMENT5_PLAYER_H
#define ASSIGNMENT5_PLAYER_H
#include "Board.h"

class Player {
public:
    int Input;
    void input(int x, Board *board, int *turn, bool *available);
    void checkWinner(Board *board, bool *winner);
    void randomInput(Board *board, int *turn, bool *available);
    int random();
};


#endif //ASSIGNMENT5_PLAYER_H
