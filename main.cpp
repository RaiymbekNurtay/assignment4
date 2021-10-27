#include <iostream>
using namespace std;
#include "Board.h"
#include "Player.h"

int mainMenu(Board *board){
    cout << "Hello, Player!" << endl;
    cout << "Choose the category:" << endl;
    cout << "1. Play againts Player" << endl;
    cout << "2. Play againts Computer" << endl;
    int x;
    cin >> x;
    int turn = 0;
    bool winner = false;
    bool available[9] = {false, false, false, false, false, false, false, false, false};
    Player player1;
    Player player2;
    Player bot;
    switch (x) {
        case 1:
            board->showLine();
            board->showMatrix();
            board->showLine();
            while(winner == false){
                player1.input(x, board, &turn, available);
                board->showLine();
                board->showBoard();
                board->showLine();
                player1.checkWinner(board, &winner);
                turn++;
                if(winner == true)
                    return 0;
                player2.input(x, board, &turn, available);
                board->showLine();
                board->showBoard();
                board->showLine();
                player2.checkWinner(board, &winner);
                turn++;
            }
            break;
        case 2:
            board->showLine();
            board->showMatrix();
            board->showLine();
            while(winner == false){
                player1.input(x, board, &turn, available);
                board->showLine();
                board->showBoard();
                board->showLine();
                player1.checkWinner(board, &winner);
                turn++;
                if(winner == true)
                    return 0;
                bot.randomInput(board, &turn, available);
                board->showLine();
                board->showBoard();
                board->showLine();
                bot.checkWinner(board, &winner);
                turn++;
            }
            break;
    }
}



int main() {
    Board board;
    mainMenu(&board);

    return 0;
}
