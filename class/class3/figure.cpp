#include <iostream>
#include "figure.h"

void figure::setFigure(int v, int h, bool c) {
	if (v < 0 || v > 7 || h < 0 || h > 7) {
		std::cout << "Невірні дані" << std::endl;
	}
	else {
		ver = v;
		hor = h;
		color = c;
	}
}

void figure::getFigure() {
	char* col;
	if (color == true)
		col = "white";
	else
		col = "black";

	std::cout << "ver = " << ver << std::endl;
	std::cout << "hor = " << hor << std::endl;
	std::cout << "color = " << col << std::endl;
}

bool figure::stepToLeft() {
	if (color == true) {
		if (ver < 7 && hor > 0) {
			ver++;
			hor--;
			return true;
		}
		else {
			std::cout << "Хід неможливий" << ver << std::endl;
			return false;
		}

	}
	else {
		if (ver > 0 && hor > 0) {
			ver--;
			hor--;
			return true;
		}
		else {
			std::cout << "Хід неможливий" << ver << std::endl;
			return false;
		}
	}
};

bool figure::stepToRight() {
	if (color == true) {
		if (ver < 7 && hor < 7) {
			ver++;
			hor++;
			return true;
		}
		else {
			std::cout << "Хід неможливий" << ver << std::endl;
			return false;
		}
	}
	else {
		if (ver > 0 && hor < 7) {
			ver--;
			hor++;
			return true;
		}
		else {
			std::cout << "Хід неможливий" << ver << std::endl;
			return false;
		}
	}
};