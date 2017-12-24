#pragma once
class figure
{
	bool color; // true - white, false - black
public:
	int ver;
	int hor;
	figure() {};
	~figure() {};
	void setFigure(int v, int h, bool c);
	void getFigure();
	//friend bool step();
	bool stepToLeft();
	bool stepToRight();

};