#include "Champion.h"


const Coordinate Champion::play(const Board& board) {
/*
	static Coordinate c{0, board.size()-1};
	static Coordinate d{board.size()-1, 0};
	 Coordinate zero{0,0};
	 Coordinate zo{0,1};
	 Coordinate oz{1,0};
	size_t counter=0;
	size_t count_down=board.size()-1;
	if (board[zero]=='.') return c;
	if (board[zero]!='.' && board[oz]=='.' && board[zo]=='.') return c;
	if (board[zero]!='.'){
		Coordinate d{count_down, counter};
		counter++;
		count_down--;
	}
	return d;*/
	for (uint y=0; y<board.size(); ++y) {
		for (uint x=0; x<board.size(); ++x) {
			Coordinate c{x,y};
			if (board[c]=='.') {
				return c;
			}
		}
	}
	return {0,0};
}
