#pragma once
#include <iostream>
#include "player.h"

class game
{
public:
	player play[2];
	game();
	~game();
	void setGame();
	void printScreen();
	void playGame();
	bool checkField(int ver, int hor);
};