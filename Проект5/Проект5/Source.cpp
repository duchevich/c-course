#include <iostream>
#include <string>
using namespace std;

struct student {
	string pib;
	int mat, fiz, prg;
	float sb;
}st1;

void main()
{
	setlocale(0, "");
	cout << "������ ���������� " << endl;
	cout << "������� �� ������� ";
	getline(cin, st1.pib);
	cout << "������ " << endl;
	cout << "���������� " << endl;
	cin >> st1.mat;
	cout << "Գ���� " << endl;
	cin >> st1.fiz;
	cout << "�������������" << endl;
	cin >> st1.prg;
	st1.sb = float(st1.fiz + st1.mat + st1.prg) / 3;
	cout << st1.pib << "\t" << st1.mat << "\t" << st1.fiz << "\t" << st1.prg << "\t" << st1.sb << endl;
	system("pause");
}