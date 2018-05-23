#include "Champion.h"


const Coordinate Champion::play(const Board& board) {
	Coordinate c{board.size()-1, 0};
	Coordinate d{0, board.size()-1};
	if (board[c]=='.') return c;
	if (board[d]=='.') return d;
	for (uint i=1; i<board.size(); i++){
		Coordinate	ce{i, board.size()-1}	;
		if (board[ce]=='.') return ce;
	}


//	static Coordinate c{0, board.size()-1};
//	static Coordinate d{board.size()-1, 0};
//	 Coordinate zero{0,0};
//	 Coordinate zo{0,1};
//	 Coordinate oz{1,0};
//	size_t counter=0;
//	size_t count_down=board.size()-1;
//	if (board[zero]=='.') return c;
//	if (board[zero]!='.' && board[oz]=='.' && board[zo]=='.') return c;
//	if (board[zero]!='.'){
//		Coordinate d{count_down, counter};
//		counter++;
//		count_down--;
//	}
//	return d;
}
