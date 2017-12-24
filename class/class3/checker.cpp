#include <iostream>
#include "checker.h"

void checker::setChecker(int n, int v, int h, bool c) {
	num = n;
	exist = true;
	king = false;
	fig.setFigure(v, h, c);
};

void checker::getChecker() {
	std::cout << "num = " << num << std::endl;
	fig.getFigure();
};

void checker::step(char st) {
	if (st == 'l') {
		fig.stepToLeft();
		std::cout << "AAAAA" << std::endl;
	}
	else {
		fig.stepToRight();
		std::cout << "BBBBBBB" << std::endl;
	}
};
void checker::hit() {


};
