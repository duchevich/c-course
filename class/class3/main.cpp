/*
�����
1. ���������� ���������� ����, � ����������� ����������� ���������� �����, � ����� �����������: ������������, ����������, 
	�������-������������ � �������-���������. �������-����� ����� ���� ��������� �� ������ �����. ���������� ������� 
	������ �������.
	���� ��������: ���������� �� ���������, ����. ����� � ���� � � ������ � ���� ��������.
	�������� �����: ������� � (���������� �����) � �������, ������ � ���� � �����. ������� ���� ��������� �� ������.

2. ���� �������: ���������� �� ���������, ����. ����� � ���� � � ������ � ���� ��������. ������� �����: 
	������ � (���������� �����) � ������, ������ � ���� � �����.
	� ������ ������������� ������ ������� �/� �� �� ᒺ » � �������� ������������ ���� (�� ������ � ������).
*/

#include <iostream>
#include "game.h"

using namespace std;

void main()
{
	setlocale(0, "");
	game myGame;
	myGame.playGame();

	system("pause");
}


/*
player pl;
int num;
char step = 'l';
while (true) {
pl.printCheckArr();
cout << "Enter num and step" << endl;
cin >> num;
cin >> step;
if (step != 'l' && step != 'r') break;
pl.step(num, step);
}
*/