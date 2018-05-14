#pragma once
#include "Player.h"



/*
	This player scans the board looping on x then on y,
	and plays on the first empty cell.
*/
class Champion: public Player {
public:
	const string name() const override { return "Ori&Yoav"; }
	const Coordinate play(const Board& board) override;
};
