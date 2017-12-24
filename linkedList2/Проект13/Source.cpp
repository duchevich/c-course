/*
2. �������� �������� ������. ���� ������ ������� ������ � ���������, 
	�� ������� ���� ������ � ������� ���������.
*/

#include<iostream>
#include<string>
using namespace std;

typedef struct number
{
	int num;
	struct number *next;
}numbern, *numberp;

// ������� ��� ��������� �� ���������� ������
numberp create_list()
{
	cout << "����i�� �������� ������:" << endl;
	// ��������� ������ �� ��������� �����
	numberp p, q, dl;
	p = new number;
	dl = p;
	// ���  �� �������� ������
	char input[10];
	cout << "�����: ";
	cin >> input;
	// ��������� ������� ����� ������
	p->num = atoi(input);
	p->next = NULL;
	char c;
	cout << "���� ��������� �������? (Y/N) "; cin >> c;
	// ���������� ������
	while ((c == 'y') || (c == 'Y')) {
		q = new number;
		cout << "�����: ";
		cin >> input;
		q->num = atoi(input);
		q->next = NULL;
		p->next = q;
		p = q;
		cout << "���� ��������� �������? (Y/N) "; cin >> c;
	}
	return dl;
}

// ������� ����� ������
void print(numberp p)
{
	numberp q;
	if (p == NULL) cout << "��� �� ������" << endl;
	q = p;
	while (q != NULL) {
		cout << q->num << " ";
		q = q->next;
	}
	cout << endl;
}

// �������, ��� ���� ������ ������ �� ������� ��������, ���� ������ ������� ������ � ���������
void ifFirstMinToEnd(numberp p) 
{
	numberp first = p;
	numberp prev = p;
	numberp cursor = p;
	int min = first->num;
	// ����� ���������� �������� � ������
	while (cursor != NULL) {
		if (cursor->num < min) {
			min = cursor->num;
		}
		prev = cursor;
		cursor = cursor->next;
	}
	// ������� ������ ������� ������� �� ���������� ��������, ���� ������ ������� ������ � ���������
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