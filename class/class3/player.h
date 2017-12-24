#pragma once
#include <iostream>
#include "checker.h"

class player
{
	
	std::string name;
	bool color;
public:
	checker ckr[12];
	int count;
	player();
	player(std::string n, bool c);
	void initCkrWhite();
	void initCkrBlack();
	void setPlayer(std::string n, bool c);
	void getPlayer();
	void printCheckArr();
	void step();
	
};