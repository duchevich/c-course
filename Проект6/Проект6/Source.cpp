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
		cout << "Введіть інформацію про " <<  i+1 << "студента" << endl;
		cout << "Прізвище та ініціали ";
		cin >> spisok[i].pib;
		cout << "Оцінки " << endl;
		cout << "Математика " << endl;
		cin >> spisok[i].mat;
		cout << "Фізика " << endl;
		cin >> spisok[i].fiz;
		cout << "Програмування" << endl;
		cin >> spisok[i].prg;
		spisok[i].sb = float(spisok[i].fiz + spisok[i].mat + spisok[i].prg) / 3;
		sm += spisok[i].mat;
		sf += spisok[i].fiz;
		sp += spisok[i].prg;
	}
	cout << "Результат сессії " << endl;
	cout << "№" << " прiзвище " << "математика " << "фiзика " << "програмування " << "середнiй бал"
		<< endl;
	for (i = 0; i < N; i++) cout << i + 1 << " " << spisok[i].pib << "\t" << spisok[i].mat << "\t" << spisok[i].fiz <<
		"\t" << spisok[i].prg << "\t" << (float)spisok[i].sb << endl;
	cout << "Среднiй бал групи з математики = " << (float)sm / N << endl;
	cout << "Среднiй бал групи з фiзики = " << (float)sf / N << endl;
	cout << "Среднiй бал групи з програмування = " << (float)sp / N << endl;
	cout << "Вiдмiнники з програмування: " << endl;
	for (i = 0; i < N; i++) if (spisok[i].prg == 5) cout << spisok[i].pib << endl;
	system("pause");
}