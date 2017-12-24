/*
2. На вході задано лінійний список М із n цілих чисел. Відомо, що більшість елементів цього списку
	рівні нулю. Організувати зв’язане стисле зберігання цього списку, функцію пошуку і-ого елементу і
	перевірити чи співпадає він з мінімальним елементом списку.
*/

#include <iostream>

using namespace std;

#define N 1000

typedef struct node {
	int value;
	int index;
	struct node *next;
}*nodePointer;


void createList(nodePointer &myList, int qlt, int &min)
{
	char input[10];
	int value = 0;
	cout << "Введіть списoк:" << endl;
	for (int i = 0; i < qlt; i++) {
		
		cin >> input;
		value = atoi(input);
		if (i == 0) min = value;
		if (value != 0) {
			nodePointer nod = new node;
			nod->value = value;
			nod->index = i;
			nod->next = myList;
			myList = nod;
			if (min > value) min = value;
		}
	}
}

void printList(nodePointer myList)
{
	nodePointer cursor;
	if (myList == NULL) {
		cout << "Дані не введені" << endl;
	}
	else {
		cursor = myList;
		while (cursor != NULL) {
			cout << cursor->value << " ";
			cursor = cursor->next;
		}
		cout << endl;
	}
}

void search(nodePointer &myList, int qlt, int &min)
{
	cout << "Введіть індекс елементу:" << endl;
	char input[10];
	int value = 0;
	cin >> input;
	value = atoi(input);
	if((value >= qlt) || (value < 0))
		cout << "Такого індексу немає в списку:" << endl;
	if (myList == NULL) {
		cout << "Порожній список!" << endl;
	}
	else {
		nodePointer cursor;
		int count = 0;
		cursor = myList;
		while (cursor != NULL) {
			if (cursor->index == value) {
				cout << cursor->value << endl;
				if (cursor->value == min) {
					cout << "Число є мінімальним" << endl;
				}
				break;
			}
			cursor = cursor->next;
		}
		if(cursor == NULL)
			cout << '0' << endl;
	}
}

void main()
{
	setlocale(0, "");
	int qlt = 0;
	int min = 0;
	char input[10];
	cout << "Введіть розмір списку" << endl;
	cin >> input;
	qlt = atoi(input);
	nodePointer myList = NULL;
	createList(myList, qlt, min);
	cout << min << endl;
	cout << endl;
	search(myList, qlt, min);
	cout << endl;
	printList(myList);
	system("pause");
}
