/*
8. Даний многочлен P(x) довільного ступеня з цілими коефіцієнтами, причому його одночлени можуть бути не впорядковані 
по ступенях x, а одночлени з однаковим ступенем можуть повторюватися (наприклад, 75x+8x4-x2+6x4–5-x). 
Привести подібні члени в цьому многочлені і розташувати одночлени по спаданню ступенів x.
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
	cout << "Введiть елементи многочлену:" << endl;
	itemPointer beginList, endList, cursor;
	endList = new item;
	beginList = endList;
	char input[10];
	cout << "значення одночлену: ";
	cin >> endList->value;
	cout << "ступінь: ";
	cin >> input;
	endList->pow = atoi(input);
	endList->next = NULL;
	char c;
	cout << "Буде наступний елемент? (Y/N) "; cin >> c;
	while ((c == 'y') || (c == 'Y')) {
		cursor = new item;
		cout << "значення одночлену: ";
		cin >> cursor->value;
		cout << "ступінь: ";
		cin >> input;
		cursor->pow = atoi(input);
		cursor->next = NULL;
		endList->next = cursor;
		endList = cursor;
		cout << "Буде наступний елемент? (Y/N) "; cin >> c;
	}
	return beginList;
}

void printList(itemPointer beginList)
{
	itemPointer cursor;
	cursor = beginList;
	if (beginList == NULL) {
		cout << "Дані не введені" << endl;
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
