#include "TicTacToe.h"


TicTacToe::play(Player& X, Player& O){
		X.setChar('X');
		O.setChar('O');
		for (int i=0; i<size+1; i++) {
			turn(X, O);
			if ((winner.getChar=='X')||(winner.getChar=='O')) break;
			turn(O, X);
			if ((winner.getChar=='X')||(winner.getChar=='O')) break;
		}
};

const Board& TicTacToe::board()const{
  return gameBoard;
};

const Player& TicTacToe::winner()const{
  return *win;
}

TicTacToe::turn(Player& first, Player& second) {
  /*check 3 things: 1. The place that returns from 'play' method is ligal.
                    2. The place that returns is empty
                    3. Check if the move was a winning move*/

    Coordinate place;
		try{
			place = first.play(gameBoard);
		}
    catch{
			win = &second;
		}

		if (gameBoard[place]=='.') {
			gameBoard[place] = first.getChar();
		}
    else {
			win = &second;
		}

		if (isWinner(first.getChar())) {
			win = &first;
		}
	}


  void TicTacToe::printResults() const {
  		cout << "And the winner is " << winner().name() << ", playing as " << winner().getChar() << "!" << endl;
  		cout << "The final board is " << endl << board() << endl;
  	}
