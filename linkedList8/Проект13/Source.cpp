/*
8. ����� ��������� P(x) ��������� ������� � ������ �������������, ������� ���� ��������� ������ ���� �� ������������ 
�� �������� x, � ��������� � ��������� �������� ������ ������������� (���������, 75x+8x4-x2+6x4�5-x). 
�������� ������ ����� � ����� ���������� � ����������� ��������� �� �������� �������� x.
*/

#include<iostream>
#include<string>
using namespace std;

typedef struct item {
	int value;
	int pow;
	struct item *next;
} *itemPointer;

itemPointer enterList()
{
	cout << "����i�� �������� ����������:" << endl;
	itemPointer beginList, endList, cursor;
	endList = new item;
	beginList = endList;
	char input[10];
	cout << "�������� ���������: ";
	cin >> endList->value;
	cout << "������: ";
	cin >> input;
	endList->pow = atoi(input);
	endList->next = NULL;
	char c;
	cout << "���� ��������� �������? (Y/N) "; cin >> c;
	while ((c == 'y') || (c == 'Y')) {
		cursor = new item;
		cout << "�������� ���������: ";
		cin >> cursor->value;
		cout << "������: ";
		cin >> input;
		cursor->pow = atoi(input);
		cursor->next = NULL;
		endList->next = cursor;
		endList = cursor;
		cout << "���� ��������� �������? (Y/N) "; cin >> c;
	}
	return beginList;
}

void printList(itemPointer beginList)
{
	itemPointer cursor;
	cursor = beginList;
	if (beginList == NULL) {
		cout << "���� �� �������" << endl;
	}
	else{
		while (cursor != NULL) {
			cout << cursor->value << "x" << cursor->pow << " ";
			cursor = cursor->next;
		}
	}
	cout << endl;
}

void privedennya(itemPointer beginList)
{
	itemPointer cursor, cursor1, tmp, prev;
	cursor = beginList;
	int power;
	while (cursor != NULL)
	{
		power = cursor->pow;
		cursor1 = cursor->next;
		prev = cursor;
		while (cursor1 != NULL)
		{
			if (cursor1->pow == power) {
				cursor->value += cursor1->value;
				prev->next = cursor1->next;
				tmp = cursor1;
				cursor1 = cursor1->next;
				delete tmp;
			}
			else {
				cursor1 = cursor1->next;
				prev = prev->next;
			}
		}
		cursor = cursor->next;
	}
}

itemPointer sort(itemPointer beginList)
{
	itemPointer cursor, cursor1, prev, begin;
	cursor = beginList;
	begin = beginList;
	int min;
	min = cursor->pow;
	while (cursor != NULL)
	{
		cursor1 = cursor->next;
		prev = cursor;
		while (cursor1 != NULL)
		{
			if (cursor1->pow < min) {
				min = cursor1->pow;
				prev->next = cursor1->next;
				cursor1->next = begin;
				begin = cursor1;
				cursor1 = prev->next;

			}
			else {
				cursor1 = cursor1->next;
				prev = prev->next;
			}
		}
		cursor = cursor->next;
	}
	return begin;
}

void main()
{
	setlocale(0, "");
	itemPointer myList = enterList();
	printList(myList);
	privedennya(myList);
	printList(myList);
	myList = sort(myList);
	printList(myList);
	system("pause");
}
