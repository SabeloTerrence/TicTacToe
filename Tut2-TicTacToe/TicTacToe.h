#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

#ifndef TICTACOE_H
#define TICTACOE_H

class TicTacToe
{
public:
	TicTacToe();
	void gmInstruct();
	void disBoard();
	void player1(int);
	void player2(int);
	bool checkWin();
	bool checkDraw();
	void RESTART();
};

#endif