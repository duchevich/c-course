#include<iostream>
using namespace std;

typedef struct list
{
	int val;
	struct list *next;
}listn, *listp;

listp create_list()
{
	cout << "Введите элементы списка: " << endl;
	listp p, q, dl;
	p = new list;
	dl = p;
	cout << "значення: ";
	cin >> p->val;
	p->next = NULL;
	char c;
	cout << "Буде наступний елемент? (Y/N) "; 
	cin >> c;
	while ((c == 'y') || (c == 'Y')) {
		q = new list;
		cout << "значення: ";
		cin >> q->val;
		q->next = NULL;
		p->next = q;
		p = q;
		cout << "Буде наступний елемент? (Y/N) "; 
		cin >> c;
	}
	return dl;
}
void print(listp p)
{
	listp q;
	if (p == NULL) cout << "Дані не введені" << endl;
	q = p;
	while (q != NULL) {
		cout << "значення: " << q->val << endl;
		q = q->next;
	}
}
void Add_node(listp p, int v)
{
	listp q;
	q = new list;
	q->val = v;
	q->next = p->next;
	p->next = q;
}
listp Del_node(listp dl, listp p)
{
	listp q;
	if (p == dl) dl = dl->next;
	else {
		q = dl;
		while ((q->next != p) || (q->next == NULL)) q = q->next;
		q->next = p->next;
	}
	delete p;
	return dl;
}
void main()
{
	listp dl, p;
	int k;
	setlocale(LC_ALL, "RUS");
	cout << "Введіть інформацію" << endl;
	p = create_list();
	print(p);
	cout << "Додати новий елемент "; cin >> k;
	Add_node(p, k);
	print(p);
	cout << "Видалити елемент " << endl;
	p = Del_node(p, p->next); // видалення другого елементу списку
	print(p);
	system("pause");
}