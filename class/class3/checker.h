#pragma once

#include "figure.h"

class checker
{
	
	int num;
public:
	figure fig;
	bool exist;
	bool king;
	checker() {};
	checker(int n) { num = n; };
	~checker() {};
	void setChecker(int n, int v, int h, bool c);
	void getChecker();
	void step(char st);
	void hit();
};