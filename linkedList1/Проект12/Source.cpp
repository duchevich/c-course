/*
	1. Створити зв’язаний список, який буде містити перелік кінофільмів та їх рейтинг. 
		Організувати ввід даних в список та роздрукувати його.
*/

#include<iostream>
#include<string>
using namespace std;

// оголошення вузла списку
typedef struct film
{
	string name;
	float rating;
	struct film *next;
}filmn, *filmp;

// функція створення списку
filmp create_list()
{
	cout << "Введiть елементи списку:" << endl;
	filmp p, q, dl;
	p = new film;
	dl = p;
	char input[10];
	cout << "назва фільму: ";
	cin >> p->name;
	cout << "рейтинг фільму: "; 
	cin >> input;
	p->rating = atof(input);
	p->next = NULL;
	char c;
	cout << "Буде наступний елемент? (Y/N) "; cin >> c;
	while ((c == 'y') || (c == 'Y')) {
		q = new film;
		cout << "назва фільму: ";
		cin >> q->name;
		cout << "рейтинг фільму: ";
		cin >> input;
		q->rating = atof(input);
		q->next = NULL;
		p->next = q;
		p = q;
		cout << "Буде наступний елемент? (Y/N) "; cin >> c;
	}
	return dl;
}

// функція виводу списку
void print(filmp p)
{
	filmp q;
	if (p == NULL) cout << "Дані не введені" << endl;
	q = p;
	while (q != NULL) {
		cout << "назва фільму: " << q->name << endl;
		cout << "рейтинг фільму: " << q->rating << endl;
		q = q->next;
	}
}
void main()
{
	setlocale(0, "");
	filmp p;
	p = create_list();
	print(p);
	system("pause");
}