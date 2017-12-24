/*
2. Створити зв’язаний список. Якщо перший елемент списку є мінімальним, 
	то поміняти його місцями з останнім елементом.
*/

#include<iostream>
#include<string>
using namespace std;

typedef struct number
{
	int num;
	struct number *next;
}numbern, *numberp;

// функція для створення та заповнення списку
numberp create_list()
{
	cout << "Введiть елементи списку:" << endl;
	// створення списку та допоміжних вузлів
	numberp p, q, dl;
	p = new number;
	dl = p;
	// ввід  та перевірка данних
	char input[10];
	cout << "число: ";
	cin >> input;
	// створення першого вузла списку
	p->num = atoi(input);
	p->next = NULL;
	char c;
	cout << "Буде наступний елемент? (Y/N) "; cin >> c;
	// заповнення списку
	while ((c == 'y') || (c == 'Y')) {
		q = new number;
		cout << "число: ";
		cin >> input;
		q->num = atoi(input);
		q->next = NULL;
		p->next = q;
		p = q;
		cout << "Буде наступний елемент? (Y/N) "; cin >> c;
	}
	return dl;
}

// функція друку списку
void print(numberp p)
{
	numberp q;
	if (p == NULL) cout << "Дані не введені" << endl;
	q = p;
	while (q != NULL) {
		cout << q->num << " ";
		q = q->next;
	}
	cout << endl;
}

// функція, яка міняє місцями перший та останній елементи, якщо перший елемент списку є мінімальним
void ifFirstMinToEnd(numberp p) 
{
	numberp first = p;
	numberp prev = p;
	numberp cursor = p;
	int min = first->num;
	// пошук мінімального значення в списку
	while (cursor != NULL) {
		if (cursor->num < min) {
			min = cursor->num;
		}
		prev = cursor;
		cursor = cursor->next;
	}
	// переміна місцями значень першого та останнього елементів, якщо перший елемент списку є мінімальним
	if (min == first->num) {
		first->num = prev->num;
		prev->num = min;
	}

}
void main()
{
	setlocale(0, "");
	numberp p;
	p = create_list();
	print(p);
	ifFirstMinToEnd(p);
	print(p);
	
	system("pause");
}