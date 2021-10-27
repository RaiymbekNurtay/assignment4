//
// Created by Raiymbek Nurtay on 26.10.2021.
//

#include <time.h>
#include "Player.h"
#include "Board.h"
using namespace std;

void Player::input(int x, Board *board, int *turn,  bool *available){
    int input;
    cout << "Enter the number of the field:" << endl;
    cin >> input;
        if(*turn % 2 == 0){
            cout << "0 turn" << endl;
            if(input == 1 && (available[input-1] == false)){
                board->board[0][0] = 'x';
            }
            if(input == 2 && (available[input-1] == false)){
                board->board[0][1] = 'x';
            }
            if(input == 3 && (available[input-1] == false)){
                board->board[0][2] = 'x';
            }
            if(input == 4 && (available[input-1] == false)){
                board->board[1][0] = 'x';
            }
            if(input == 5 && (available[input-1] == false)){
                board->board[1][1] = 'x';
            }
            if(input == 6 && (available[input-1] == false)){
                board->board[1][2] = 'x';
            }
            if(input == 7 && (available[input-1] == false)){
                board->board[2][0] = 'x';
            }
            if(input == 8 && (available[input-1] == false)){
                board->board[2][1] = 'x';
            }
            if(input == 9 && (available[input-1] == false)){
                board->board[2][2] = 'x';
            }
                }
            else if(*turn % 2 != 0){
                cout << "x turn" << endl;
                if(input == 1 && (available[input-1] == false)){
                    board->board[0][0] = '0';
                }
                if(input == 2 && (available[input-1] == false)){
                    board->board[0][1] = '0';
                }
                if(input == 3 && (available[input-1] == false)){
                    board->board[0][2] = '0';
                }
                if(input == 4 && (available[input-1] == false)){
                    board->board[1][0] = '0';
                }
                if(input == 5 && (available[input-1] == false)){
                    board->board[1][1] = '0';
                }
                if(input == 6 && (available[input-1] == false)){
                    board->board[1][2] = '0';
                }
                if(input == 7 && (available[input-1] == false)){
                    board->board[2][0] = '0';
                }
                if(input == 8 && (available[input-1] == false)){
                    board->board[2][1] = '0';
                }
                if(input == 9 && (available[input-1] == false)){
                    board->board[2][2] = '0';
                }
            }
            available[input-1] = true;
    turn++;
}

void Player::checkWinner(Board *board, bool *winner){

    //check rows
    if((board->board[0][0]==board->board[0][1]) && (board->board[0][1]==board->board[0][2]) && (board->board[0][1]!=' ')){
     *winner = true;
     cout << "Winner winner, chicken dinner!";
    }
    else if((board->board[1][0]==board->board[1][1]) && (board->board[1][1]==board->board[1][2]) && (board->board[1][1]!=' ')){
        *winner = true;
        cout << "Winner winner, chicken dinner!";
    }
    else if((board->board[2][0]==board->board[2][1]) && (board->board[2][1]==board->board[2][2]) && (board->board[2][1]!=' ')){
        *winner = true;
        cout << "Winner winner, chicken dinner!";
    }


    //check columns
    else if((board->board[0][0]==board->board[1][0]) && (board->board[1][0]==board->board[2][0]) && (board->board[1][0]!=' ')){
        *winner = true;
        cout << "Winner winner, chicken dinner!";
    }
    else if((board->board[0][1]==board->board[1][1]) && (board->board[1][1]==board->board[2][1]) && (board->board[1][1]!=' ')){
        *winner = true;
        cout << "Winner winner, chicken dinner!";
    }
    else if((board->board[0][2]==board->board[1][2]) && (board->board[1][2]==board->board[2][2]) && (board->board[1][2]!=' ')){
        *winner = true;
        cout << "Winner winner, chicken dinner!";
    }

    //check diagonals
    else if((board->board[0][2]==board->board[1][1]) && (board->board[1][1]==board->board[2][0]) && (board->board[1][1]!=' ')){
        *winner = true;
        cout << "Winner winner, chicken dinner!";
    }
    else if((board->board[0][0]==board->board[1][1]) && (board->board[1][1]==board->board[2][2]) && (board->board[1][1]!=' ')){
        *winner = true;
        cout << "Winner winner, chicken dinner!";
    }
    else{
        *winner = false;
    }
}

int Player::random(){
    srand(time(NULL));
    int input = rand() % 10 + 1;
    return input;
}

void Player::randomInput(Board *board, int *turn, bool *available) {
    if (*turn % 2 != 0) {
        cout << "x turn" << endl;
        int input = random();
        while(available[random()-1] == true){
            input = random();
        }
            if (input == 1 && (available[input - 1] == false)) {
                board->board[0][0] = '0';
            } else if (input == 2 && (available[input - 1] == false)) {
                board->board[0][1] = '0';
            } else if (input == 3 && (available[input - 1] == false)) {
                board->board[0][2] = '0';
            } else if (input == 4 && (available[input - 1] == false)) {
                board->board[1][0] = '0';
            } else if (input == 5 && (available[input - 1] == false)) {
                board->board[1][1] = '0';
            } else if (input == 6 && (available[input - 1] == false)) {
                board->board[1][2] = '0';
            } else if (input == 7 && (available[input - 1] == false)) {
                board->board[2][0] = '0';
            } else if (input == 8 && (available[input - 1] == false)) {
                board->board[2][1] = '0';
            } else if (input == 9 && (available[input - 1] == false)) {
                board->board[2][2] = '0';
            }
            available[input - 1] = true;
        }
    }