#include <iostream>
#include<string>
#define N 3
using namespace std;
struct stud 
{
	string pib;
	int mat, fiz, prg;
	float sb;
}spisok[N];

void main()
{
	int i, sm = 0, sf = 0, sp = 0;
	setlocale(0, "");
	for (int i = 0; i < N; i++) {
		cout << "������ ���������� ��� " <<  i+1 << "��������" << endl;
		cout << "������� �� ������� ";
		cin >> spisok[i].pib;
		cout << "������ " << endl;
		cout << "���������� " << endl;
		cin >> spisok[i].mat;
		cout << "Գ���� " << endl;
		cin >> spisok[i].fiz;
		cout << "�������������" << endl;
		cin >> spisok[i].prg;
		spisok[i].sb = float(spisok[i].fiz + spisok[i].mat + spisok[i].prg) / 3;
		sm += spisok[i].mat;
		sf += spisok[i].fiz;
		sp += spisok[i].prg;
	}
	cout << "��������� ���� " << endl;
	cout << "�" << " ��i����� " << "���������� " << "�i���� " << "������������� " << "������i� ���"
		<< endl;
	for (i = 0; i < N; i++) cout << i + 1 << " " << spisok[i].pib << "\t" << spisok[i].mat << "\t" << spisok[i].fiz <<
		"\t" << spisok[i].prg << "\t" << (float)spisok[i].sb << endl;
	cout << "�����i� ��� ����� � ���������� = " << (float)sm / N << endl;
	cout << "�����i� ��� ����� � �i���� = " << (float)sf / N << endl;
	cout << "�����i� ��� ����� � ������������� = " << (float)sp / N << endl;
	cout << "�i��i����� � �������������: " << endl;
	for (i = 0; i < N; i++) if (spisok[i].prg == 5) cout << spisok[i].pib << endl;
	system("pause");
}