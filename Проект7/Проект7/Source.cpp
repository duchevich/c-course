/*
4. Структурований тип: абонент телефоного зв’язку.
Поля: ПІБ абонента, номер телефону, тип з’єднання (індивідуальний, спарений, колективного користування),
адреса власника.
Функції: введення кількості абонентів, заповненвя масиву структур, вивід інформації на екран, 
пошук абонента за заданим номером, підрахунок кількості абонентів з телефоном індивідуального користування.
*/

#include <iostream>
#include <string>
#define N 30
using namespace std;

struct abonent
{
	string name;
	int number;
	int connect;
	string address;
}list[N];

void main()
{
	setlocale(0, "");

	// введення списку данних
	cout << "Введіть довжину списку" << endl;
	int len = 0;
	cin >> len;
	for (int i = 0; i < len; i++) {				
		cout << "Введіть інформацію про " << i + 1 << "абонента" << endl;
		cout << "Прізвище ";
		cin >> list[i].name;
		cout << "Номер телефону " << endl;
		cin >> list[i].number;
		if (!cin) {
			cout << "Введіть коректний номер телефону " << endl;
			cin >> list[i].number;
		}
		cout << "Тип зєднання: 1 - індивідуальний, 2 - спарений, 3 - колективного користування" << endl;
		cin >> list[i].connect;
		cout << "Адреса ";
		cin >> list[i].address;
	}
	// друк  списку данних
	for (int i = 0; i < len; i++)
		cout << i + 1 << " " << list[i].name << "\t" << list[i].number << "\t" << list[i].connect << " " << list[i].address << endl;

	// підрахунок кількості абонентів з телефоном індивідуального користування
	int indiv = 0;
	for (int i = 0; i < len; i++) {
		if (list[i].connect == 1) indiv++;
	}
	cout << indiv << endl;

	// пошук абонента за заданим номером	
	cout << "Введіть номер абонента" << endl;
	int phone;
	cin >> phone;
	for (int i = 0; i < len; i++) {
		if (list[i].number == phone) {
			cout << "Ви шукали абонента " << endl;
			cout << i + 1 << " " << list[i].name << endl;
		}
	}

	system("pause");
}


/**
3. Структурований тип: Фірма.
Поля: назва фірми, ПІБ директора, кількість співробітників, адреса, уставний капітал.
Функції: введення кількості фірм з клавіатури, заповненвя масиву структур, вивід інформації на
екран, обчислення середнього уставного капіталу, пошук фірми за ПІБ директора.

**/
/*
#include <iostream>
#include <string>
#define N 30
using namespace std;

struct firma
{
	string name;
	string director;
	int personal;
	string address;
	float capital;
}list[N];

void main()
{
	setlocale(0, "");

	// введення списку данних
	cout << "Введіть довжину списку" << endl;
	int len = 0;
	cin >> len;
	for (int i = 0; i < len; i++) {
		cout << "Введіть інформацію про " << i + 1 << "фірму" << endl;
		cout << "Назва ";
		cin >> list[i].name;
		cout << "Директор " << endl;
		cin >> list[i].director;
		cout << "Кількість персоналу " << endl;
		cin >> list[i].personal;
		cout << "Адреса ";
		cin >> list[i].address;
		cout << "Cередній уставний капітал " << endl;
		cin >> list[i].capital;
	}
	// друк  списку данних
	for (int i = 0; i < len; i++)
		cout << i + 1 << " " << list[i].name << "\t" << list[i].director << "\t" << list[i].personal << " " << list[i].address << "\t" << list[i].capital << endl;

	// обчислення середнього уставного капіталу
	float capital = 0;
	for (int i = 0; i < len; i++) {
		capital += list[i].capital;
	}
	capital /= len;
	cout << capital << endl;

	// пошук фірми за ПІБ директора
	cout << "Введіть імя директора" << endl;
	string dir;
	cin >> dir;
	for (int i = 0; i < len; i++) {
		if (list[i].director == dir){
			cout << "Ви шукали фірму " << endl;
			cout << i + 1 << " " << list[i].name << endl;
		}
	}

	system("pause");
}
*/

/*
#include <iostream>
#include <string>
#define N 30
using namespace std;

struct student
{
string name;
bool gender;
float bal;
}list[N];

void main()
{
setlocale(0, "");

// введення списку данних
cout << "Введіть довжину списку" << endl;
int len = 0;
cin >> len;
for (int i = 0; i < len; i++) {
cout << "Введіть інформацію про " << i + 1 << "студента" << endl;
cout << "Имя ";
cin >> list[i].name;
cout << "Стать " << endl;
cin >> list[i].gender;
cout << "Середний бал " << endl;
cin >> list[i].bal;
}
// друк  списку данних
for (int i = 0; i < len; i++)
cout << i + 1 << " " << list[i].name << "\t" << list[i].gender << "\t" << list[i].bal << endl;


int man = 0;
int woman = 0;
int man_bal = 0;
int woman_bal = 0;

for (int i = 0; i < len; i++) {
if (list[i].gender == true) {
woman++;
woman_bal += list[i].bal;
}
else {
man++;
man_bal += list[i].bal;
}
}
man_bal = man_bal / man;
woman_bal = woman_bal / woman;

(woman_bal > man_bal) ? cout << "Перемогли жінки" << endl : cout << "Перемогли чоловіки" << endl;




system("pause");
}

*/


/**
1. Увести інформацію про монітори комп’ютерів: назву, термін гарантії, ціну. Відсортувати
монітори за спаданням ціни і вивести відповідні повідомлення.
**/





/*#include <iostream>
#include <string>
#define N 100
using namespace std;

struct comp
{
	string name;
	string garanty;
	float price;
}list[N];

void main()
{
	setlocale(0, "");
	// введення списку данних
	cout << "Введіть довжину списку" << endl;
	int len = 0;
	cin >> len;
	for (int i = 0; i < len; i++) {
		cout << "Введіть інформацію про " << i + 1 << "монітор" << endl;
		cout << "Назва ";
		cin >> list[i].name;
		cout << "Гарантійний термін " << endl;
		cin >> list[i].garanty;
		cout << "Ціна " << endl;
		cin >> list[i].price;
	}

	//сортування 
	int j = 0;
	comp tmp;
	while (j < len) {
		for (int i = 0; i < len-1; i++) {
			if (list[i].price > list[i + 1].price) {
				tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
		}
		j++;
	}




	// друк  списку данних
	for (int i = 0; i < len; i++) 
		cout << i + 1 << " " << list[i].name << "\t" << list[i].garanty << "\t" << list[i].price << endl;

	system("pause");
}*/