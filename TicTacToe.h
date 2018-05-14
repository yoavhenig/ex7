#pragma once
#include "Board.h"
#include "Player.h"
using namespace std;

class TicTacToe{
private:
  Board game;

public:
//Constractor
    TicTacToe (size_t size):game(size){};

//methods
    play(Player X, Player Y);
    Board& board();
    Player winner();
};
