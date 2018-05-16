#pragma once
#include "Board.h"
#include "Player.h"
using namespace std;

class TicTacToe{
private:
  Board gameBoard;
  Player win;

public:
//Constractor
    TicTacToe (size_t size):gameBoard(size){};

//methods
    play(Player& X, Player& O);
    turn(Player& first, Player& second);
    void printResults() const;
    const Board& board()const;
    const Player& winner()const;
};
