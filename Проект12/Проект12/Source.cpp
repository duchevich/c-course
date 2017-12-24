#include<iostream>
#include<string>
using namespace std;

typedef struct film
{
	string name;
	float rating;
	struct film *next;
}filmn, *filmp;

filmp create_list()
{
	cout << "����i�� �������� ������:" << endl;
	filmp p, q, dl;
	p = new film;
	dl = p;
	cout << "����� ������: ";
	cin >> p->name;
	cout << "������� ������: ";
	cin >> p->rating;
	p->next = NULL;
	char c;
	cout << "���� ��������� �������? (Y/N) "; cin >> c;
	while ((c == 'y') || (c == 'Y')) {
		q = new film;
		cout << "����� ������: ";
		cin >> q->name;
		cout << "������� ������: ";
		cin >> q->rating;
		q->next = NULL;
		p->next = q;
		p = q;
		cout << "���� ��������� �������? (Y/N) "; cin >> c;
	}
	return dl;
}

void print(filmp p)
{
	filmp q;
	if (p == NULL) cout << "��� �� ������" << endl;
	q = p;
	while (q != NULL) {
		cout << "����� ������: " << q->name << endl;
		cout << "������� ������: " << q->rating << endl;
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