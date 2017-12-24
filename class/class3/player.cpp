#include <iostream>
#include "checker.h"
#include "king.h"
#include "player.h"


void player::initCkrWhite() {
	int i, j;
	int c = 0;
	for (i = 0; i < 3; i++) {
		if (i == 1) {
			for (j = 1; j < 8; j += 2) {
				ckr[c].setChecker(c, i, j, true);
				c++;
			}
		}
		else {
			for (j = 0; j < 8; j += 2) {
				ckr[c].setChecker(c, i, j, true);
				c++;
			}
		}
	}
};

void player::initCkrBlack() {
	int i, j;
	int c = 0;
	for (i = 5; i < 8; i++) {
		if (i == 6) {
			for (j = 0; j < 8; j += 2) {
				ckr[c].setChecker(c, i, j, false);
				c++;
			}
		}
		else {
			for (j = 1; j < 8; j += 2) {
				ckr[c].setChecker(c, i, j, false);
				c++;
			}
		}
	}
};

player::player() {
	name = "Гравець 1";
	color = true;
	count = 12;
	initCkrWhite();
};

player::player(std::string n, bool c) {
	setPlayer(n, c);
};

void player::setPlayer(std::string n, bool c) {
	name = n;
	color = c;
	count = 12;
	if (color == true) {
		initCkrWhite();
	}
	else {
		initCkrBlack();
	}

};
void player::getPlayer() {
	for (int i = 0; i < 12; i++) {
		ckr[i].getChecker();
	}
};

void player::printCheckArr() {
	bool flag = true;
	for (int i = 7; i >= 0; i--) {
		for (int j = 0; j < 8; j++) {
			for (int c = 0; c < 12; c++) {
				if (ckr[c].fig.ver == i && ckr[c].fig.hor == j) {
					std::cout << "o";
					flag = false;
					break;
				}
			}
			if (flag == true) {
				std::cout << "_";
			}
			else {
				flag = true;
			}
		}
		std::cout << std::endl;
	}
};

void player::step() {
	std::cout << "Введіть номер шашки:" << std::endl;
	char input[2];
	char myStep;
	int num = 0;
	scanf_s("%d", &num);
	if (num < 0 || num > 11) {
		std::cout << "Невірний номер шашки (нумерація шашок від 0 до 11)" << std::endl;
		step();
	}
	if (ckr[num].exist == false) {
		std::cout << "Ця шашка бита" << std::endl;
	}
	if (ckr[num].king == false) {
		std::cout << "Введіть напрямок ходу (вліво - l, вправо - r)" << std::endl;
		std::cin >> myStep;
		while (true) {
			if (myStep == 'l' || myStep == 'r') {
				ckr[num].step(myStep);
				break;
			}
			else {
				std::cout << "Невірний напрямок ходу (вліво - l, вправо - r)" << std::endl;
				std::cin >> myStep;
			}
		}
		
	}
	

};