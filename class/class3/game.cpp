#include <iostream>
#include "game.h"

game::game() {
	std::string input = "Player 1";
	play[0].setPlayer(input, true);
	input = "Player 2";
	play[0].setPlayer(input, false);
};
game::~game() {};

void game::setGame() {
	char input[100];
	std::cout << "Введіть імя гравця, що грає білими шашками" << std::endl;
	std::cin >> input;
	play[0].setPlayer(input, true);
	std::cout << "Введіть імя гравця, що грає чорними шашками" << std::endl;
	std::cin >> input;
	play[1].setPlayer(input, false);
};
void game::printScreen() {
	bool flag = true;
	for (int i = 7; i >= 0; i--) {
		for (int j = 0; j < 8; j++) {
			for (int c = 0; c < 12; c++) {
				if (play[0].ckr[c].fig.ver == i && play[0].ckr[c].fig.hor == j) {
					std::cout << "o";
					flag = false;
					break;
				}
				if (play[1].ckr[c].fig.ver == i && play[1].ckr[c].fig.hor == j) {
					std::cout << "x";
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


bool game::checkField(int ver, int hor) {
	for (int c = 0; c < 12; c++) {
		if (play[0].ckr[c].fig.ver == ver && play[0].ckr[c].fig.hor == hor && play[0].ckr[c].exist == true) {
			return false;
		}
		if (play[1].ckr[c].fig.ver == ver && play[1].ckr[c].fig.hor == hor && play[1].ckr[c].exist == true) {
			return false;
		}
	}
	return true;
};

void game::playGame() {
	setGame();
	while (true) {
		printScreen();
		std::cout << std::endl;
		if (play[0].count == 0) {
			std::cout << "Білі програли" << std::endl;
			break;
		}
		if (play[1].count == 0) {
			std::cout << "Чорні програли" << std::endl;
			break;
		}
		play[0].step();
		std::cout << std::endl;
		printScreen();
		std::cout << std::endl;
		play[1].step();
		std::cout << std::endl;
	}
};