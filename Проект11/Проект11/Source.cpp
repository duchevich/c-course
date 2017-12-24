#include<iostream>
using namespace std;

typedef struct list
{
	int val;
	struct list *next;
}listn, *listp;

listp create_list()
{
	cout << "������� �������� ������: " << endl;
	listp p, q, dl;
	p = new list;
	dl = p;
	cout << "��������: ";
	cin >> p->val;
	p->next = NULL;
	char c;
	cout << "���� ��������� �������? (Y/N) "; 
	cin >> c;
	while ((c == 'y') || (c == 'Y')) {
		q = new list;
		cout << "��������: ";
		cin >> q->val;
		q->next = NULL;
		p->next = q;
		p = q;
		cout << "���� ��������� �������? (Y/N) "; 
		cin >> c;
	}
	return dl;
}
void print(listp p)
{
	listp q;
	if (p == NULL) cout << "��� �� ������" << endl;
	q = p;
	while (q != NULL) {
		cout << "��������: " << q->val << endl;
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
	cout << "������ ����������" << endl;
	p = create_list();
	print(p);
	cout << "������ ����� ������� "; cin >> k;
	Add_node(p, k);
	print(p);
	cout << "�������� ������� " << endl;
	p = Del_node(p, p->next); // ��������� ������� �������� ������
	print(p);
	system("pause");
}